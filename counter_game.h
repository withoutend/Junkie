#include<time.h>
#include<iostream>
#include<conio.h>
#include"stake.h"
#include <windows.h>
using namespace std;
void ds()
{
	cout<<"���C����Ū��C��"<<endl;
	getch();
	system("CLS");
	cout<<"�W�h²��A�N�Ƭ��"<<endl;
	getch();
	system("CLS");
	cout<<"9.0sec~10.9sec�|�o��10�U";
	getch();
	system("CLS");
	cout<<"19.0sec~20.9sec�|�o��20�U";
	getch();
	system("CLS");
	cout<<"29.0sec~30.9sec�|�o��40�U"<<endl;
	getch();
	system("CLS");
	cout<<"39.0sec~40.9sec�|�o��80�U"<<endl;
	getch();
	system("CLS");
	cout<<"49.0sec~50.9sec�|�o��160�U"<<endl;
	getch();
	system("CLS");
	cout<<"59.0sec~60.9sec�|�o��320�U"<<endl;
	getch();
	system("CLS");
	cout<<"�@�ʬ��|�o��1000�U"<<endl;
	getch();
	system("CLS");
	cout<<"�Ϥ��A�Y�W�L50sec�B�S���b�o���϶�"<<endl;
	getch();
	system("CLS");
	cout<<"�h��500�U";
	getch();
	system("CLS");
	cout<<"���U���N��H�����p��"<<endl;
	getch();
	system("CLS");
	cout<<"�u�{�b�v���U���N��H�}�l"<<endl;
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
		sec=100;//���ժ̱M�� 
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
