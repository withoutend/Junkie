#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include <windows.h>
#include"stake.h"
#define nre "伊藤" 
using namespace std;
int scene1()
{
	const int Max_x=1250,Max_y=600;
	int price;
	//initwindow(1200,600);
	cout<<"歡迎您遊玩本遊戲"<<endl;
	getch(); 
	system("CLS");
	cout<<"在遊戲開始前，有以下幾點聲明"<<endl;
	getch(); 
	system("CLS");
	cout<<"1.本遊戲為<賭博默示錄系列>之二次創作"<<endl;
	cout<<"2.圖片來源繁多，皆是由goole,pixiv而來"<<endl;
	cout<<"3.音訊來源繁多，會於片尾注明"<<endl;
	getch(); 
	system("CLS");
	cout<<"以上，遊戲即將開始"<<endl;
	getch(); 
	system("CLS");
	readimagefile("47291811_p1.jpg",0,0,Max_x,Max_y);
	_sleep(1000);
	cout<<"未來..."<<endl<<"在我們手裡..."<<endl;
	getch(); 
	system("CLS");
	cout<<"但是..."<<endl<<"未來的前途..."<<endl<<"並不是任何人都是光明的"<<endl;
	getch(); 
	system("CLS");
	cout<<"對沒積蓄的人來說，這句話相當難受"<<endl;
	getch(); 
	system("CLS");
	
	_sleep(1000);
	readimagefile("56914025_p2.jpg",0,0,Max_x,Max_y);
	//PlaySound("./damage2.wav", NULL, SND_FILENAME|SND_ASYNC);
	cout<<"...又賭輸了"<<endl;
	getch(); 
	system("CLS");
	//readimagefile("2008529215611626_2.jpg",0,Max_y-400,500,Max_y);
	cout<<"幹..."<<endl<<"沒錢了"<<endl<<"只能找工作了嗎？"<<endl;
	getch(); 
	system("CLS");
	cout<<"錢嗎..."<<endl<<"我什麼時候才會發財呢"<<endl;
	getch(); 
	system("CLS");
	PlaySound("./knocking_an_iron_door3.wav", NULL, SND_FILENAME|SND_ASYNC);//第一格NULL會停，關門聲 
	_sleep(1000);
	PlaySound("./fluorescent_swith2.wav", NULL, SND_FILENAME|SND_ASYNC);//開門聲
	cout<<"誰啊"<<endl;
	getch(); 
	system("CLS");
	PlaySound("./n44.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
	//readimagefile("1399638931.jpg",Max_x-500,Max_y-400,Max_x,Max_y);
	cout<<"神秘人士：請問您是這裡的住戶嗎?"<<endl;
	getch(); 
	system("CLS");
	cout<<"啊啊，嗯"<<endl;
	getch(); 
	system("CLS");
	cout<<"神秘人士：嗯...請問您貴性?"<<endl;
	getch(); 
	system("CLS");
	//cout<<"我是"<<Name<<endl;
	cout<<"...福本"<<endl<<"...福本...珅行"<<endl;
	getch(); 
	system("CLS");
	cout<<"神秘人士：你認識古硐武志吧"<<endl;
	getch(); 
	system("CLS");
	cout<<"好像...去年有和他一起兼職過"<<endl;
	getch(); 
	system("CLS");
	cout<<"神秘人士：你對這張契約有印象嗎"<<endl;
	getch(); 
	system("CLS");
	//readimagefile("135374523089.jpg",Max_x/2-150,Max_y-200,Max_x/2+150,Max_y);
	cout<<"(...!記得他拿我做擔保人)"<<endl<<"可惡...那傢伙"<<endl;
	getch(); 
	system("CLS");
	cout<<"神秘人士：想起來了吧，古硐後來跑了，那這筆錢當然由你來還"<<endl;
	getch(); 
	system("CLS");
	cout<<"神秘人士：十四個月，複息20%，總計3,851,755元"<<endl;
	getch(); 
	system("CLS");
	cout<<"有沒有搞錯，三百多萬我怎麼還得起"<<endl;
	getch(); 
	system("CLS");
	cout<<"神秘人士：別急別急，我知道你會這麼說"<<endl;
	getch();
	system("CLS");
	cout<<"神秘人士：一個月後的今天，有一艘船會從晴海碼頭出航"<<endl;
	getch();
	system("CLS");
	cout<<"神秘人士：順利的話，大概...一晚吧，你就可以還清債務了"<<endl;
	getch();
	system("CLS");
	cout<<"神秘人士：輸了的話，看欠債額度而定，但至少一兩年回不到陸地了"<<endl;
	getch();
	system("CLS");
	cout<<"神秘人士：如何，要來的話就當天再來吧"<<endl;
	getch();
	system("CLS");
	cout<<"神秘人士：這張契約就放你這，祝你好運"<<endl;
	getch();
	system("CLS");
	PlaySound("./room_door_O.wav", NULL, SND_FILENAME|SND_ASYNC);
	_sleep(1000);
	cleardevice();
	cleardevice();
	cout<<"（瞥一眼）可惡，這渾蛋...把我當智障...三百萬..."<<endl;
	getch();
	system("CLS");
	cout<<"我可不想上什麼來路不明的船"<<endl;
	getch();
	system("CLS");
	_sleep(1000);
	PlaySound("./port1.wav", NULL, SND_FILENAME|SND_ASYNC);
	readimagefile("31925582_p1.jpg",0,0,1260,960);
	cout<<"還是來了 ...幹...那渾蛋"<<endl;
	getch();
	system("CLS");
	cout<<"三百萬...三百萬...三百萬..."<<endl;
	getch();
	system("CLS");
	cout<<"神秘人士：來了啊，福本先生"<<endl;
	getch();
	system("CLS");
	//PlaySound("./n44.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
	cout<<nre<<"：啊，都忘了自我介紹了，叫我伊藤吧"<<endl;
	getch();
	system("CLS");
	cout<<"就是這艘船嗎？"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：嗯，啊，都忘了問，你要借多少"<<endl;
	getch();
	system("CLS");
	cout<<"...!!為什麼我還要借錢"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：賭金啊，沒賭金怎麼賭呢"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：50,000以下，10,000以上，借多少？"<<endl<<"請切換至另一視窗輸入"<<endl;
	do
	{
		cin>>price;
	}
	while(price<10000||price>50000);
	cout<<"那..."<<price<<"好了"<<endl;
	getch();
	system("CLS");
	price-=price%5000;
	cout<<nre<<"：取整數，"<<price<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：伸出手來，籌碼"<<endl;
	PlaySound("./coins.wav", NULL, SND_FILENAME|SND_ASYNC);
	getch();
	system("CLS");
	cout<<"就這幾枚？"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：一枚五千，我沒說嗎"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：...手氣差，多少都一樣，快，上船了"<<endl;
	getch();
	system("CLS");
	cout<<"切，好吧"<<endl;
	getch();
	system("CLS");
	_sleep(1000);
	readimagefile("blue-chip-casino-babb-play-table-games.jpg",0,0,Max_x,Max_y);
	PlaySound("./d9.wav", NULL, SND_FILENAME|SND_ASYNC|SND_LOOP);
	cout<<"...意外的有高級感...算了，不重要"<<endl;
	getch();
	system("CLS");
	cout<<"第一個遊戲...是21點嗎..."<<endl;
	getch();
	system("CLS");
	return price;
}
int scene2(Stake &p1)
{
	int price=0;
	const int Max_x=1250,Max_y=600;
	readimagefile("blue-chip-casino-babb-play-table-games.jpg",0,0,Max_x,Max_y);
	PlaySound("./n44.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
	if(p1.con())
	{
		cout<<nre<<"：看來手氣不好啊"<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：才啟航沒多久就沒錢"<<endl;
		getch();
		system("CLS");
		cout<<"...只是運勢還沒來...要是我還有錢的話..."<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：喔，不錯，有志氣"<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：我這裡剛剛恰好有一個債權人跑了"<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：原本他要借的籌碼就借你吧"<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：50,000以下，10,000以上，借多少？"<<endl<<"請切換至另一視窗輸入"<<endl;
		do
		{
			cin>>price;
		}
		while(price<=10000&&price>=50000);
		cout<<"給我"<<price<<endl;
		getch();
		system("CLS");
		cout<<nre<<":不是給，是「借」喔"<<endl;
		getch();
		system("CLS");
		price-=price%5000;
		cout<<nre<<"：來，取整數，"<<price<<endl;
		getch();
		system("CLS");
	}
	else
	{
		
		cout<<nre<<"：看來手氣不錯啊"<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：才啟航沒多久就賺了不少"<<endl;
		getch();
		system("CLS");
		cout<<"...完全不夠...賭金太小了..."<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：...嫌少啊...對你來說...也是啦"<<endl;
		getch();
		system("CLS");
	}
	cout<<nre<<"：...那邊正好有一個遊戲，低風險高報酬，想試試嗎"<<endl;
	getch();
	system("CLS");
	cout<<"這是什麼...?"<<endl;
	getch();
	system("CLS");
	cout<<"...Counter...Game?"<<endl;
	getch();
	system("CLS");
	readimagefile("34821459_p0.jpg",0,0,Max_x,Max_y);
	return price;
}
int Trueending()
{
	const int Max_x=1250,Max_y=600;
	readimagefile("blue-chip-casino-babb-play-table-games.jpg",0,0,Max_x,Max_y);
	PlaySound("./n44.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
	cout<<nre<<"：...連這也不行嗎..."<<endl;
	getch();
	system("CLS");
	cout<<"...運勢要來了...再借我一些錢吧...遠藤兄"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：...再借下去你連本金都還不出來了"<<endl;
	getch();
	system("CLS");
	cout<<"...不不不...再一局，一局就好，絕對能贏的"<<endl;
	getch();
	system("CLS");
	cout<<"...一直以來都是這樣的...賭博，都是在最後才會有大翻盤的..."<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：...還真會說話啊，開司老弟"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：...(真悲哀，說忘想也不為過)"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：...(而且這個妄想，只有本人不自覺)"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：...(...就像看到鏡子一樣...)"<<endl;
	getch();
	system("CLS");
	cout<<"...喂!考慮得怎樣了，借錢的事，到底要不要借我"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：...你這人渣，跟我來吧"<<endl;
	getch();
	system("CLS");
	cout<<"...果然"<<nre"兄就是心胸寬大啊...!"<<endl;
	getch();
	system("CLS");
	PlaySound("./walking_on_a_floor.wav", NULL, SND_FILENAME|SND_ASYNC);
	cout<<"...這是哪裡...!"<<endl;
	getch();
	system("CLS");
	readimagefile("asdsdad.jpg",0,0,Max_x,Max_y);
	cout<<nre<<"：...你沒機會了...沒有機會讓你輸贏了"<<endl;
	getch();
	system("CLS");
	cout<<"...咦...?"<<endl;
	PlaySound("./z25.wav", NULL, SND_FILENAME|SND_ASYNC|SND_LOOP);
	getch();
	system("CLS");
	cout<<nre<<"：...按照我們的規定...你已經沒機會了"<<endl;
	getch();
	system("CLS");
	cout<<"我...我從沒聽過...!你現在說的規定什麼的"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：...因為我沒說過...所以...你要去工作了"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：放心，用不到一天的"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：已經幫你保了險了，一般的意外險都沒這麼的理賠金，詳細金額在這張紙上"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：一根手指120萬，大拇指比較特別，300萬"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：單腿600萬， 單眼800萬，雙眼2000萬"<<endl;
	getch();
	system("CLS");
	cout<<"等一下啊...!你在胡扯些什麼...."<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：別緊張， 不要插嘴，等我把話說完"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：不會死的...對於還不了債的債務人...決定部位的辦法，就是這個"<<endl;
	getch();
	system("CLS");
	cout<<"...輪盤...?"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：用那個，來決定受損的部位，福本老弟，你運氣不是不錯嗎"<<endl;
	getch();
	system("CLS");
	cout<<"操你媽...那種事情...哪有人下的了手..."<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：小事小事...我們會處理好的"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：等還完債，我會幫你接回去的"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：前提是接得回去的話"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：好好的睡一覺吧...福本老弟"<<endl;
	getch();
	system("CLS");
	PlaySound("./heartbeats.wav", NULL, SND_FILENAME|SND_ASYNC|SND_LOOP);
	cout<<"幹...放開我"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：喂，架好他啊"<<endl;
	getch();
	system("CLS");
	cout<<"(嗚!......不能呼吸了)"<<endl;
	getch();
	system("CLS");
	cout<<"(為什麼......不能呼吸...)"<<endl;
	getch();
	system("CLS");
	PlaySound(NULL, NULL, SND_FILENAME|SND_ASYNC|SND_LOOP);
	PlaySound("螺旋.wav", NULL, SND_FILENAME|SND_ASYNC|SND_LOOP);
	cout<<nre<<"：真麻煩，每次都要我扮黑臉"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：真的是，死到臨頭依然不知悔改呢"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：(就像當年的自己一樣)"<<endl;
	getch();
	system("CLS");
	cout<<"???：辛苦了，開司老弟"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：啊，兵藤會長，沒什麼"<<endl;
	getch();
	system("CLS");
	cout<<"兵藤：看來他不像你強運啊"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：...都幾年前的事情了..."<<endl;
	getch();
	system("CLS");
	cout<<"兵藤：我可是讓你這個廢人有了翻身的機會"<<endl;
	getch();
	system("CLS");
	cout<<"兵藤：...你這個「賭博中毒者」..."<<endl;
	getch();
	system("CLS");
	cout<<"兵藤：可別再讓我失望了啊"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：........."<<endl;
	getch();
	system("CLS");
	PlaySound("./walking_on_a_floor.wav", NULL, SND_FILENAME|SND_ASYNC);
	delay(1000);
	cout<<nre<<"：(...等我有錢...我一定要...)"<<endl;
	getch();
	system("CLS");
	cout<<"結局1: JUNKIE"<<endl;
	_sleep(5000);
	getch();
	system("CLS");
	cout<<"恭喜達成結局"<<endl;
	delay(5000);
	system("CLS");
	cout<<"總共有三個結局，加油吧"<<endl;
	delay(5000);
	system("CLS");
	return 1;
}
bool scene3(Stake &P1)
{
	const int Max_x=1250,Max_y=600;
	int price,c;
	readimagefile("blue-chip-casino-babb-play-table-games.jpg",0,0,Max_x,Max_y);
	PlaySound("./n44.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
	system("CLS");
	cout<<nre<<"：如何，賺夠了嗎"<<endl;
	getch();
	system("CLS");
	price=P1.mon();
	cout<<"..."<<price<<"..."<<endl;
	if(price>4000000)
		cout<<"以負債金額來說...夠了"<<endl;
	else
		cout<<"還不夠呢"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：接下來的遊戲本金都要不少啊..."<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：我可以再借你錢"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"兄，你可真是個大好人啊"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：(...好人...麼...)"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：3,000,000以下，1,000,000以上，借多少？"<<endl<<"請切換至另一視窗輸入"<<endl;;
	do
	{
		cin>>price;
	}
	while(price<1000000||price>3000000);
	cout<<"那..."<<price<<"好了"<<endl;
	getch();
	system("CLS");
	price-=price%1000000;
	cout<<nre<<"：取整數，"<<price<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：伸出手來，籌碼"<<endl;
	PlaySound("./coins.wav", NULL, SND_FILENAME|SND_ASYNC);
	getch();
	system("CLS");
	P1.borrow(price);
	cout<<"就這幾枚？"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：一枚一百萬，我沒說嗎"<<endl;
	getch();
	system("CLS");
	cout<<"...這還真是...另一個世界呢"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：你真的還要繼續嗎，輸了可就不是三百萬這麼簡單了"<<endl;
	getch();
	system("CLS");
	cout<<"........"<<endl;
	getch();
	system("CLS");
	cout<<"請切換至另一視窗，輸入0繼續，輸入1結束"<<endl;
	do
	{
		cin>>c;
	}
	while(c!=0&&c!=1);
	system("CLS");
	if(c==0)
	{
		cout<<"當然要繼續啊，現在我運勢可是好得不得了呢"<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：那我就不多說了...祝你好運"<<endl;
		getch();
		system("CLS");
		cout<<"(這是...)皇帝牌?"<<endl;
		getch();
		system("CLS");
		PlaySound("./io.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
		return false;
	}
	else
	{
		cout<<"還是就此收手吧"<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：...明智的判斷...關於你的負債，屆時會再到府上拜訪的"<<endl;
		getch();
		system("CLS");
		cout<<"多謝了，"<<nre<<"兄"<<endl;
		getch();
		system("CLS");
		return true;
	}
}
int Ending2(Stake &P1)
{
	const int Max_x=1250,Max_y=600;
	PlaySound("./k7.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
	readimagefile("56914025_p2.jpg",0,0,Max_x,Max_y);
	cout<<"(...)"<<endl;
	getch();
	system("CLS");
	cout<<"(......)"<<endl;
	getch();
	system("CLS");
	cout<<"(.........)"<<endl;
	getch();
	system("CLS");
	cout<<"(從那過後已經兩年了)"<<endl;
	getch();
	system("CLS");
	cout<<"(我還是一樣無所事事)"<<endl;
	getch();
	system("CLS");
	cout<<"(籌碼也換不了錢)"<<endl;
	getch();
	system("CLS");
	cout<<"(伊藤兄也沒來)"<<endl;
	getch();
	system("CLS");
	cout<<"(那晚就像夢一般)"<<endl;
	getch();
	system("CLS");
	cout<<"(令人錯愕的發財夢)"<<endl;
	getch();
	system("CLS");
	cout<<"「又賭輸了」"<<endl;
	getch();
	system("CLS");
	cout<<"「幹..."<<endl<<"沒錢了"<<endl<<"只能找工作了嗎？」"<<endl;
	getch(); 
	system("CLS");
	cout<<"「錢嗎..."<<endl<<"我什麼時候才會發財呢」"<<endl;
	getch(); 
	system("CLS");
	cout<<"「這些籌碼到底有什麼用」"<<endl;
	getch(); 
	system("CLS");
	cout<<"......."<<endl;
	getch(); 
	system("CLS");
	cout<<"「要是當時繼續下去會如何呢」"<<endl;
	getch(); 
	system("CLS");
	delay(5000);
	cout<<"結局2:Mirabilis"<<endl;
	delay(5000);
	system("CLS");
	cout<<"恭喜達成結局"<<endl;
	delay(5000);
	system("CLS");
	cout<<"總共有三個結局，加油吧"<<endl;
	delay(5000);
	system("CLS");
	return 2;
}
bool scene4(Stake &P1)
{
	const int Max_x=1250,Max_y=600;
	int price,c;
	readimagefile("blue-chip-casino-babb-play-table-games.jpg",0,0,Max_x,Max_y);
	PlaySound("./n44.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
	price=P1.mon();
	system("CLS");
	cout<<nre<<"：...皇帝牌...真懷念啊"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：(只是我當初賭的不是錢罷了)"<<endl;
	getch();
	system("CLS");
	if(price>=10000000)//一千萬
	{
		cout<<nre<<"：沒想到珅行老弟你還真有賭博的才能啊"<<endl;
		getch();
		system("CLS");
		cout<<"(感覺真不實際...這些籌碼...居然...值那麼多錢)"<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：...話都說不出來了嗎..."<<endl;
		getch();
		system("CLS");
		cout<<"...還能繼續賭嗎..."<<nre<<"兄..."<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：...你還要繼續嗎...接下來就是千萬等級了喔"<<endl;
		getch();
		system("CLS");
		cout<<"(..."<<price<<"...!!!)"<<endl;
		getch();
		system("CLS");
		cout<<"(...巨額的軍費...但...)"<<endl;
		getch();
		system("CLS");
		cout<<"(...只是小錢!!)"<<endl;
		getch();
		system("CLS");
		cout<<"(...輸的話...就像被扔進水溝的...廢紙...)"<<endl;
		getch();
		system("CLS");
		cout<<"(...這種瘋狂的賭局...)"<<endl;
		getch();
		system("CLS");
		cout<<"(..........)"<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：...思考夠了吧...你還要繼續嗎"<<endl;
		getch();
		system("CLS");
		cout<<"請切換至另一視窗，輸入0繼續，輸入1結束"<<endl;
		do
		{
			cin>>c;
		}
		while(c!=0&&c!=1);
		system("CLS");
		if(c==0)
		{
			cout<<nre<<"：...(嘆氣)...那我來做你的對手吧"<<endl;
			getch();
			system("CLS");
			cout<<"什麼遊戲"<<endl;
			getch();
			system("CLS");
			cout<<nre<<":單張撲克"<<endl;
			getch();
			system("CLS");
			PlaySound("./r9.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
			return false;
		}
		else
		{
			cout<<"還是就此收手吧"<<endl;
			getch();
			system("CLS");
			cout<<nre<<"：...明確的判斷...關於你的負債，屆時會再到府上拜訪的"<<endl;
			getch();
			system("CLS");
			cout<<"多謝了，"<<nre<<"兄"<<endl;
			getch();
			system("CLS");
			return true;
		}
	}
	else if(price>=3000000)
	{
		cout<<nre<<"：...("<<price<<")...不夠啊"<<endl;
		getch();
		system("CLS");
		cout<<"什麼不夠...夠還錢了吧"<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：...忘了我剛剛說的吧..."<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：...你的目的也達成了..."<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：你可以暫時好好休息..."<<endl;
		getch();
		system("CLS");
		cout<<"等等，"<<nre<<"兄..."<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：還能繼續嗎"<<endl;
		getch();
		cout<<nre<<"：......"<<endl;
		getch();
		cout<<nre<<"：......"<<endl;
		getch();
		system("CLS");
	}
	else
	{
		cout<<nre<<"：...("<<price<<")...不夠啊"<<endl;
		getch();
		system("CLS");
		cout<<"(沒錯...完全不夠...)"<<endl;
		getch();
		system("CLS");
		cout<<nre<<"兄...沒有什麼本金比較少也玩得起的遊戲嗎?"<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：...還提這個啊..."<<endl;
		getch();
		system("CLS");
		cout<<nre<<"兄...拜託了...最後一次的勝負"<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：...關於你的負債的確切金額與相關事宜，屆時會再到府上拜訪的"<<endl;
		getch();
		system("CLS");
		cout<<"...別這樣嘛..."<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：...滾下船去，你這人渣"<<endl;
		getch();
		system("CLS");
		cout<<"...再一次...再一次就好..."<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：......"<<endl;
		getch();
		system("CLS");
		PlaySound("./knocking_a_wall.wav", NULL, SND_FILENAME|SND_ASYNC);
		cout<<"(嗚..............)"<<endl;
		getch();
		system("CLS");
		cout<<nre<<"：那邊的，把這廢物抬下去"<<endl;
		getch();
		system("CLS");
	}
	return true;
}
int Ending3(Stake &P1)
{
	const int Max_x=1250,Max_y=600;
	int price;
	P1.pay_back();
	system("CLS");
	readimagefile("44526375.jpg",0,0,Max_x,Max_y);
	PlaySound("./針城.wav", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
	price=P1.mon();
	cout<<nre<<"：你可真贏了不少"<<endl;
	getch();
	system("CLS");
	cout<<"...呵呵呵...多謝啦...伊藤兄"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：那些也不是我的錢...無所謂"<<endl;
	getch();
	system("CLS");
	cout<<"話說回來"<<nre<<"兄，你左手幹嘛一直戴著手套呢?"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：...出過一些意外..."<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：(...兵藤...那個老不死..也死了一陣子了..)"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：...要到目的地了..."<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：你覺得你運氣會一直好下去嗎"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：我是不這麼覺得"<<endl;
	getch();
	system("CLS");
	cout<<"...你想表達什麼..."<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：抽手吧，福本老弟"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：在這樣下去...總有一天...你會死無全屍的"<<endl;
	getch();
	system("CLS");
	cout<<"...如果是賭命的話，這不是理所當然嗎?"<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：...希望到時你也能這麼達觀..."<<endl;
	getch();
	system("CLS");
	cout<<nre<<"：...我先走了，你也該醒了..."<<endl;
	getch();
	system("CLS");
	cout<<"...你說什麼啊..."<<nre<<"兄"<<endl;
	getch();
	system("CLS");
	PlaySound("./knocking_a_wall.wav", NULL, SND_FILENAME|SND_ASYNC);
	delay(1000);
	getch();
	getch();
	readimagefile("57126145_p0.jpg",0,0,Max_x,Max_y);//
	PlaySound("./car_and_rain", NULL, SND_FILENAME|SND_LOOP|SND_ASYNC);
	cout<<"(...睜眼...)"<<endl;
	getch();
	system("CLS");
	cout<<"(.........)"<<endl;
	getch();
	system("CLS");
	cout<<"(.........)"<<endl;
	getch();
	system("CLS");
	cout<<"(...是夢...)"<<endl;
	getch();
	system("CLS");
	cout<<"(.........)"<<endl;
	getch();
	system("CLS");
	cout<<"(...我怎麼會在這種地方睡著...)"<<endl;
	getch();
	system("CLS");
	cout<<"(.........)"<<endl;
	getch();
	system("CLS");
	cout<<"(...是嗎...是夢嗎...)"<<endl;
	getch();
	system("CLS");
	cout<<"(.........)"<<endl;
	getch();
	system("CLS");
	cout<<"(...真是做了個好夢呢...)"<<endl;
	getch();
	system("CLS");
	cout<<"(.........)"<<endl;
	getch();
	system("CLS");
	cout<<"(...這裡是晴海碼頭旁...)"<<endl;
	getch();
	system("CLS");
	cout<<"(....嗯.....)"<<endl;
	getch();
	system("CLS");
	cout<<"(...那就回去吧...)"<<endl;
	getch();
	system("CLS");
	cout<<"(......)"<<endl;
	getch();
	system("CLS");
	cout<<"(.........)"<<endl;
	getch();
	system("CLS");
	cout<<"(............)"<<endl;
	getch();
	system("CLS");
	cout<<"(...明天開始找工作好了...)"<<endl;
	getch();
	system("CLS");
	delay(5000);
	cout<<"結局3:Club Queen"<<endl;
	delay(5000);
	system("CLS");
	cout<<"恭喜達成結局"<<endl;
	delay(5000);
	system("CLS");
	cout<<"總共有三個結局，加油吧"<<endl;
	delay(5000);
	system("CLS");
	return 3;
}
