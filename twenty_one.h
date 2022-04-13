#include <graphics.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <time.h>
#include <stdlib.h>
#include<time.h> 
#include <windows.h>
#include"stake.h"
int one=0;
//char chip[2][1000]={"chip1.bmp","chip2.bmp"};
char pic[53][100]={"c0.bmp","c1.bmp","c2.bmp","c3.bmp","c4.bmp","c5.bmp","c6.bmp",
					   "c7.bmp","c8.bmp","c9.bmp","c10.bmp","c11.bmp","c12.bmp","c13.bmp",
					   "c14.bmp","c15.bmp","c16.bmp","c17.bmp","c18.bmp","c19.bmp","c20.bmp",
					   "c21.bmp","c22.bmp","c23.bmp","c24.bmp","c25.bmp","c26.bmp","c27.bmp",
					   "c28.bmp","c29.bmp","c30.bmp","c31.bmp","c32.bmp","c33.bmp","c34.bmp",
					   "c35.bmp","c36.bmp","c37.bmp","c38.bmp","c39.bmp","c40.bmp","c41.bmp",
					   "c42.bmp","c43.bmp","c44.bmp","c45.bmp","c46.bmp","c47.bmp","c48.bmp",
					   "c49.bmp","c50.bmp","c51.bmp","c52.bmp"};
void show(){
	int x=100,y=400;

	readimagefile(pic[one],x,y,x+120,y+180);
	_sleep(1000);
	readimagefile(pic[0],x,y,x+120,y+180);
}
void ier()
{
	cout<<"此遊戲為21點"<<endl;
	getch();
	system("CLS");
	cout<<"第一張牌是暗牌，剩餘皆為明牌"<<endl;
	getch();
	system("CLS");
	cout<<"輸入s來看牌，輸入c以拿牌，其餘鍵終止拿牌階段"<<endl;
	getch();
	system("CLS");
	cout<<"決定不再拿牌後會開牌，接著換莊家拿牌"<<endl;
	getch();
	system("CLS");
	cout<<"莊家的牌皆為明牌"<<endl;
	getch();
	system("CLS");
	cout<<"接著說明點數與獲勝條件優先順序"<<endl;
	getch();
	system("CLS");
	cout<<"除了花牌皆為10點外，其他牌點數與自身大小相同"<<endl;
	getch();
	system("CLS");
	cout<<"閒家過五關算閒家贏，閒家暴牌算莊家贏"<<endl;
	getch();
	system("CLS");
	cout<<"在閒家沒過五關、沒暴的情況下"<<endl; 
	getch();
	system("CLS");
	cout<<"莊家過五關算莊家贏，莊家暴牌算閒家贏"<<endl;
	getch();
	system("CLS");
	cout<<"在雙方都沒過五關、沒暴的情況下"<<endl;
	getch();
	system("CLS");
	cout<<"點數大者獲勝"<<endl;
	getch();
	system("CLS");
	cout<<"平手則算莊家贏"<<endl;
	getch();
	system("CLS");
	cout<<"遊戲會進行至一方破產為止"<<endl;
	getch();
	system("CLS");
	cout<<"...以上..."<<endl;
	getch();
	system("CLS");
}			   
void deal(int n,int num){
	int x=100,y=400;
	x+=120*(n-1)+20*(n-1);
	
	if(n==1) one=num;
	readimagefile(pic[num],x,y,x+120,y+180);
	if(n==1) readimagefile(pic[0],x,y,x+120,y+180);	
}
void deal1(int n,int num){
	int x=100,y=30;
	x+=120*(n-1)+20*(n-1);
	
	readimagefile(pic[num],x,y,x+120,y+180);	
}
int card(int tem,int yourcard){
	int time=0,card,flo,n=1;
		while(tem<yourcard&&time<5){
			flo=rand()%52+1;
			card=flo%13;
			deal1(n,flo);
			switch(card){
			    	case 1:
			  	  		  break;
			     	case 11:
				    	  card=10;
			    	  break;
			    	case 12:
				    	  card=10;
				      break;
			    	case 0:
				  	 	 card=10;
				  	  	 break;
					default:
						break;	
		    }
			_sleep(1000);
		    n++;
			tem+=card;
			if(tem>21) break;
			if(time==5) break;
			time++;
		}
		if(time==5) return -1;
		if(tem>21) return 0;
		else return tem;
		
}
int yourcard(int time){
	int card,tem=0,flo,n=1;
	char flag='c';
	printf("press c to deal cards s to see your card\n");
	do{
		switch(flag)
		{
			case 'c':
				flo=rand()%52+1;
				card=flo%13;
				deal(n,flo);
				switch(card)
				{
			    	case 1:
			  	  		  break;
			     	case 11:
				    	  card=10;
			    	  break;
			    	case 12:
				    	  card=10;
				      break;
			    	case 0:
				  	 	 card=10;
				  	  	 break;
					default:
						break;	
		    	}
		    	n++;
				tem+=card;
				time++;
				break;
			case 's':
				show();
				break;	
		}
		if(tem>21) break;	
		if(time==5)break;
		scanf("%s",&flag);
	}
	while(flag=='c'||flag=='s');
	if(flag=='o') return -100;
	else if(time==5) return -1;
	else return tem;
}
int twenty_one(Stake &you){
	//int main(){
	//initwindow(1250,600);
	//Stake you(6000,500,0);//玩家賭金初始設置 
	ier();
	you.change_basis(5000);
	Stake cpu(60000,5000,0);//電腦賭金設置 
	int x=100,y=500;
	int yrcard,cpucard,record;
	//char flag='y';
	srand(time(NULL));
	do
	{
		cleardevice();
		readimagefile("table.jpg",0,0,1250,600);
		//chiprecord(6);
		yrcard=yourcard(0);
		if(yrcard==-100)
		{
			you.plus(60000);
			return 1;
		} 
	    if(yrcard==-1)//我贏 
	    {
	    	you.v_or_d(1,cpu,"Fukumoto");
	    	cpu.v_or_d(-1,you,"Makers");
		}	
	    else if(yrcard>21)//電腦贏 
	    {
	    	you.v_or_d(-1,cpu,"Fukumoto");
	    	cpu.v_or_d(1,you,"Makers");
		}
	    else
		{
		    printf("----------------\n");
		    cpucard=card(0,yrcard);
	        if(cpucard==-1)//電腦贏 
	        {
	    		you.v_or_d(-1,cpu,"Fukumoto");
	    		cpu.v_or_d(1,you,"Makers");
			}
	        else if(cpucard>21)//我贏
	        {
	    		you.v_or_d(1,cpu,"Fukumoto");
	    		cpu.v_or_d(-1,you,"Makers");
			}
	        else
	    	{   
				if(yrcard>cpucard)//我贏 
	    	    {
	    			you.v_or_d(1,cpu,"Fukumoto");
	    			cpu.v_or_d(-1,you,"Makers");
				}
	            else//電腦贏 
	            {
	    			you.v_or_d(-1,cpu,"Fukumoto");
	    			cpu.v_or_d(1,you,"Makers");
				}
	    	}
		}
	    delay(1000);
	    you.show(cpu);
	    _sleep(1000);
	    //movechip(record);
	    readimagefile("table.jpg",0,0,1000,700);
	    //chiprecord(6);
		//printf("---------enter y or Y to continue\n");
		//scanf("%s",&flag);	
	}
	while(you.con(cpu));
	return you.con();
}
