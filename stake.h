#include<iostream>
#include<string.h>
#include<graphics.h>
#ifndef stake_H
#define stake_H 
using namespace std;
char chi[2][80]={"chip1.bmp","chip2.bmp"};
int MA_X=1250,MA_y=600,emy=480,emAIy=20,poi=1;//poi用來換籌碼的圖片 
class Stake
{
	int money;//擁有金額數 
	int wager;//下注賭金 
	int basis;//基本賭金 
	int lib;//負債金額，必為負數或零
	bool fold;//1為棄牌，必輸 
  public:
  	Stake(int,int,int);//第一次設置 
  	void change_basis(int);//只改基本賭金 
  	void raise(const Stake,int,char*);//加注 
  	bool call(const Stake,const bool,char*);//跟注
	void fol(char *);//不跟注，棄牌 
	void borrow(int);//借錢 
	void pay_back();//還債 
	void v_or_d(int,Stake,char *);//勝負
	void show(const Stake);
	bool con(const Stake);
	void minus(int);//扣錢 
	void plus(int);//加錢
	int con();//return1就是破產
	int mon();//return目前金額 
	void emperor(int *,int,int);
	void randwager(int);
};
void Stake::change_basis(int b)
{
	basis=b;
	wager=b;
	fold=false;
}
Stake::Stake(int m,int b,int l)
{	
	money=m;
	wager=b;//初始賭金為基本賭金 
	basis=b;
	lib=l;
	fold=false;
}
void Stake::raise(const Stake S2,int nb,char* name)
{
	if(wager+basis*nb<=S2.money&&wager+basis*nb<=money&&nb!=0)
	{
		if(strcmp(name,"Fukumoto")==0)
		{
			for(int w=wager;w<wager+basis*nb;w+=basis)
			{
				readimagefile(chi[(++poi)%2],50,emy-14,150,emy-115);
				emy-=15;
			}
		}
		else if(strcmp(name,"Kaiji")==0)
		{
			for(int w=wager;w<wager+basis*nb;w+=basis)
			{
				readimagefile(chi[(++poi)%2],MA_X-150,emAIy+15,MA_X-50,emAIy+115);
				emAIy+=15;
			}
		}
		wager+=basis*nb;
		cout<<name<<" raises stake to "<<wager<<" dollers."<<endl;
	}
	else if(wager+basis*nb>S2.money&&wager+basis*nb<=money&&nb!=0)
	{
		if(strcmp(name,"Fukumoto")==0)
		{
			for(int w=wager;w<S2.money;w+=basis)
			{
				readimagefile(chi[(++poi)%2],50,emy-14,150,emy-115);
				emy-=15;
			}
		}
		else if(strcmp(name,"Kaiji")==0)
		{
			for(int w=wager;w<S2.money;w+=basis)
			{
				readimagefile(chi[(++poi)%2],MA_X-150,emAIy+15,MA_X-50,emAIy+115);
				emAIy+=15;
			}
		}
		wager=S2.money;
		if(S2.money!=basis)
			cout<<name<<" raises stake to "<<wager<<" dollers."<<endl;
	}
}
bool Stake::call(const Stake S2,const bool c,char* name)
{
	if(c)
	{
		if(strcmp(name,"Fukumoto")==0)
		{
			for(int i=S2.wager;i>wager;i-=basis)
			{
				readimagefile(chi[(++poi)%2],50,emy-14,150,emy-115);
				emy-=15;
			}
		}
		else if(strcmp(name,"Kaiji")==0)
		{
			for(int i=S2.wager;i>wager;i-=basis)
			{
				readimagefile(chi[(++poi)%2],MA_X-150,emAIy+15,MA_X-50,emAIy+115);
				emAIy+=15;
			}
		}
		wager=S2.wager;
		cout<<"now "<<name<<"'s stake is "<<wager<<" dollers."<<endl;
	}
	else if(wager!=S2.wager) 
	{
		fold=true;
		cout<<name<<" folds"<<endl;
	}
	return fold;
}
void Stake::fol(char *name)
{
	cout<<name<<" folds."<<endl;
	fold=true;
}
void Stake::borrow(int m)
{
	money+=m;
	lib-=m;
}
void Stake::pay_back()
{
	money+=lib;
	lib=0;
}
void Stake::v_or_d(int result,Stake S2,char *name)
{
	emAIy=20;
	emy=480;//重設籌碼位置 
	if(fold)
	{
		result=-1;
		fold=false;
		cout<<name<<" folded"<<endl;
	}
	if(S2.fold)
	{
		result=1;
		S2.fold=false;
	}
	switch(result)
	{
		case 0://平手 
			if(money>=wager*2)
				wager*=2;//賭金加倍
			cout<<"Tie"<<endl<<endl; 
			break;
		case 1://贏 
			money+=S2.wager;//拿對手的賭金 
			wager=basis;
			cout<<name<<" wins"<<endl<<endl;
			break;
		case -1://輸 
			money-=wager;//輸掉自己的賭金 
			wager=basis;
			break;
	}	
}
void Stake::show(const Stake S2)
{
	cout<<"YOUR money      :"<<money<<endl;
	cout<<"YOUR wager      :"<<wager<<endl;
	cout<<"OPPONENT'S money:"<<S2.money<<endl;
	cout<<"OPPONENT'S wager: "<<S2.wager<<endl<<endl;
	cout<<"BASIS of THIS GAME IS "<<basis<<endl<<endl;
}
bool Stake::con(const Stake opp)
{
	return (money>0&&opp.money>0);
}
void Stake::minus(int n)
{
	money-=n;
}
void Stake::plus(int n)
{
	money+=n;
}
int Stake::mon()
{
	return money;
}
int Stake::con()
{
	return(money<=0);
}
void Stake::emperor(int *record,int i,int wag)
{
	wager=wag;
	if(record[i]==1){//贏 
		if((i+1)%2) money+=wager;//emporor
		else money+=wager*5;
	} 
	if(record[i]==-1){
		if((i+1)%2) money-=wager*5;
		else money-=wager;
	}
	cout<<"your money "<<money<<endl;	
}
void Stake::randwager(int wag)
{
	wager=wag;
}
#endif
