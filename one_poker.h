#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<time.h>
#include<vector>
#include<conio.h>
#include<graphics.h> 
#ifndef one_poker_H
#define one_poker_H 
using namespace std;
int max_x=1250,max_y=600;
char nu[6][80]={"zero.jpg","one.jpg","two.jpg","zero.jpg","one_e.jpg","two_e.jpg"};
char table[80]="table.jpg";
char chip[2][80]={"chip1.bmp","chip2.bmp"};
char sorrow[2][80]={"up.jpg","down.jpg"};
char pic123[53][80]={"c0.bmp",
"c41.bmp","c28.bmp","c15.bmp","c2.bmp",
"c42.bmp","c29.bmp","c16.bmp","c3.bmp",
"c43.bmp","c30.bmp","c17.bmp","c4.bmp",
"c44.bmp","c31.bmp","c18.bmp","c5.bmp",
"c45.bmp","c32.bmp","c19.bmp","c6.bmp",
"c46.bmp","c33.bmp","c20.bmp","c7.bmp",
"c47.bmp","c34.bmp","c21.bmp","c8.bmp",
"c48.bmp","c35.bmp","c22.bmp","c9.bmp",
"c49.bmp","c36.bmp","c23.bmp","c10.bmp",
"c50.bmp","c37.bmp","c24.bmp","c11.bmp",
"c51.bmp","c38.bmp","c25.bmp","c12.bmp",
"c52.bmp","c39.bmp","c26.bmp","c13.bmp",
"c40.bmp","c27.bmp","c14.bmp","c1.bmp"};
char suit[4]={5,4,3,6};//accending
char *number[13]={"2","3","4","5","6","7","8","9","10","J","Q","K","A"};
int c[52];
void swap(int *,int *);
void ima();
int gam(int,int);
class Up_down_card
{
	vector<int> player;
	int up;
	int down;
	int rais;//加多少注 
	int cal;//跟多少注 
  public:
  	void init(Up_down_card &);
  	void deal();
  	void updown();	
  	void show();
  	int shot();
  	int AI_shot(const Up_down_card&);
  	void AI_raise(int &);
  	void AI_call(int &);
  	void AI_show();
  	int AI_min_card();
  	int AI_max_card();
  	friend void draw_up_down(const Up_down_card&,const Up_down_card&);
};
void Up_down_card::init(Up_down_card &Opp)
{
    for(int i=1;i<=52;i++)
		c[i]=i;
	//for(int i=0;i<10000;i++)
        //swap(&c[rand()%52],&c[rand()%52]);//shuffle for the first time
    for(int j=0;j<2;j++)//first deal
        player.push_back(c[rand()%52]);
    for(int j=2;j<4;j++)//first deal
        Opp.player.push_back(c[rand()%52]);
}
void Up_down_card::updown()
{
  	up=0; down=0;
	cout<<"player"<<endl;
	for(int j=0;j<2;j++)
    if(player.at(j)/4>5)
    	up++;
    down=2-up;
    cout<<"   up  down"<<endl<<"   "<<up<<"    "<<down<<endl;
}	
void Up_down_card::deal()
{
    player.push_back(c[rand()%52]);
}
void Up_down_card::show()
{
	cout<<"You"<<endl;
    for(int j=0;j<2;j++)
    {
    	cout<<suit[player.at(j)%4]<<" ";
    	cout<<setw(3)<<number[player.at(j)/4]<<endl;
    	if(j==0)
			readimagefile(pic123[player.at(j)+1],max_x/2-139,max_y-230,max_x/2-10,max_y-20);
		else
			readimagefile(pic123[player.at(j)+1],max_x/2+10,max_y-230,max_x/2+139,max_y-20);
    }
}
int Up_down_card::shot()
{
	//cout<<"enter 0 to use the upper card and enter 1 to use the other"<<endl;
	int d;
	int tem;
	cin>>d;
	while((d!=1)&&(d!=0))
	{
		if(d==99)
			return 1000;
		else
		{
			cout<<"enter 0 to shot the left one or 1 to shot another"<<endl;
			cin>>d;
		}
	}
	ima();
	if(d==0)
	{
		tem=player.at(0);
		player.erase(player.begin());
	}
	else
	{
		tem=player.at(1);
		player.pop_back();
	}
	readimagefile(pic123[0],max_x/2-74,max_y-230,max_x/2+74,max_y-20);
	readimagefile(pic123[0],max_x/2-74,20,max_x/2+74,230);
	readimagefile(chip[rand()%2],max_x-150,20,max_x-50,120);
	readimagefile(chip[rand()%2],50,max_y-120,150,max_y-20);
	return tem;
}
int Up_down_card::AI_shot(const Up_down_card &opp)
{
	int tem,ran=rand()%6+1;//tem回傳用，rand用於出牌跟加注傾向 
	if(up==opp.up)//五五波 ，0--0or1--1or2--2 
	{
		if(ran<=3)
		{
			tem=this->AI_min_card();
			rais=0;
			cal=1;
		}
		else
		{
			tem=this->AI_max_card();
			rais=0;
			cal=2;
		}
	}
	else if(up>opp.up)//優勢 
	{
		if(up==2&&opp.up==0)//2--0
		{
			tem=this->AI_min_card();
			if(tem/4!=12)//非A時 
			{
				rais=1;//加一倍注，通常對手就要棄牌了 
				cal=100;//就...必跟 
			}
			else//A，怕2 
			{
				rais=1;
				cal=3;//六分之一輸 
			}
		}
		else if(ran<=4)//2--1or1--0
		{
			tem=this->AI_min_card();
			rais=ran%2;//零或一倍 
			if(tem/4>=11)
				cal=rais+3;
			else
				cal=rais+1;//一倍或兩倍
		}
		else
		{
			tem=this->AI_max_card();
			if(tem/4>=11)//K or A
			{
				rais=ran-4;//一倍或兩倍 
				cal=5;
			}
			else
			{
				rais=ran-4;//一倍或兩倍 
				cal=rais+1;//
			}
		}
	}
	else//up<opp.up，劣勢 
	{
		if(up==0&&opp.up==2)//0--2
		{
			tem=this->AI_min_card();
			rais=0;
			cal=0;
				
		}
		else if(ran<=2)//0--1or1--2 
		{
			tem=this->AI_min_card();
			rais=0;
			cal=0;
		}
		else
		{
			tem=this->AI_max_card();
			if(tem/4>=10)
			{
				rais=ran%3;
				cal=rais+1;
			}
			else
			{
				rais=0;
				cal=0;
			}
		}
	}
	return tem;
}
void Up_down_card::AI_raise(int &r)
{
	r=rais;
}
void Up_down_card::AI_call(int &c)
{
	c=cal;
}
void Up_down_card::AI_show()
{
	readimagefile(pic123[0],max_x/2-139,20,max_x/2-10,230);
	readimagefile(pic123[0],max_x/2+10,20,max_x/2+139,230);
}
int Up_down_card::AI_min_card()
{
	int tem;
	if(player.at(0)<=player.at(1))
	{
		tem=player.at(0);
		player.erase(player.begin());
	}
	else
	{
		tem=player.at(1);
		player.pop_back();
	}
	return tem;
}
int Up_down_card::AI_max_card()
{
	int tem;
	if(player.at(0)>=player.at(1))
	{
		tem=player.at(0);
		player.erase(player.begin());
	}
	else
	{
		tem=player.at(1);
		player.pop_back();
	}
	return tem;
}
void draw_up_down(const Up_down_card &P1,const Up_down_card &P2)
{
	int i;
	for(i=0;i<=P1.up-1;i++);
	readimagefile(nu[i],100,150,200,250);
	for(i=0;i<=P1.down-1;i++);
	readimagefile(nu[i],200,150,300,250);
	for(i=0;i<=P2.down-1;i++);
	readimagefile(nu[i+3],max_x-200,max_y-250,max_x-100,max_y-150);
	for(i=0;i<=P2.up-1;i++);
	readimagefile(nu[i+3],max_x-300,max_y-250,max_x-200,max_y-150);
	//readimagefile(NULL,max_x-300,max_y-250,max_x-200,max_y-150);
}
void swap(int *a,int *b)
{
    int tem=*a;
    *a=*b;
    *b=tem;
}
int gam(int p2,int p1)
{
	readimagefile(pic123[p1+1],max_x/2-74,max_y-230,max_x/2+74,max_y-20);
	readimagefile(pic123[p2+1],max_x/2-74,20,max_x/2+74,230);
	delay(2000);
	if(p1/4==p2/4)
		return 0;
	else if(p1/4==0&&p2/4==12)//2---A
		return 1;//2 wins
	else if(p2/4==0&&p1/4==12)//A---2
		return 2;
	else if(p1/4>p2/4)
		return 1;
	else 
		return 2;
}
void ima()
{
	cleardevice();
	readimagefile(table,0,0,max_x,max_y);
    readimagefile(sorrow[0],100,50,200,150);
    readimagefile(sorrow[1],200,50,300,150);
    readimagefile(sorrow[0],max_x-200,max_y-150,max_x-100,max_y-50);
    readimagefile(sorrow[1],max_x-300,max_y-150,max_x-200,max_y-50);
}
#endif
