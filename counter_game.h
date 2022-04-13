#include<time.h>
#include<iostream>
#include<conio.h>
#include"stake.h"
#include <windows.h>
using namespace std;
void ds()
{
	cout<<"此遊戲為讀秒遊戲"<<endl;
	getch();
	system("CLS");
	cout<<"規則簡單，就數秒數"<<endl;
	getch();
	system("CLS");
	cout<<"9.0sec~10.9sec會得到10萬";
	getch();
	system("CLS");
	cout<<"19.0sec~20.9sec會得到20萬";
	getch();
	system("CLS");
	cout<<"29.0sec~30.9sec會得到40萬"<<endl;
	getch();
	system("CLS");
	cout<<"39.0sec~40.9sec會得到80萬"<<endl;
	getch();
	system("CLS");
	cout<<"49.0sec~50.9sec會得到160萬"<<endl;
	getch();
	system("CLS");
	cout<<"59.0sec~60.9sec會得到320萬"<<endl;
	getch();
	system("CLS");
	cout<<"一百秒整會得到1000萬"<<endl;
	getch();
	system("CLS");
	cout<<"反之，若超過50sec且沒落在得獎區間"<<endl;
	getch();
	system("CLS");
	cout<<"則扣500萬";
	getch();
	system("CLS");
	cout<<"按下任意鍵以結束計時"<<endl;
	getch();
	system("CLS");
	cout<<"「現在」按下任意鍵以開始"<<endl;
	getch();
	system("CLS");
}
int counter_game(Stake &P1)
{
	int t,sec;
	char de;
	ds();
	cout<<"start"<<endl;
	t=time(NULL);
	PlaySound("./n35.wav", NULL, SND_FILENAME|SND_ASYNC);
	while(1)
	{
		if(getch())
		{
			sec=time(NULL)-t;
			break;
		}
	}
	cout<<sec<<endl;
	if(sec==0)
		sec=100;//測試者專用 
	PlaySound(NULL, NULL, SND_FILENAME|SND_ASYNC);
	switch(sec)
	{
		case 9:
		case 10:
			P1.plus(100000);
			break;
		case 19:
		case 20:
			P1.plus(200000);
			break;
		case 29:
		case 30:
			P1.plus(400000);
			break;
		case 39:
		case 40:
			P1.plus(800000);
			break;
		case 49:
		case 50:
			P1.plus(1600000);
			break;
		case 59:
		case 60:
			P1.plus(3200000);
			break;
		default:
			if(sec==100)
				P1.plus(10000000);
			else if(sec>50)
				P1.minus(5000000);
	}
	getch();
	return P1.con();
}
