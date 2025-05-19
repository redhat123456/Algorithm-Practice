#include <conio.h>
#include <fstream>
#include <iostream>
#include<stdlib.h>
   using namespace std;
   int k=0,jiu=0,u=0,g=0,qian=1000,z=0,yan=0,*p;
   	FILE*fp;
	char ch,filename[10];
void tushuguan(); 
void gangkou();
void xiaofangju();
void lvguan();
void jiaotang();
void huangguan();
void fanhui();
void guangchang(); 
void shangdian0();
void shangdian1();
void map1();
void map2();
void zhuangtai(); 
void riji(); 
   char  a[15][130] = { 
                   "|                  印斯茅斯小镇地图                     |", 
                   "|  o广场  0你的位置  $商店 @港口 &消防局 #旅馆 *大衮教堂|",
				   "|                                                       |",
				   "|      |-----|------------|    &--------|               |",
				   "|            |            |             |               |",
				   "|            |            |             |               |",
				   "|------|-----|            |             |       |----@  |",
				   "|      o     |            |-------------|-------|       |",
				   "|            |                          |               |",
				   "|            |                          |-----------|   |",
				   "|            |-----------------*              |         |",
				   "|            |                                |-----#   |",
				   "|            |--------------$                           |",
				   "|                                                       |" };
	char b[11][100] = {
	           "| + 纽伯里波特图书馆  = 纽伯里波特火车站      |",
	           "|                                             |",
	           "|-------------|-------------=                 |",
	           "|             |                               |",
	           "|             +                               |"};
    int main(){ 
	int b;
	cout << "                               [印斯茅斯小镇]                 "<<endl; 
	cout << "                               1.开始游戏                 "<<endl; 
	cout << "                               2.游戏规则                 "<<endl; 
	cin>>b;
	if(b==1) {
		riji();
		map1();
	}
	else{
		cout<< "wasd进行移动 ,f查看玩家状态"<<endl;
		cout <<"按任意键继续..."<< endl;
    	getch();
    	system("cls");
		main();
	}
	
	} 

	void map1(){	
	int n = 0, l = 1,x=0,y=0;
	int i = 0,g=0;
	for (i = 0; i <= 5; i++)
	cout << b[i] << endl;
   		char ch;
   		while(1){ 
		b[4][14]='+',b[2][28]='=';
   	    ch = _getch();
    	if (ch == 'w'){
	   	if (b[x - 1][y] == '-' || b[x - 1][y] == '|' || b[x - 1][y] == '+' || b[x - 1][y] == '=' ){
	   	        	if (b[x - 1][y] == '='){
					system("cls");
						if(g>0)
		        	{
					map2();
					system("cls");}
					else
					fanhui();}
					if (b[x - 1][y] == '+'){
					system("cls");
					tushuguan();
					g++;
					system("cls");}
		 if (b[x + 1][y] != ' ' || b[x - 1][y] != ' '){
					b[x][y] = '|';}
				else{
					b[x][y] = '-';}
						x--;
				b[x][y] = '0';
				system("cls");
				i = 0;
				for (i = 0; i <= 11; i++)
				cout << b[i] << endl;
		 } 
   } 
   	if (ch == 's'){
	   	if (b[x + 1][y] == '-' || b[x + 1][y] == '|' || b[x + 1][y] == '+' || b[x + 1][y] == '=' ){
	   	        	if (b[x + 1][y] == '='){
					system("cls");
			    		if(g>0)
		        	{
					map2();
					system("cls");}
					else
					fanhui();}
					if (b[x + 1][y] == '+'){
					system("cls");
					tushuguan();
					g++;
					system("cls");}
		 if (b[x + 1][y] != ' ' || b[x - 1][y] != ' '){
					b[x][y] = '|';}
				else{
					b[x][y] = '-';}
						x++;
				b[x][y] = '0';
				system("cls");
				i = 0;
				for (i = 0; i <= 11; i++)
					cout << b[i] << endl;
		 } 
   } 
   	if (ch == 'a'){
	   	if (b[x][y - 1] == '-' || b[x][y - 1] == '|' || b[x][y - 1] == '+' || b[x][y - 1] == '=' ){
	   	        	if (b[x][y - 1] == '='){
					system("cls");
				   	if(g>0)
		        	{
					map2();
					system("cls");}
					else
					fanhui();}
					if (b[x][y - 1] == '+'){
					system("cls");
					tushuguan();
					g++;
					system("cls");}
		 if (b[x + 1][y] != ' ' || b[x - 1][y] != ' '){
					b[x][y] = '|';}
				else{
					b[x][y] = '-';}
						y--;
				b[x][y] = '0';
				system("cls");
				i = 0;
				for (i = 0; i <= 11; i++)
					cout << b[i] << endl;
		 } 
   } 
   if (ch == 'd'){
	   	if (b[x][y + 1] == '-' || b[x][y + 1] == '|' || b[x][y + 1] == '+' || b[x][y + 1] == '=' ){
	   	        	if (b[x][y + 1] == '='){
					system("cls");
		        	if(g>0)
		        	{
					map2();
					system("cls");}
					else
					fanhui();}
					system("cls");}
					if (b[x][y + 1] == '+'){
					system("cls");
					tushuguan();
					g++;
					system("cls");}
		 if (b[x + 1][y] != ' ' || b[x - 1][y] != ' '){
					b[x][y] = '|';}
				else{
					b[x][y] = '-';}
						y++;
				b[x][y] = '0';
				system("cls");
				i = 0;
				for (i = 0; i <= 11; i++)
					cout << b[i] << endl;
		 } 
	    if(ch=='f'){
     	zhuangtai();
     		for (i = 0; i <= 11; i++)
				cout << b[i] << endl;
     }
   } 
}
	
	
void map2(){
		cout<<"我现在坐在去往印斯茅斯的巴士上，那个皇冠不可言状的怪诞感依旧在我脑海里挥之不去"<<endl;
		cout <<"这个巴士的司机长着一张所谓的“印斯茅斯脸”面色阴沉毫无表情，随着老旧的巴士不断前行"<< endl;
   	    cout <<"由沙地与莎草构成的陆地风景也逐渐变得荒凉，一路上看不到一间民舍。粗制滥造的木桥，横跨在被潮水侵蚀的内陆之上。目之"<< endl;
     	cout <<"所及，皆是一片萧瑟，历经了数个小时的颠簸，一座笼罩在阴霾之下的渔村出现在我的面前。印斯茅斯，到站了"<< endl;
     	cout<<"荒废的老屋，破旧的民舍，毫无章法地挤在一起"<<endl;
    	cout <<"四处走走调查，搜索线索"<< endl;
    	cout <<"按任意键继续..."<< endl;
    	getch();
    	system("cls");
	int n = 0, l = 1,x=0,y=0,k=0;
	int i = 0;
	for (i = 0; i <= 14; i++)
	cout << a[i] << endl;
   		char ch;
   		while(1){
   		a[12][28]='$',a[7][7]='o',a[10][31]='*',a[6][53]='@',a[3][31]='&',a[11][52]='#';
   	    ch = _getch();
    	if (ch == 'w'){
	   	if (a[x - 1][y] == '-' || a[x - 1][y] == '|' || a[x - 1][y] == '$' || a[x - 1][y] == '@' || a[x - 1][y] == '&' || a[x - 1][y] == '#' || a[x - 1][y] == '*'|| a[x - 1][y] == 'o' ){
	   	        	if (a[x - 1][y] == '$'){
					if(k=0)
					shangdian0();
					system("cls");
					if(k=1)
					shangdian1();
					system("cls");}
					if (a[x - 1][y] == '@'){
					system("cls");
					gangkou();
					system("cls");}
					if (a[x - 1][y] == '&'){
						system("cls");
					    xiaofangju();
						system("cls"); }
					if (a[x - 1][y] == '#'){
					system("cls");
					lvguan();
					system("cls");}
					if (a[x - 1][y] == '*'){
					system("cls");
					jiaotang();
					system("cls");}
					if (a[x - 1][y] == 'o'){
					system("cls");
					guangchang();
					system("cls");}
		 if (a[x + 1][y] != ' ' || a[x - 1][y] != ' '){
					a[x][y] = '|';}
				else{
					a[x][y] = '-';}
						x--;
				a[x][y] = '0';
				system("cls");
				i = 0;
				for (i = 0; i <= 14; i++)
					cout << a[i] << endl;
		 } 
   } 
   	if (ch == 's'){
	   	if (a[x +1][y] == '-' || a[x + 1][y] == '|' || a[x + 1][y] == '$' || a[x + 1][y] == '@' || a[x + 1][y] == '&' || a[x + 1][y] == '#' || a[x + 1][y] == '*' || a[x + 1][y] == 'o'){
	   	        	if (a[x + 1][y] == '$'){
					if(k=0)
					shangdian0();
					system("cls");
					if(k=1)
					shangdian1();
					system("cls");}
					if (a[x + 1][y] == '@'){
					system("cls");
					gangkou();
					system("cls");}
					if (a[x + 1][y] == '&'){
						system("cls");
					    xiaofangju();
						system("cls");}
					if (a[x + 1][y] == '#'){
					system("cls");
					lvguan();
					system("cls");}
					if (a[x + 1][y] == '*'){
					system("cls");
					jiaotang();
					system("cls");}
					if (a[x + 1][y] == 'o'){
					system("cls");
					guangchang();
					system("cls");}
		 if (a[x + 1][y] != ' ' || a[x - 1][y] != ' '){
					a[x][y] = '|';}
				else{
					a[x][y] = '-';}
						x++;
				a[x][y] = '0';
				system("cls");
				i = 0;
				for (i = 0; i <= 14; i++)
					cout << a[i] << endl;
		 } 
   } 
   	if (ch == 'a'){
	   	if (a[x][y - 1] == '-' || a[x][y - 1] == '|' || a[x][y - 1] == '$' || a[x][y - 1] == '@' || a[x][y - 1] == '&' || a[x][y - 1] == '#' || a[x][y - 1] == '*' || a[x][y - 1] == 'o'){
	   	        	if (a[x][y - 1] == '$'){
						if(k=0)
					shangdian0();
					system("cls");
					if(k=1)
					shangdian1();
					system("cls");}
					if (a[x][y - 1] == '@'){
					system("cls");
					gangkou();
					system("cls");}
					if (a[x][y - 1] == '&'){
							system("cls");
					    xiaofangju();
						system("cls"); }
					if (a[x][y - 1] == '#'){
					system("cls");
					lvguan();
					system("cls");}
					if (a[x][y - 1] == '*'){
					system("cls");
					jiaotang();
					system("cls");}
					if (a[x][y - 1] == 'o'){
					system("cls");
					guangchang();
					system("cls");}
		 if (a[x + 1][y] != ' ' || a[x - 1][y] != ' '){
					a[x][y] = '|';}
				else{
					a[x][y] = '-';}
						y--;
				a[x][y] = '0';
				system("cls");
				i = 0;
				for (i = 0; i <= 14; i++)
					cout << a[i] << endl;
		 } 
   } 
   	if (ch == 'd'){
	   	if (a[x][y + 1] == '-' || a[x][y + 1] == '|' || a[x][y + 1] == '$' || a[x][y + 1] == '@' || a[x][y + 1] == '&' || a[x][y + 1] == '#' || a[x][y + 1] == '*' || a[x][y + 1] == 'o'){
	   	        	if (a[x][y + 1] == '$'){
					if(k=0)
					shangdian0();
					system("cls");
					if(k=1)
					shangdian1();
					system("cls");
					}
					if (a[x][y + 1] == '@'){
					system("cls");
					gangkou();
					system("cls");}
					if (a[x][y + 1] == '&'){
						system("cls");
					    xiaofangju();
						system("cls");} 
					if (a[x][y + 1] == '#'){
					system("cls");
					lvguan();
					system("cls");}
					if (a[x][y + 1] == '*'){
					system("cls");
					jiaotang();
					system("cls");}
					if (a[x][y + 1] == 'o'){
					system("cls");
					guangchang();
					system("cls");}
		 if (a[x + 1][y] != ' ' || a[x - 1][y] != ' '){
					a[x][y] = '|';}
				else{
					a[x][y] = '-';}
						y++;
				a[x][y] = '0';
				system("cls");
				i = 0;
				for (i = 0; i <= 14; i++)
					cout << a[i] << endl;
		 } 
   } 
     if(ch=='f'){
   	zhuangtai();
   		for (i = 0; i <= 14; i++)
					cout << a[i] << endl;
   } 
}
}
void shangdian0(){
		cout<<"这里人迹稀少，出于某种原因，我来到了商店打探消息，毕竟在乘坐晚八点的巴士离开之前我还有大把的时间"<<endl; 
		cout<<"来调查此地。接待我的是一位小伙子，我很惊讶他竟然没长着一副印斯茅斯脸"<<endl; 
		cout <<"按任意键继续..."<< endl;
		getch();
		k++;	
		shangdian1();
		printf("%d",k);
}
void shangdian1(){
int b,l;
	    cout<<"1.与老板交谈"<<endl; 
	    cout<<"2.购买物品"<<endl; 
	    cout<<"3.返回地图"<<endl; 
	    cin>>l;
	    system("cls");
	    if(l=1){
	    	cout<<"我从他口中得知他也是迫不得已从阿卡姆调到了这里工作的，和我一样，他也十分厌恶印斯茅斯的“风土人情”"<<endl;
	    	cout<<"同时告诉我镇上诸多地点，都是生人勿进的禁区。更别想从当地人口中了解到任何关于印斯茅斯的过去，唯一"<<endl;
	    	cout<<"愿意开口的当地人，是一名叫扎多克。艾伦的老酒鬼。他经常在消防局附近晃悠"<<endl;
	    	cout <<"按任意键继续..."<< endl;
    		getch();
	    	u++;
	    	system("cls");
		}
		if(l=2){
			cout<<"您的余额为"<< qian << endl;
			cout<<"输入1购买酒"<<endl;
			cout<<"输入2购买香烟"<<endl;
			cin>>b; 
			system("cls");
			if(b=1){
				cout<<"购买成功"<<endl;
				qian=qian-200;
				cout<<"您的余额为"<< qian << endl;
				jiu++; 
			}
			else{
				cout<<"购买成功"<<endl;
				qian=qian-100;
				cout<<"您的余额为"<< qian << endl;
				yan++; 
			}
		}
} 
void tushuguan()
{
	cout<<"只有为数不多的印斯茅斯郡县志"<<endl;
	cout<<"你查到的这些资料几乎都没什么用"<<endl;
	cout<<"只有1846年印斯茅斯大瘟疫和一顶成列在纽伯里波特的皇冠引起了你的注意"<<endl;
	cout <<"按任意键继续..."<< endl;
   	getch();
	system("cls");
	huangguan();
	cout <<"按任意键继续..."<< endl;
   	getch();
   	cout<<"皇冠上面雕刻着半鱼半人的生物以及纹路清晰的水波图案"<<endl; 
	system("cls");	
	cout <<"按任意键继续..."<< endl;
   	getch();
	return;
	
	
}
void gangkou(){
	cout<<"19世纪初印斯茅斯镇出现了一位船长--奥贝德，他发现了一座岛屿"<<endl;
	cout<<"岛上怪石嶙峋，每块石头都被雕琢成了面目可憎的异兽"<<endl;
	cout<<"即使邻近的海域以及没有鱼了，这些土著都能抓到鱼"<<endl;
	cout<<"年轻的船长发现了原因："<<endl;
	cout<<"每隔一段时间，这些土著就会将年轻的后生献祭给海底半鱼半人的生物"<<endl;
	cout<<"后来熟络起来了，这些怪物甚至开始和土著混种"<<endl;
	cout<<"土著酋长给船长展示了一件祭祀用的铅制器皿，据说可以从任何地方召唤愿意前往的鱼人"<<endl;
	cout<<"船长发现自己可以轻易从土著手中换来异域财宝"<<endl;
	cout<<"很快变建立了印斯茅斯与岛的贸易航线"<<endl;
	cout<<"但有一天奥贝德突然发现岛上的土著全都消失了，猜测这些怪物可能被古老者的印章(这是他们唯一惧怕的东西)干掉了"<<endl;
	cout<<"他告诉人们他认识一位真正的神，可以保佑镇民大富大贵"<<endl;
	cout <<"按任意键继续..."<< endl;
   	getch();
	system("cls");
	cout <<"按任意键继续..."<< endl;
   	getch();
	system("cls");
	cout<<"印斯茅斯就此活了起来，工厂开始运作。。。"<<endl;
	cout<<"那些持反对意见的人要么被排挤，要么就以及离开了"<<endl;
	cout<<"最终奥贝德和他的同伙被关了起来"<<endl; 
	cout<<"突然有一天那些鱼人从海里面爬了出来"<<endl;
	cout<<"奥贝德被放了出来，枪声，哭喊声不绝于耳" <<endl;
	cout<<"这就是印斯茅斯大瘟疫"<<endl;
	system("cls");	
	cout<<"突然，老酒鬼对着远处一片海域大叫："<<endl; 
	cout<<"那些鬼东西看见我们了，快跑！！！"<<endl;
	cout<<"回想着他的痴言呓语，我只有想逃离这里的想法"<<endl; 
	getch();
	system("cls");
	 
} 
void xiaofangju(){
		cout<<"走着走着，我来到了印斯茅斯消防局，一位带着码头帽的老人已坐在门前，宿醉一般无精打采"<<endl;
		if(jiu>0){
			cout<<"在看到我手中的酒瓶以后，他立刻双眼放光，跟着我远离了鬼鬼祟祟的镇民"<<endl;
			cout<<"你们前往港口攀谈"<<endl;
			cout <<"按任意键继续..."<< endl;
    		getch();
			system("cls");
			u++;
			g++; 
			return; }
		else{
		cout<<"去买酒"<<endl;
			getch();
			system("cls");
		return;}
		} 
void lvguan(){
	cout<<"虽然你被刚刚的所见所闻给震惊到了，不过你还是打算暂住一晚上"<< endl;
	cout<<"你想起了之前的日记" <<endl;
    fp=fopen(filename,"r");
	cout<<"输入1入住"<<endl; 
	cin>>z;
	if(z=1)
	cout<<"游戏结束"<<endl;
	else 
	cout<<"游戏结束"<<endl;
} 
void jiaotang(){
	cout<<"你来到了这个镇上唯一教堂，只见一个头戴饰冠的红衣牧师不怀好意地回头看了你一眼，天哪，"<<endl;
	cout<<"他的饰冠简直和我在陈列馆中看到的金冠一模一样。而他的脸是那样的怪异，那还是人类的模样吗？"<<endl;
	cout<<"所以你远远的走了"<<endl;
	cout <<"按任意键继续..."<< endl;
    getch();
}
void fanhui() 
{
				cout<<"你还没有探索完，继续探索"<<endl;
				cout <<"按任意键继续..."<< endl;
    			getch();
   				system("cls");
				return;
}
 void huangguan()
 {
 cout<<"	                                ................                               "<<endl;
 cout<<"                               . .......,]].....                                   "<<endl;
 cout<<"                               ........=eeee...                                    "<<endl;
 cout<<"                               .........lee`...                                    "<<endl;
 cout<<"                             ..........,eeel...........                            "<<endl;
 cout<<"                           . ........./eeeeee`.........                            "<<endl;
 cout<<"                  .        ......=eeleeeeeeeeeleeO......        ......             "<<endl;
 cout<<"             .....         ......=ee/eeeeeeeee/ee/.....            .  .            "<<endl;
 cout<<"       .......,.*....................,eeeeeee^.....................,......         "<<endl;
 cout<<"       ......*eeeel]].................=eeeeee..................]leeee^....         "<<endl;
 cout<<"      ........leeOeeeeel`..............eeeee`............../eeeeeOeee`... .        "<<endl;
 cout<<"      .............leeeeee...]ee]......=eeee......,/el...=eeeeee........           "<<endl;
cout<<".....................eeeee^...eeeel`....=eeee.....]eeee^...eeeee^..................."<<endl;
cout<<".....................=eeee^........lee`.eeeee^./ee`........eeeee...................."<<endl;
cout<<"..,/eel`.............,Oeeee`........,eeeeeOeeeee^........./eeee^............../eee]."<<endl;
cout<<".=eeeeee^......,]/Oeee^leeeel........,eeee.=eeel`.......,eeeee^leee]]`.......Oeeeee^"<<endl;
cout<<"..eeeeeeeeeeeeeeeeeee^..=eeeeeeel/eeeeeeee./eeeeeeee/OeeeeeeO...eeeeeeeeeeeeeeeeeee^"<<endl;
cout<<"....[[*,leeeeeeeeeeee^....,eeeeeeeeeeeOeeeleeeeeeeeeeeeeee/.....eeeeeeeeeeeee`.,[`.."<<endl;
cout<<"..........leeeeeeeeee^.........[[`....=eeeeeeee....[[[..........eeeeeeeeeee`........"<<endl;
cout<<"............leeeeeeeee`..............,eeeeeeeeel.............../eeeeeeeee`.........."<<endl;
cout<<".  ..  .......[eeeeeeeel.......`..../eeeee^eeeeee`...........,eeeeeeee/............."<<endl;
cout<<"        ........,eeeeeeeee]]....]/eeeeeee/.,eeeeeeee]]...,]/eeeeeeee/......         "<<endl;
cout<<"        . ........,eeeeeeeeeeeeeeeeeeeee`....leeeeeeeeeeeeeeeeeeee/......           "<<endl;
cout<<"          ...........,eeeeeeeeeeeeeeeO`.,eee`..leeeeeeeeeeeeeee/`........           "<<endl;
cout<<"          .......eel`....,[lOO/[[[`.`.]eeeeeeel....[[[OO[[[[....,eeO....            "<<endl;
cout<<"            .....=eeeeel]].....,]]/eeeeeeeeeeeeeeeO]`.....,]]eeeeee^....            "<<endl;
cout<<"            ......eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee.....            "<<endl;
cout<<"            ......leeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee/.....            "<<endl;
cout<<"              .........................................................             "<<endl;
cout<<"               .        .......................  .......                            "<<endl;
cout<<"                                ................                                    "<<endl;
 }
 void guangchang(){
 	cout<<"等我来到镇广场上，一眼便看到了那辆熟悉的黄色巴士。但是，司机师傅却告诉我他的车子坏了"<<endl;
 	cout<<"别说是阿卡姆了，恐怕今晚怕是那也去不成了，在他的建议下，我来到了吉尔曼旅馆"<<endl;
 	cout<<"请移步至旅馆"<<endl;
 	cout <<"按任意键继续..."<< endl;
    getch();
   	system("cls");
 }
 void zhuangtai(){
 		cout << "你的金币为:" << "$" << qian << endl;
 	    cout << "你的烟的数量为" << yan << endl;
 		cout << "你的酒的数量为:" << jiu << endl;
 	cout <<"按任意键继续..."<< endl;
    getch();
    system("cls");
   	return;
   }
   void riji(){
   		printf("请输入角色的名字(不能输入中文)：");
	scanf("%s",filename);
	getchar();
	if((fp=fopen(filename,"w"))==NULL){
		printf("cannot open file\n");
		exit(0);
	}
	printf("请输入一个日记(以#结束)：");
	ch=getchar();
	while(ch!='#'){
		fputc(ch,fp);
		ch=getchar();
	}
	fclose(fp);
	putchar(10); 
	system("cls");
   } 
