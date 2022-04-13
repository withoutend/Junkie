#include <graphics.h>
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include "stake.h" 
using namespace std;
char tablee[100]="table.jpg";
char card1[100]="Card1.bmp";
char card2[100]="Card2.bmp";
char card3[100]="Card3.bmp";
char card4[100]="Card4.bmp";
char card5[100]="Card5.bmp";
char card6[100]="Card6.bmp";
char card7[100]="Card7.bmp";
void cpu(int n){
	int x=1000,y=20;
	for(int i=1 ; i<=n ;i++){
		readimagefile(card1,x,y,x+72,y+120);
        x+=40;
    }
}
void cpuplay(int n){
	int x=700,y=100;
	switch(n){
		case 1:
			readimagefile(card5,x,y,x+120,y+200);
			break;
		case 2:
			readimagefile(card6,x,y,x+120,y+200);
			break;
		case 3:
			readimagefile(card7,x,y,x+120,y+200);
			break;
	}
}
void cardshow(int n,int flag,int mycard){
	srand(time(NULL));
	if(flag==1){
		if(mycard!=n){
			cpuplay(3);
		}
		else{
			cpuplay(2);
		}
	}
	if(flag==0){
		if(mycard!=n){
			cpuplay(3);
		}
		else{
			cpuplay(1);
		}
	}
}
void npc(int talk){
	int choice;
	if(rand()%5==1)
	{
		choice=rand()%27+1;
		printf("Tonegawa :");
		switch(choice){
			case 1:
				printf("�p�B�� �A�S�n���o~\n");
				break;
			case 2:
				printf("�ܺC��.....\n");
				break;
			case 3:
				printf("��...���ڷQ�Q\n");
				break;
			case 4:
				printf("�񰨹L��\n");
				break;
			case 5:
				printf("�~�M!!\n");
				break;
			case 6:
				printf("�A�X���P���b�ڹw�Ƥ���\n");
				break;
			case 7:
				printf("�ݨӧڸӻ{�u�F\n");
				break;
			case 8:
				printf("just pick and play\n");
				break;
			case 9:
				printf("!!!\n");
				break;
			case 10:
				printf("���ģ�\n");
				break;
			case 11:
				printf("???\n");
				break;
			case 12:
				printf("�A�u�O�ӱj�F�C\n");
				break;
			case 13:
				printf("�ڳ��M�ֿ�S...\n");
				break;
			case 14:
				printf("�ש��o�@�B�F\n");
				break;
			case 15:
				printf("(...��)\n");
				break;
			case 16:
				printf("��_>��\n");
				break;
			case 17:
				printf("�p�B�� �A�S�n���o~\n");
				break;
			case 18:
				printf("�ܺC��.....\n");
				break;
			case 19:
				printf("��...���ڷQ�Q\n");
				break;
			case 20:
				printf("�񰨹L��\n");
				break;
			case 21:
				printf("�~�M!!\n");
				break;
			case 22:
				printf("�A�X���P���b�ڹw�Ƥ���\n");
				break;
			case 23:
				printf("�ݨӧڸӻ{�u�F\n");
				break;
			case 24:
				printf("just pick and play\n");
				break;
			case 25:
				printf("!!!\n");
				break;
			case 26:
				printf("���ģ�\n");
				break;
			case 27:
				printf("???\n");
				break;
		} 
	}
	else if(talk==1){
		choice=rand()%16+1;
		printf("Tonegawa :");
		switch(choice){
			case 1:
				printf("�p�B�� �A�S�n���o~\n");
				break;
			case 2:
				printf("�ܺC��.....\n");
				break;
			case 3:
				printf("��...���ڷQ�Q\n");
				break;
			case 4:
				printf("�񰨹L��\n");
				break;
			case 5:
				printf("�~�M!!\n");
				break;
			case 6:
				printf("�A�X���P���b�ڹw�Ƥ���\n");
				break;
			case 7:
				printf("�ݨӧڸӻ{�u�F\n");
				break;
			case 8:
				printf("just pick and play\n");
				break;
			case 9:
				printf("!!!\n");
				break;
			case 10:
				printf("���ģ�\n");
				break;
			case 11:
				printf("???\n");
				break;
			case 12:
				printf("�A�u�O�ӱj�F�C\n");
				break;
			case 13:
				printf("�ڳ��M�ֿ�S...\n");
				break;
			case 14:
				printf("�ש��o�@�B�F\n");
				break;
			case 15:
				printf("(...��)\n");
				break;
			case 16:
				printf("��_>��\n");
				break;
		} 
	}
	if(talk==0){
		choice=rand()%11+1;
		printf("Tonegawa :");
		switch(choice){
			case 1:
				printf("Rrrrrrrrr***\n");
				break;
			case 2:
				printf(">.<\n");
				break;
			case 3:
				printf("take it easy ok?\n");
				break;
			case 4:
				printf("���P���P~\n");
				break;
			case 5:
				printf("�ҥH���A�M�w�n�F�S\n");
				break;
			case 6:
				printf("��....�ɾ��t���h�F\n");
				break;
			case 7:
				printf("���ֿ�@�� �O�ä��\n");
				break;
			case 8:
				printf("�P�� �ɶ��_�Q��\n");
				break;
			case 9:
				printf("��G�ڨ�o�@�B�u��²��\n");
				break;
			case 10:
				printf("......\n");
				break;
			case 11:
				printf("�ֺεۤFzzz\n");
				break;
		}
	}
}
int card(int n,int flag,int randomcard){
	int talk;
	if(flag==1){
		if(randomcard!=n){
			talk=1;
		}
		else{
			talk=0;
		}
		npc(talk);
	}
	if(flag==0){
		if(randomcard!=n){
			talk=1;
		}
		else{
			talk=0;
		}
		npc(talk);
	}
	return randomcard;
}
void empror(int n){
	int x1=50,y1=400;
	cleardevice();
	readimagefile(tablee,0,0,1250,600);
	cpu(n);
	for(int i=1 ; i<=n-1 ;i++){
		readimagefile(card4,x1,y1,x1+120,y1+200);
        x1+=200;
    }
	readimagefile(card2,x1,y1,x1+120,y1+200);
}
void slave(int n){
	int x1=50,y1=400;
	cleardevice();
	readimagefile(tablee,0,0,1250,600);
	cpu(n);
	for(int i=1 ; i<=n-1 ;i++){
		readimagefile(card4,x1,y1,x1+120,y1+200);
        x1+=200;
	}
	readimagefile(card3,x1,y1,x1+120,y1+200);
}
void citizen(int n){
	int x1=50,y1=400;
	cleardevice();
	readimagefile(tablee,0,0,1250,600);
	cpu(n);
	for(int i=1 ; i<=n ;i++){
		readimagefile(card4,x1,y1,x1+120,y1+200);
        x1+=200;
	}	
}
void showES(int flag,int n,int mycard){
	int x=400,y=150;
	if(flag){
		cleardevice();
		citizen(n-1);
		cardshow(n,flag,mycard);
		readimagefile(card2,x,y,x+120,y+200);
		_sleep(1000);
	}
	else{
		cleardevice();
		citizen(n-1);
		cardshow(n,flag,mycard);
		readimagefile(card3,x,y,x+120,y+200);
		_sleep(1000);
	}
}
void showCit(int flag,int n,int mycard){
	int x=400,y=150;
	if(flag){
		cleardevice();
		empror(n-1);
		cardshow(n,flag,mycard);
		readimagefile(card4,x,y,x+120,y+200);
		_sleep(1000);
	}
	else{
		cleardevice();
		slave(n-1);
		cardshow(n,flag,mycard);
		readimagefile(card4,x,y,x+120,y+200);
		_sleep(1000);
	}
}
void  input(int flag,int n,int yrcard,int mycard){
	if(flag){
		switch(n){
			case 5:
				if(yrcard==5) showES(flag,n,mycard);
				else if(yrcard>=1&&yrcard<=4) showCit(flag,n,mycard);
				break;
			case 4:
				if(yrcard==4) showES(flag,n,mycard);
				else showCit(flag,n,mycard);
				break;
			case 3:
				if(yrcard==3) showES(flag,n,mycard);
				else showCit(flag,n,mycard);
				break;
			case 2:
				if(yrcard==2) showES(flag,n,mycard);
				else showCit(flag,n,mycard);
				break;
			case 1:
				if(yrcard==1) showES(flag,n,mycard);	
				break;			
		}
	}
	else{
		switch(n){
			case 5:
				if(yrcard==5) showES(flag,n,mycard);
				else if(yrcard>=1&&yrcard<=4) showCit(flag,n,mycard);
				break;
			case 4:
				if(yrcard==4) showES(flag,n,mycard);
				else showCit(flag,n,mycard);
				break;
			case 3:
				if(yrcard==3) showES(flag,n,mycard);
				else showCit(flag,n,mycard);
				break;
			case 2:
				if(yrcard==2) showES(flag,n,mycard);
				else showCit(flag,n,mycard);
				break;
			case 1:
				if(yrcard==1) showES(flag,n,mycard);	
				break;			
		}
	}
}
void io()
{
	cout<<"���C�����ӫҵP"<<endl;
	getch();
	system("CLS");
	cout<<"��}�l��P�|�����i"<<endl;
	getch();
	system("CLS");
	cout<<"��2�Ӱ}��A�ӫҰ}��P�����}��";
	getch();
	system("CLS");
	cout<<"�ӫҰ}�禳4�i�����P+�@�i�ӫҵP\n�����}�禳4�i�����P+�@�i�����P\n";
	getch();
	system("CLS");
	cout<<"\"�ӫү������\" \"�����������\" \"��������ӫ�\" "<<endl;
	getch();
	system("CLS");
	cout<<"�ιL���P������A���s�ϥ�"<<endl;
	getch();
	system("CLS");
	cout<<"�C�@���}��|���۹��"<<endl;
	getch();
	system("CLS");
	cout<<"��J���P���Ʀr(1~������P��)�H�X�P"<<endl;
	getch();
	system("CLS");
	cout<<"�ӨC��������|�H���]�m�b300�U~600�U����"<<endl;
	getch();
	system("CLS");
	cout<<"��άӫҵPĹ���ɭԯ�ĹN������,�骺�ܿ�5N"<<endl<<"�Ϥ��Y�Υ����P�hĹ5N ��N\n";
	getch();
	system("CLS");
	cout<<"�C�����ƫh�ѨϥΪ̿�J"<<endl;
	getch();
	system("CLS");
}
int emporer_card(Stake &player){
	io();
	int flag=0,mycard,yrcard,r=0;
	int *record,game,randwager,randomcard;
	srand(time(NULL));
	cout<<"========================================================\n";
	cout<<"�M�w�A�n���X�� :";
	cin>>game;
	system("CLS");
	PlaySound("./eeeeeee.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
	game=abs(game);
	record=new int[game];
	//Stake player(3000,0,0,0);
	//initwindow(1250,600);
	//cout<<"\n�A��6000�� \n";
	while(r<game&&(!player.con())){
		randwager=(rand()%4+3)*1000000;
		cout<<"\n*********the wager this game is : "<<randwager<<endl;
		player.randwager(randwager);
		flag=(flag+1)%2;
		if(flag==0){
			int n=5;
			for(int i=1 ; i<=5 ; i++){
				switch(n){
					case 5:
						cout<<"you have four citzen cards (1~4)and one slave card(5)\n";
						break;
					case 4:
						cout<<"you have three citzen cards (1~3)and one slave card(4)\n";
						break;
					case 3:
						cout<<"you have two citzen cards (1~2)and one slave card(3)\n";
						break;
					case 2:
						cout<<"you have one citzen card (1)and one slave cards(2)\n";
						break;
					case 1:
						cout<<"you only have one slave cards(1)\n";
						break;			
				}
				slave(n);
				randomcard=rand()%n+1; 
				mycard=card(n,flag,randomcard);
			    cout<<"play one card \n";
			    do
			    {
			    	cin>>yrcard;
			    	if(yrcard==99)
					{
			    		player.plus(20000000);
			    		return 0;
			    	}
			    	else if(yrcard>n||yrcard<=0)
			    		cout<<"ENTER 1~"<<n<<endl;
				}while(yrcard>n||yrcard<=0);
			    system("CLS");
			    if(yrcard==99){
			    	player.plus(20000000);
			    	return 0;
			    	
			    }
			    input(flag,n,yrcard,mycard);
			    if(yrcard==n&&yrcard>mycard) {
			    	cout<<"you lose, your slave has been killed\n";
			    	record[r]=-1;
			    	r++;
			    	break;
			    }
			    else if(yrcard==n&&mycard==n){
			    	cout<<"you win, you kill the emperor\n";
			    	record[r]=1;
			    	r++;
			    	break;
			    }
			    else if(mycard==n&&yrcard!=n){
			    	cout<<"you lose ,the emperor has survived\n";
			    	record[r]=-1;
			    	r++;
			    	break;
			    }
			    else{
			    	n-=1;
			    }
			}
			delay(2000);
			system("CLS");
			printf("-------\n");
		}
		if(flag==1){
			int n=5;
			for(int i=1 ; i<=5 ; i++){
				switch(n){
					case 5:
						cout<<"you have four citzen cards (1~4)and one emperor card(5)\n";
						break;
					case 4:
						cout<<"you have three citzen cards (1~3)and one emperor card(4)\n";
						break;
					case 3:
						cout<<"you have two citzen cards (1~2)and one emperor card(3)\n";
						break;
					case 2:
						cout<<"you have four citzen card (1)and one emperor cards(2)\n";
						break;
					case 1:
						cout<<"you only have one emperor cards(1)\n";
						break;			
				}
				empror(n);
				randomcard=rand()%n+1; 
				mycard=card(n,flag,randomcard);
			    cout<<"play one card \n";
			    do
			    {
			    	cin>>yrcard;
			    	if(yrcard==99)
					{
			    		player.plus(20000000);
			    		return 0;
			    	}
			    	else if(yrcard>n||yrcard<=0)
			    		cout<<"ENTER 1~"<<n<<endl;
				}while(yrcard>n||yrcard<=0);
			    system("CLS");
			    input(flag,n,yrcard,mycard);
			    if(yrcard==n&&yrcard>mycard) {
			    	cout<<"you win, your emperor has been survived\n";
			    	record[r]=1;
			    	r++;
			    	break;
			    }
			    else if(yrcard==n&&mycard==n){
			    	cout<<"you lose, your emperor has been killed\n";
			    	record[r]=-1;
			    	r++;
			    	break;
			    }
			    else if(mycard==n&&yrcard!=n){
			    	cout<<"you win ,your emperor has been survived\n";
			    	record[r]=1;
			    	r++;
			    	break;
			    }
			    else{
			    	n-=1;
			    }
			}
			delay(2000);
			system("CLS");
			cout<<"-------\n";
		}
		player.emperor(record,r-1,randwager);
	}
	for(int i=0 ; i<game ; i++){
		if(record[i]==1) cout<<"O ";
		else cout<<"X ";
	}
	return player.con();
}
