#include"SinglePoker.h"
#include"twenty_one.h"
#include"emperor-card.h"
#include"stake.h"
#include<graphics.h>
#include<conio.h>
#include"scene1.h"
#include<iostream>
#include"counter_game.h"
using namespace std;
int main()
{
	int price;
	initwindow(1250,600);
	//Stake P1(100000000,5000,-38517550);//���ե� 
	price=scene1();
	Stake P1(price,5000,-3851755-price);
	twenty_one(P1);
	price=scene2(P1);
	P1.borrow(price);
	
	if(counter_game(P1))//1__�}���A0__���
		return Trueending();//game over
	if(scene3(P1))//true�h�X�Afalse�~��	
		return Ending2(P1);
	if(emporer_card(P1))//1__�}���A0__���
		return Trueending();//game over
	if(scene4(P1))//1__�h�X�A0__�~��
		return Ending2(P1); 
	if(SinglePoker(P1))//1__�}���A0__���
		return Trueending();//game over
	return Ending3(P1);
}
