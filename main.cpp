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
	//Stake P1(100000000,5000,-38517550);//測試用 
	price=scene1();
	Stake P1(price,5000,-3851755-price);
	twenty_one(P1);
	price=scene2(P1);
	P1.borrow(price);
	
	if(counter_game(P1))//1__破產，0__獲勝
		return Trueending();//game over
	if(scene3(P1))//true退出，false繼續	
		return Ending2(P1);
	if(emporer_card(P1))//1__破產，0__獲勝
		return Trueending();//game over
	if(scene4(P1))//1__退出，0__繼續
		return Ending2(P1); 
	if(SinglePoker(P1))//1__破產，0__獲勝
		return Trueending();//game over
	return Ending3(P1);
}
