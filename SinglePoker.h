#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<time.h>
#include<vector>
#include<conio.h>
#include"one_poker.h"
#include"stake.h"
using namespace std;
void in()
{
	cout<<"此遊戲為單張撲克，但與一般的單張撲克有些不同"<<endl;
	getch();
	system("CLS");
	cout<<"手牌有兩張，而且是在手牌半透明的情況下進行"<<endl;
	getch();
	system("CLS");
	cout<<"對手的牌組的相對大小，會顯示於左上角"<<endl;
	getch();
	system("CLS");
	cout<<"此為牌面大小的判斷(不計花色)"<<endl;
	getch();
	system("CLS");
	cout<<"<------ down | up   ---------> "<<endl;
	cout<<" 2<3<4<5<6<7 < 8<9<10<J<Q<K<A "<<endl;
	getch();
	system("CLS");
	cout<<"而且與皇帝牌類似，最小牌可以贏最大牌"<<endl;
	getch();
	system("CLS");
	cout<<"也就是2>A"<<endl;
	getch();
	system("CLS");
	cout<<"在出牌階段，輸入0來出左手邊的牌，輸入1來出右手邊的牌"<<endl;
	getch();
	system("CLS");
	cout<<"在加注階段，輸入r以加注、c以跟注、f以棄牌、s以確認現況、e以跟注並結束加注階段"<<endl;
	getch();
	system("CLS");
	cout<<"假設在自己賭注小於對手賭注時輸入e，會自動跟注並結束加注階段"<<endl;
	getch();
	system("CLS");
	cout<<"加注至多加至對手所持金額"<<endl;
	getch();
	system("CLS");
	cout<<"在開牌階段，無論雙方有無棄注都會開牌，此段不須操作"<<endl;
	getch();
	system("CLS");
	cout<<"平手時，雙方賭金會留給下一局的贏家"<<endl;
	getch();
	system("CLS");
	cout<<"基本賭注為1000萬，也就是1個籌碼"<<endl;
	getch();
	system("CLS");
	cout<<"遊戲會進行至一方破產為止"<<endl;
	getch();
	system("CLS");
	cout<<"...以上..."<<endl;
	getch();
	system("CLS");
}
int SinglePoker(Stake &P1)
{
	//initwindow(1250,600);
	in(); 
    Up_down_card p1,p2;
    char *AI_name="Kaiji",*name="Fukumoto";
	Stake P2(100000000,10000000,0);
	P1.change_basis(10000000);
    int sho1,sho2,rais2,call2;//自己的牌，AI的牌，AI加注數，AI最大跟注數 
    bool turn=true,fold2;//加注順序，對手棄牌判斷 
    char control;
    srand(time(NULL));
    ima();
    p1.init(p2);//洗牌+發牌 
    p1.updown();
    p2.updown();
    draw_up_down(p2,p1);
    p1.show();
    p2.AI_show();
    //p2.show();測試用 
    sho1=p1.shot();
    if(sho1==1000)
    	return 0;//測試者專用
    sho2=p2.AI_shot(p1);
    cout<<"It's raising step now"<<endl;
    //_sleep(rand()%3000);//AI假裝思考 
    p2.AI_raise(rais2);//將加注判斷結果傳出 
    if(rais2!=0)
    	P2.raise(P1,rais2,AI_name);//敵方加注 
    p2.AI_call(call2);//將跟注判斷結果傳出 
    do
    {
    	cin>>control;
    	switch(control)
    	{
    		case 'r':
    			P1.raise(P2,true,name);
    			//_sleep(rand()%3000);//AI假裝思考 
    			fold2=P2.call(P1,(bool)call2,AI_name);//敵方跟注 
    			break;
    		case 'c':
    		case 'e':
    			P1.call(P2,true,name);
    			break;
    		case 'f':
    			P1.fol(name);
    			break;
    		case 's':
    			P1.show(P2);
    			break;
    		default:
    			break;
		}
	}
	while(control!='e'&&control!='f'&&fold2==false);//exit結束加注階段，或f(棄牌)必定結束加注階段 
	cout<<"CHECK"<<endl<<"----"<<suit[sho1%4]<<" ";
    cout<<setw(3)<<number[sho1/4]<<"----"<<endl;
    cout<<"----"<<suit[sho2%4]<<" ";
    cout<<setw(3)<<number[sho2/4]<<"----"<<endl; 
    switch(gam(sho2,sho1))
    {
    	case 0:
    		P1.v_or_d(0,P2,name);
    		P2.v_or_d(0,P1,AI_name);
    		break;
    	case 1:
    		P1.v_or_d(1,P2,name);
    		P2.v_or_d(-1,P1,AI_name);
    		break;
    	case 2:
    		P1.v_or_d(-1,P2,name);
    		P2.v_or_d(1,P1,AI_name);
    		break;
    	default:
    		break;
	}
	fold2=false;
	P1.show(P2);//顯示金額 
    while(P1.con(P2))
    {
    	ima();
    	turn=!turn;//換順序 
    	p1.deal();
    	p2.deal();
    	p1.updown();
    	p2.updown();
    	draw_up_down(p2,p1);
    	p1.show();
    	p2.AI_show();
    	//p2.show();
    	sho1=p1.shot();
    	if(sho1==1000)
    		return 0;//測試者專用 
    	sho2=p2.AI_shot(p1);
    	cout<<"It's raising step now"<<endl;
    	p2.AI_raise(rais2);//將是否加注判斷結果傳出 
    	if(turn&&rais2)
			P2.raise(P1,rais2,AI_name);//每兩回合敵方先加注一次 
    	p2.AI_call(call2);//將是否跟注判斷結果傳出
    	do
    	{
    		cin>>control;
    		switch(control)
    		{
    			case 'r':
    				P1.raise(P2,true,name);
    				//_sleep(rand()%3000);//AI假裝思考 
    				fold2=P2.call(P1,(bool)call2,AI_name);//敵方跟注 
    				break;
    			case 'c':
    			case 'e':
    				P1.call(P2,true,name);
    				break;
    			case 'f':
    				P1.fol(name);
    				break;
    			case 's':
    				P1.show(P2);
    				break;
			}
		}
		while(control!='e'&&control!='f'&&fold2==false);//exit結束加注階段，或f(棄牌)必定結束加注階段 
		cout<<"CHECK"<<endl<<"----"<<suit[sho1%4]<<" ";
    	cout<<setw(3)<<number[sho1/4]<<"----"<<endl;
    	cout<<"----"<<suit[sho2%4]<<" ";
    	cout<<setw(3)<<number[sho2/4]<<"----"<<endl;
    	switch(gam(sho2,sho1))
    	{
    		case 0:
    			P1.v_or_d(0,P2,name);
    			P2.v_or_d(0,P1,AI_name);
    			break;
    		case 1:
    			P1.v_or_d(1,P2,name);
    			P2.v_or_d(-1,P1,AI_name);
    			break;
    		case 2:
    			P1.v_or_d(-1,P2,name);
    			P2.v_or_d(1,P1,AI_name);
    			break;
		}
		fold2=false;
		P1.show(P2);	
	}
    return P1.con();
}
