#include<iostream>
#include<string.h>
#include<graphics.h>
#ifndef stake_H
#define stake_H 
using namespace std;
char chi[2][80]={"chip1.bmp","chip2.bmp"};
int MA_X=1250,MA_y=600,emy=480,emAIy=20,poi=1;//poi�ΨӴ��w�X���Ϥ� 
class Stake
{
	int money;//�֦����B�� 
	int wager;//�U�`��� 
	int basis;//�򥻽�� 
	int lib;//�t�Ū��B�A�����t�Ʃιs
	bool fold;//1����P�A���� 
  public:
  	Stake(int,int,int);//�Ĥ@���]�m 
  	void change_basis(int);//�u��򥻽�� 
  	void raise(const Stake,int,char*);//�[�` 
  	bool call(const Stake,const bool,char*);//��`
	void fol(char *);//����`�A��P 
	void borrow(int);//�ɿ� 
	void pay_back();//�ٶ� 
	void v_or_d(int,Stake,char *);//�ӭt
	void show(const Stake);
	bool con(const Stake);
	void minus(int);//���� 
	void plus(int);//�[��
	int con();//return1�N�O�}��
	int mon();//return�ثe���B 
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
	wager=b;//��l������򥻽�� 
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
	emy=480;//���]�w�X��m 
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
		case 0://���� 
			if(money>=wager*2)
				wager*=2;//����[��
			cout<<"Tie"<<endl<<endl; 
			break;
		case 1://Ĺ 
			money+=S2.wager;//����⪺��� 
			wager=basis;
			cout<<name<<" wins"<<endl<<endl;
			break;
		case -1://�� 
			money-=wager;//�鱼�ۤv����� 
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
	if(record[i]==1){//Ĺ 
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
