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
	cout<<"���C������i���J�A���P�@�몺��i���J���Ǥ��P"<<endl;
	getch();
	system("CLS");
	cout<<"��P����i�A�ӥB�O�b��P�b�z�������p�U�i��"<<endl;
	getch();
	system("CLS");
	cout<<"��⪺�P�ժ��۹�j�p�A�|��ܩ󥪤W��"<<endl;
	getch();
	system("CLS");
	cout<<"�����P���j�p���P�_(���p���)"<<endl;
	getch();
	system("CLS");
	cout<<"<------ down | up   ---------> "<<endl;
	cout<<" 2<3<4<5<6<7 < 8<9<10<J<Q<K<A "<<endl;
	getch();
	system("CLS");
	cout<<"�ӥB�P�ӫҵP�����A�̤p�P�i�HĹ�̤j�P"<<endl;
	getch();
	system("CLS");
	cout<<"�]�N�O2>A"<<endl;
	getch();
	system("CLS");
	cout<<"�b�X�P���q�A��J0�ӥX�����䪺�P�A��J1�ӥX�k���䪺�P"<<endl;
	getch();
	system("CLS");
	cout<<"�b�[�`���q�A��Jr�H�[�`�Bc�H��`�Bf�H��P�Bs�H�T�{�{�p�Be�H��`�õ����[�`���q"<<endl;
	getch();
	system("CLS");
	cout<<"���]�b�ۤv��`�p�����`�ɿ�Je�A�|�۰ʸ�`�õ����[�`���q"<<endl;
	getch();
	system("CLS");
	cout<<"�[�`�ܦh�[�ܹ��ҫ����B"<<endl;
	getch();
	system("CLS");
	cout<<"�b�}�P���q�A�L�����観�L��`���|�}�P�A���q�����ާ@"<<endl;
	getch();
	system("CLS");
	cout<<"����ɡA�������|�d���U�@����Ĺ�a"<<endl;
	getch();
	system("CLS");
	cout<<"�򥻽�`��1000�U�A�]�N�O1���w�X"<<endl;
	getch();
	system("CLS");
	cout<<"�C���|�i��ܤ@��}������"<<endl;
	getch();
	system("CLS");
	cout<<"...�H�W..."<<endl;
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
    int sho1,sho2,rais2,call2;//�ۤv���P�AAI���P�AAI�[�`�ơAAI�̤j��`�� 
    bool turn=true,fold2;//�[�`���ǡA����P�P�_ 
    char control;
    srand(time(NULL));
    ima();
    p1.init(p2);//�~�P+�o�P 
    p1.updown();
    p2.updown();
    draw_up_down(p2,p1);
    p1.show();
    p2.AI_show();
    //p2.show();���ե� 
    sho1=p1.shot();
    if(sho1==1000)
    	return 0;//���ժ̱M��
    sho2=p2.AI_shot(p1);
    cout<<"It's raising step now"<<endl;
    //_sleep(rand()%3000);//AI���˫�� 
    p2.AI_raise(rais2);//�N�[�`�P�_���G�ǥX 
    if(rais2!=0)
    	P2.raise(P1,rais2,AI_name);//�Ĥ�[�` 
    p2.AI_call(call2);//�N��`�P�_���G�ǥX 
    do
    {
    	cin>>control;
    	switch(control)
    	{
    		case 'r':
    			P1.raise(P2,true,name);
    			//_sleep(rand()%3000);//AI���˫�� 
    			fold2=P2.call(P1,(bool)call2,AI_name);//�Ĥ��` 
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
	while(control!='e'&&control!='f'&&fold2==false);//exit�����[�`���q�A��f(��P)���w�����[�`���q 
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
	P1.show(P2);//��ܪ��B 
    while(P1.con(P2))
    {
    	ima();
    	turn=!turn;//������ 
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
    		return 0;//���ժ̱M�� 
    	sho2=p2.AI_shot(p1);
    	cout<<"It's raising step now"<<endl;
    	p2.AI_raise(rais2);//�N�O�_�[�`�P�_���G�ǥX 
    	if(turn&&rais2)
			P2.raise(P1,rais2,AI_name);//�C��^�X�Ĥ���[�`�@�� 
    	p2.AI_call(call2);//�N�O�_��`�P�_���G�ǥX
    	do
    	{
    		cin>>control;
    		switch(control)
    		{
    			case 'r':
    				P1.raise(P2,true,name);
    				//_sleep(rand()%3000);//AI���˫�� 
    				fold2=P2.call(P1,(bool)call2,AI_name);//�Ĥ��` 
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
		while(control!='e'&&control!='f'&&fold2==false);//exit�����[�`���q�A��f(��P)���w�����[�`���q 
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
