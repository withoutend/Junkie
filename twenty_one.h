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
	cout<<"���C����21�I"<<endl;
	getch();
	system("CLS");
	cout<<"�Ĥ@�i�P�O�t�P�A�Ѿl�Ҭ����P"<<endl;
	getch();
	system("CLS");
	cout<<"��Js�ӬݵP�A��Jc�H���P�A��l��פ�P���q"<<endl;
	getch();
	system("CLS");
	cout<<"�M�w���A���P��|�}�P�A���۴����a���P"<<endl;
	getch();
	system("CLS");
	cout<<"���a���P�Ҭ����P"<<endl;
	getch();
	system("CLS");
	cout<<"���ۻ����I�ƻP��ӱ����u������"<<endl;
	getch();
	system("CLS");
	cout<<"���F��P�Ҭ�10�I�~�A��L�P�I�ƻP�ۨ��j�p�ۦP"<<endl;
	getch();
	system("CLS");
	cout<<"���a�L�����ⶢ�aĹ�A���a�ɵP����aĹ"<<endl;
	getch();
	system("CLS");
	cout<<"�b���a�S�L�����B�S�ɪ����p�U"<<endl; 
	getch();
	system("CLS");
	cout<<"���a�L��������aĹ�A���a�ɵP�ⶢ�aĹ"<<endl;
	getch();
	system("CLS");
	cout<<"�b���賣�S�L�����B�S�ɪ����p�U"<<endl;
	getch();
	system("CLS");
	cout<<"�I�Ƥj�����"<<endl;
	getch();
	system("CLS");
	cout<<"����h����aĹ"<<endl;
	getch();
	system("CLS");
	cout<<"�C���|�i��ܤ@��}������"<<endl;
	getch();
	system("CLS");
	cout<<"...�H�W..."<<endl;
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
	//Stake you(6000,500,0);//���a�����l�]�m 
	ier();
	you.change_basis(5000);
	Stake cpu(60000,5000,0);//�q������]�m 
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
	    if(yrcard==-1)//��Ĺ 
	    {
	    	you.v_or_d(1,cpu,"Fukumoto");
	    	cpu.v_or_d(-1,you,"Makers");
		}	
	    else if(yrcard>21)//�q��Ĺ 
	    {
	    	you.v_or_d(-1,cpu,"Fukumoto");
	    	cpu.v_or_d(1,you,"Makers");
		}
	    else
		{
		    printf("----------------\n");
		    cpucard=card(0,yrcard);
	        if(cpucard==-1)//�q��Ĺ 
	        {
	    		you.v_or_d(-1,cpu,"Fukumoto");
	    		cpu.v_or_d(1,you,"Makers");
			}
	        else if(cpucard>21)//��Ĺ
	        {
	    		you.v_or_d(1,cpu,"Fukumoto");
	    		cpu.v_or_d(-1,you,"Makers");
			}
	        else
	    	{   
				if(yrcard>cpucard)//��Ĺ 
	    	    {
	    			you.v_or_d(1,cpu,"Fukumoto");
	    			cpu.v_or_d(-1,you,"Makers");
				}
	            else//�q��Ĺ 
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
