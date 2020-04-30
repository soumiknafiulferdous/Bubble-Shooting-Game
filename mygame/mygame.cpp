#include "iGraphics.h"
#include <string.h>
#include <mmsystem.h>
#include<time.h>

int x[100];
int y[100];
int total;
///for passive mouse
int mposx,mposy;
int menu=1;
//for bubbles
int p=rand()%1024,q=-50;
int p1=rand()%1024,q1=-50;
int p2=rand()%1024,q2=-50;
int p3=rand()%1024,q3=-50;
int p4=rand()%1024,q4=-50;
int score=0;
char str[30];
bool bubble[10]={1,1,1,1,1,1,1,1,1,1};
int life=10;//life counting variable
int bullet=6;//bullet counting variable
bool reload=0;
//life pack bonus variable
int health_x=rand()%980,health_y=820;
bool health=1;//image visibility
bool health_flag=0;//score trigar
int max=0;
#define speed_normal 5
#define speed_hard 10
int speed=5;
bool levelup=0;
int mode=0;
char str1[100];
int len;
int rt=0;
////loadgame variable
int load_p,load_q,load_p1,load_q1,load_p2,load_q2,load_p3,load_q3,load_p4,load_q4;
int load_score;
bool load_bubble[10];
int load_life;//life counting variable
int load_bullet;//bullet counting variable
bool load_reload;
//life pack bonus variable
int load_health_x,load_health_y;
bool load_health;//image visibility
bool load_health_flag;//score trigar
int load_max;
int load_speed;
bool load_levelup;
int load_mode;
int load_rt;
int intro=0;

/*
	function iDraw() is called again and again by the system.
*/

struct data{
	  char txthighscore[100];
	  int highscore_txt;
	}data_highscore[20],temp,data[20];


void scoring()
{
	iSetColor(255,255,255);
	//point status
	iText(30, 724, "Score:", GLUT_BITMAP_TIMES_ROMAN_24);
	sprintf(str,"%d",score);
	iText(130,724,str,GLUT_BITMAP_TIMES_ROMAN_24);
	//bullet status
	iText(412, 724, "Bullet: ", GLUT_BITMAP_TIMES_ROMAN_24);
	sprintf(str,"%d",bullet);
	iText(500,724,str,GLUT_BITMAP_TIMES_ROMAN_24);
	//life status
	iText(900, 724, "Life: ", GLUT_BITMAP_TIMES_ROMAN_24);
	sprintf(str,"%d",life);
	iText(960,724,str,GLUT_BITMAP_TIMES_ROMAN_24);

}

void iDraw()
{
	//place your drawing codes here

	iClear();
	if(menu==1)
	{
		////iShowBMP(0,0,"menu1.bmp");
		/***************/
	if(intro==1)iShowBMP(0,0,"1.bmp");
	if(intro==2)iShowBMP(0,0,"2.bmp");
	if(intro==3)iShowBMP(0,0,"3.bmp");
	if(intro==4)iShowBMP(0,0,"4.bmp");
	if(intro==5)iShowBMP(0,0,"5.bmp");
	if(intro==6)iShowBMP(0,0,"6.bmp");
	if(intro==7)iShowBMP(0,0,"7.bmp");
	if(intro==8)iShowBMP(0,0,"8.bmp");
	if(intro==9)iShowBMP(0,0,"9.bmp");
	if(intro==10)iShowBMP(0,0,"10.bmp");
    if(intro==11)iShowBMP(0,0,"11.bmp");
	if(intro==12)iShowBMP(0,0,"12.bmp");
	if(intro==13)iShowBMP(0,0,"13.bmp");
	if(intro==14)iShowBMP(0,0,"14.bmp");
	if(intro==15)iShowBMP(0,0,"15.bmp");
	if(intro==16)iShowBMP(0,0,"16.bmp");
	if(intro==17)iShowBMP(0,0,"17.bmp");
	if(intro==18)iShowBMP(0,0,"18.bmp");
	if(intro==19)iShowBMP(0,0,"19.bmp");
	if(intro==20)iShowBMP(0,0,"20.bmp");
	if(intro==21)iShowBMP(0,0,"21.bmp");
	if(intro==22)iShowBMP(0,0,"22.bmp");
	if(intro==23)iShowBMP(0,0,"23.bmp");
	if(intro==24)iShowBMP(0,0,"24.bmp");
	if(intro==25)iShowBMP(0,0,"25.bmp");
	if(intro==26)iShowBMP(0,0,"26.bmp");
	if(intro==27)iShowBMP(0,0,"27.bmp");
	if(intro==28)iShowBMP(0,0,"28.bmp");
	if(intro==29)iShowBMP(0,0,"29.bmp");
	if(intro==30)iShowBMP(0,0,"30.bmp");
	if(intro==31)iShowBMP(0,0,"31.bmp");
	if(intro==32)iShowBMP(0,0,"32.bmp");
	if(intro==33)iShowBMP(0,0,"33.bmp");
	if(intro==34)iShowBMP(0,0,"34.bmp");
	if(intro==35)iShowBMP(0,0,"35.bmp");
	if(intro==36)iShowBMP(0,0,"36.bmp");
    if(intro==37)iShowBMP(0,0,"37.bmp");
	if(intro==38)iShowBMP(0,0,"38.bmp");
    if(intro==39)iShowBMP(0,0,"39.bmp");
	if(intro==40)iShowBMP(0,0,"40.bmp");
	if(intro==41)iShowBMP(0,0,"41.bmp");
	if(intro==42)iShowBMP(0,0,"42.bmp");
	if(intro==43)iShowBMP(0,0,"43.bmp");
	if(intro==44)iShowBMP(0,0,"44.bmp");
	if(intro==45)iShowBMP(0,0,"45.bmp");
	if(intro==46)iShowBMP(0,0,"46.bmp");
	if(intro==47)iShowBMP(0,0,"47.bmp");
	if(intro==48)iShowBMP(0,0,"48.bmp");
	if(intro==49)iShowBMP(0,0,"49.bmp");
	if(intro==50)iShowBMP(0,0,"50.bmp");
	if(intro==51)iShowBMP(0,0,"51.bmp");
	if(intro==52)iShowBMP(0,0,"52.bmp");
	if(intro==53)iShowBMP(0,0,"53.bmp");
	if(intro==54)iShowBMP(0,0,"54.bmp");
	if(intro==55)iShowBMP(0,0,"55.bmp");
	if(intro==56)iShowBMP(0,0,"56.bmp");
	if(intro==57)iShowBMP(0,0,"57.bmp");
	if(intro==58)iShowBMP(0,0,"58.bmp");
	if(intro==59)iShowBMP(0,0,"59.bmp");
	if(intro==60)iShowBMP(0,0,"60.bmp");
    if(intro==61)iShowBMP(0,0,"61.bmp");
	if(intro==62)iShowBMP(0,0,"62.bmp");
	if(intro==63)iShowBMP(0,0,"63.bmp");
	if(intro==64)iShowBMP(0,0,"64.bmp");
	if(intro==65)iShowBMP(0,0,"65.bmp");
	if(intro==66)iShowBMP(0,0,"66.bmp");
	if(intro==67)iShowBMP(0,0,"67.bmp");
	if(intro==68)iShowBMP(0,0,"68.bmp");
	if(intro==69)iShowBMP(0,0,"69.bmp");
	if(intro==70)iShowBMP(0,0,"70.bmp");
	if(intro==71)iShowBMP(0,0,"71.bmp");
	if(intro==72)iShowBMP(0,0,"72.bmp");
	if(intro==73)iShowBMP(0,0,"73.bmp");
	if(intro==74)iShowBMP(0,0,"74.bmp");
	if(intro==75)iShowBMP(0,0,"75.bmp");
	if(intro==76)iShowBMP(0,0,"76.bmp");
	if(intro==77)iShowBMP(0,0,"77.bmp");
    if(intro==78)iShowBMP(0,0,"78.bmp");
	if(intro==79)iShowBMP(0,0,"79.bmp");
	if(intro==80)iShowBMP(0,0,"80.bmp");
	if(intro==81)iShowBMP(0,0,"81.bmp");
	if(intro==82)iShowBMP(0,0,"82.bmp");
	if(intro==83)iShowBMP(0,0,"83.bmp");
	if(intro==84)iShowBMP(0,0,"84.bmp");
	if(intro==85)iShowBMP(0,0,"85.bmp");
	if(intro==86)iShowBMP(0,0,"86.bmp");
	if(intro==87)iShowBMP(0,0,"87.bmp");
	if(intro==88)iShowBMP(0,0,"88.bmp");
    if(intro==89)iShowBMP(0,0,"89.bmp");
	if(intro==90)iShowBMP(0,0,"90.bmp");
	if(intro==91)iShowBMP(0,0,"91.bmp");
	if(intro==92)iShowBMP(0,0,"92.bmp");
	if(intro==93)iShowBMP(0,0,"93.bmp");
	if(intro==94)iShowBMP(0,0,"94.bmp");
	if(intro==95)iShowBMP(0,0,"95.bmp");
	if(intro==96)iShowBMP(0,0,"96.bmp");
	if(intro==97)iShowBMP(0,0,"97.bmp");
	if(intro==98)iShowBMP(0,0,"98.bmp");
	if(intro==99)iShowBMP(0,0,"99.bmp");
	if(intro==100)iShowBMP(0,0,"100.bmp");
	if(intro==101)iShowBMP(0,0,"101.bmp");
	if(intro==102)iShowBMP(0,0,"102.bmp");
	if(intro==103)iShowBMP(0,0,"103.bmp");
	if(intro==104)iShowBMP(0,0,"104.bmp");
	if(intro==105)iShowBMP(0,0,"105.bmp");
	if(intro==106)iShowBMP(0,0,"106.bmp");
	if(intro==107)iShowBMP(0,0,"107.bmp");
	if(intro==100)iShowBMP(0,0,"100.bmp");
	if(intro==101)iShowBMP(0,0,"101.bmp");
	if(intro==102)iShowBMP(0,0,"102.bmp");
	if(intro==103)iShowBMP(0,0,"103.bmp");
	if(intro==104)iShowBMP(0,0,"104.bmp");
	if(intro==105)iShowBMP(0,0,"105.bmp");
	if(intro==106)iShowBMP(0,0,"106.bmp");
	if(intro==107)iShowBMP(0,0,"107.bmp");
	if(intro==108)iShowBMP(0,0,"108.bmp");
	if(intro==109)iShowBMP(0,0,"109.bmp");
	if(intro==110)iShowBMP(0,0,"110.bmp");
	if(intro==111)iShowBMP(0,0,"111.bmp");
	if(intro==112)iShowBMP(0,0,"112.bmp");
	if(intro==113)iShowBMP(0,0,"113.bmp");
	if(intro==114)iShowBMP(0,0,"114.bmp");
	if(intro==115)iShowBMP(0,0,"115.bmp");
	if(intro==116)iShowBMP(0,0,"116.bmp");
	if(intro==117)iShowBMP(0,0,"117.bmp");
	if(intro==118)iShowBMP(0,0,"118.bmp");
	if(intro==119)iShowBMP(0,0,"119.bmp");
	if(intro==120)iShowBMP(0,0,"120.bmp");
	if(intro==121)iShowBMP(0,0,"121.bmp");
	if(intro==122)iShowBMP(0,0,"122.bmp");
	if(intro==123)iShowBMP(0,0,"123.bmp");
	if(intro==124)iShowBMP(0,0,"124.bmp");
	if(intro==125)iShowBMP(0,0,"125.bmp");
	if(intro==126)iShowBMP(0,0,"126.bmp");
	if(intro==127)iShowBMP(0,0,"127.bmp");
	if(intro==128)iShowBMP(0,0,"128.bmp");
	if(intro==129)iShowBMP(0,0,"129.bmp");
    if(intro==130)iShowBMP(0,0,"130.bmp");
	if(intro==131)iShowBMP(0,0,"131.bmp");
	if(intro==132)iShowBMP(0,0,"132.bmp");
	if(intro==133)iShowBMP(0,0,"133.bmp");
	if(intro==134)iShowBMP(0,0,"134.bmp");
	if(intro==135)iShowBMP(0,0,"135.bmp");
	if(intro==136)iShowBMP(0,0,"136.bmp");
	if(intro==137)iShowBMP(0,0,"137.bmp");
	if(intro==138)iShowBMP(0,0,"138.bmp");
	if(intro==139)iShowBMP(0,0,"139.bmp");
	if(intro==140)iShowBMP(0,0,"140.bmp");
	if(intro==141)iShowBMP(0,0,"141.bmp");
	if(intro==142)iShowBMP(0,0,"142.bmp");
	if(intro==143)iShowBMP(0,0,"143.bmp");
	if(intro==144)iShowBMP(0,0,"144.bmp");
	if(intro==145)iShowBMP(0,0,"145.bmp");
    if(intro==146)iShowBMP(0,0,"146.bmp");
    if(intro==147)iShowBMP(0,0,"147.bmp");
		//////////
	}
	if(menu==2)
	    {
		//level
		iShowBMP(0,0,"menunw.bmp");
		iSetColor(255,255,255);
		///////////////
		iRectangle(425,470,170,40);
		iText(455, 480, "New Game", GLUT_BITMAP_TIMES_ROMAN_24);

		////////
		iRectangle(425,410,170,40);
		iText(455, 420, "Load Game", GLUT_BITMAP_TIMES_ROMAN_24);
		iRectangle(425,350,170,40);
		iText(455, 360, "Select Level", GLUT_BITMAP_TIMES_ROMAN_24);
		iRectangle(425,290,170,40);
		iText(455, 300, "High Score", GLUT_BITMAP_TIMES_ROMAN_24);
		iRectangle(425,230,170,40);
		iText(450, 240, "Instructions", GLUT_BITMAP_TIMES_ROMAN_24);
		iRectangle(425,170,170,40);
		iText(485, 180, "Exit", GLUT_BITMAP_TIMES_ROMAN_24);

	   }

	if(menu==3)
	{
		///main game page
		iClear();

		iShowBMP(0,0,"gamepage.bmp");
		if(health==1)
		{
		iShowBMP(health_x,health_y,"health.bmp");
		}
		if(bubble[0]==1)
		{
			iSetColor(255,0,0);
			iFilledCircle(p,q,30,40);
		}

		if(bubble[1]==1)
		{
			iSetColor(66,56,195);
			iFilledCircle(p1,q1,30,40);
		}

		if(bubble[2]==1)
		{
	        iSetColor(27,195,189);
			iFilledCircle(p2,q2,30,40);
		}

		if(bubble[3]==1)
		{
	        iSetColor(178,89,30);
			iFilledCircle(p3,q3,30,40);
		}

		if(bubble[4]==1)
		{
	        iSetColor(193,44,209);
			iFilledCircle(p4,q4,30,40);
		}

		//score board design in main game
		iSetColor(0,0,0);
		iFilledRectangle(0,700,1024,768);
	
		if(bullet==0&&reload==0)
		{
			iSetColor(255,255,0);
			iText(255, 365, "Reload Your Gun(press right click to reload) ", GLUT_BITMAP_TIMES_ROMAN_24);
		}
		if(bullet!=0)
		{
			reload=0;
		}
		scoring();

	}

	if(menu==4)
	{
		///gameover menu
		if(score>data_highscore[4].highscore_txt)
		{
			menu=7;

		}
		else menu=8;
	}
	if(menu==5)
	{
		iShowBMP(0,0,"chooselevel.bmp");
		iSetColor(255,255,255);
		iRectangle(563,271,400,60);
		iRectangle(377,155,270,60);
		  iText(266,86,"Press \"Backspace\" To Go Back To Main Menu",GLUT_BITMAP_TIMES_ROMAN_24);
	}

	if(menu==6)
	{
		//highscore showing page
		iShowBMP(0,0,"highscoreshow.bmp");
		///printing names
			iText(200, 420,data_highscore[0].txthighscore, GLUT_BITMAP_TIMES_ROMAN_24);
			iText(200, 390,data_highscore[1].txthighscore, GLUT_BITMAP_TIMES_ROMAN_24);
			iText(200, 360,data_highscore[2].txthighscore, GLUT_BITMAP_TIMES_ROMAN_24);
			iText(200, 330,data_highscore[3].txthighscore, GLUT_BITMAP_TIMES_ROMAN_24);
			iText(200, 300,data_highscore[4].txthighscore, GLUT_BITMAP_TIMES_ROMAN_24);
			
			////printing scores
			char p[50];
	        char b[10];
			p[0]='\0';
           strcpy_s(p,_itoa(data_highscore[0].highscore_txt,b,10));
		   iText(745, 420, p, GLUT_BITMAP_TIMES_ROMAN_24);
	       strcpy_s(p,_itoa(data_highscore[1].highscore_txt,b,10));
		   iText(745, 390, p, GLUT_BITMAP_TIMES_ROMAN_24);
	       strcpy_s(p,_itoa(data_highscore[2].highscore_txt,b,10));
	       iText(745, 360, p, GLUT_BITMAP_TIMES_ROMAN_24);
	       strcpy_s(p,_itoa(data_highscore[3].highscore_txt,b,10));
	       iText(745, 330, p, GLUT_BITMAP_TIMES_ROMAN_24);
		   strcpy_s(p,_itoa(data_highscore[4].highscore_txt,b,10));
		   iText(745, 300, p, GLUT_BITMAP_TIMES_ROMAN_24);
	
	       iSetColor(255,255,255);		
		   iText(266,116,"Press \"Backspace\" To Go Back To Main Menu",GLUT_BITMAP_TIMES_ROMAN_24);
			
	}

	if(menu==7)
	{
		iShowBMP(0,0,"highscoretaking.bmp");
        iSetColor(255, 255, 255);
	    iRectangle(279, 142, 512, 30);
		if(mode == 1)
	     {
	       iSetColor(255, 255, 255);
		   iText(456, 148, str, GLUT_BITMAP_TIMES_ROMAN_24);
       	 }
		iText(409,97, "Then Press Enter Button", GLUT_BITMAP_TIMES_ROMAN_24);
	}
	
if(menu==8){

    if(rt==1)iShowBMP(0,0,"gameover1.bmp");
    if(rt==2)iShowBMP(0,0,"gameover2.bmp");
    if(rt==3)iShowBMP(0,0,"gameover3.bmp");
	if(rt==4)iShowBMP(0,0,"gameover4.bmp");
    if(rt==5)iShowBMP(0,0,"gameover5.bmp");
	if(rt==6)iShowBMP(0,0,"gameover6.bmp");
   	if(rt==7)iShowBMP(0,0,"gameover7.bmp");
   	if(rt==8)iShowBMP(0,0,"gameover8.bmp");
   	if(rt==9)iShowBMP(0,0,"gameover9.bmp");
    if(rt==10)iShowBMP(0,0,"gameover10.bmp");
    if(rt==11)iShowBMP(0,0,"gameover11.bmp");
	if(rt==12)iShowBMP(0,0,"gameover12.bmp");
    if(rt==13)iShowBMP(0,0,"gameover13.bmp");
    if(rt==14)iShowBMP(0,0,"gameover14.bmp");
    if(rt==15)iShowBMP(0,0,"gameover15.bmp");
    if(rt==16)iShowBMP(0,0,"gameover16.bmp");
	if(rt==17)iShowBMP(0,0,"gameover17.bmp");
	if(rt==18)iShowBMP(0,0,"gameover18.bmp");
	if(rt==19)iShowBMP(0,0,"gameover19.bmp");
	if(rt==20)iShowBMP(0,0,"gameover20.bmp");
	if(rt==21)iShowBMP(0,0,"gameover21.bmp");
	if(rt==22)iShowBMP(0,0,"gameover22.bmp");
	if(rt==23)iShowBMP(0,0,"gameover23.bmp");
	if(rt==24)iShowBMP(0,0,"gameover24.bmp");
	if(rt==25)iShowBMP(0,0,"gameover25.bmp");
	if(rt==26)iShowBMP(0,0,"gameover26.bmp");
	if(rt==27)iShowBMP(0,0,"gameover27.bmp");
    if(rt==28)iShowBMP(0,0,"gameover28.bmp");
	if(rt==29)iShowBMP(0,0,"gameover29.bmp");
	if(rt==30)iShowBMP(0,0,"gameover30.bmp");
	if(rt==31)iShowBMP(0,0,"gameover31.bmp");
	if(rt==32)iShowBMP(0,0,"gameover32.bmp");
	if(rt==33)iShowBMP(0,0,"gameover33.bmp");
	if(rt==34)iShowBMP(0,0,"gameover34.bmp");
	if(rt==35)iShowBMP(0,0,"gameover35.bmp");
	if(rt==36)iShowBMP(0,0,"gameover36.bmp");
	if(rt==37)iShowBMP(0,0,"gameover37.bmp");
	if(rt==38)iShowBMP(0,0,"gameover38.bmp");
    if(rt==39)iShowBMP(0,0,"gameover39.bmp");
	if(rt==40)iShowBMP(0,0,"gameover40.bmp");
	if(rt==41)iShowBMP(0,0,"gameover41.bmp");
	if(rt==42)iShowBMP(0,0,"gameover42.bmp");
	if(rt==43)iShowBMP(0,0,"gameover43.bmp");
	if(rt==44)iShowBMP(0,0,"gameover44.bmp");
	if(rt==45)iShowBMP(0,0,"gameover45.bmp");
	if(rt==46)iShowBMP(0,0,"gameover46.bmp");
	if(rt==47)iShowBMP(0,0,"gameover47.bmp");
	if(rt==48)iShowBMP(0,0,"gameover48.bmp");
	if(rt==49)iShowBMP(0,0,"gameover49.bmp");
}
 
if(menu==9)
{
	iShowBMP(0,0,"gameover50.bmp");
}

if(menu==10)
{
	iShowBMP(0,0,"pausemenu.bmp");
}

if (menu==11)
{
	iShowBMP(0,0,"instruction_page.bmp");
	iSetColor(255,255,255);		
    iText(266,40,"Press \"Backspace\" To Go Back To Main Menu",GLUT_BITMAP_TIMES_ROMAN_24);
}
		///target icon drawing
		iSetColor(255,0,0);
		iCircle(mposx,mposy,15);
		iCircle(mposx,mposy,10);
		iCircle(mposx,mposy,5);
		iPoint(mposx,mposy,2);
		iLine(mposx,mposy+5,mposx,mposy+20);
		iLine(mposx,mposy-5,mposx,mposy-20);
		iLine(mposx-20,mposy,mposx-5,mposy);
		iLine(mposx+20,mposy,mposx+5,mposy);
		
}


void sort(struct data data_highscore[],int n)
{
	int z;
	for(z=0;z<n-1;z++)
	{
	  for(p=z+1;p<n;p++)
	  {
		  if(data_highscore[z].highscore_txt<data_highscore[p].highscore_txt)
		  {
			  temp=data_highscore[z];
			  data_highscore[z]=data_highscore[p];
			  data_highscore[p]=temp;

		  }
	  }
	
	}
}

void menu7()
{
	int i=0,z=0,p;
	FILE *scorewrite;
	scorewrite=fopen("highscore.txt","w");
	  fprintf(scorewrite,"%s %d\n",data_highscore[0].txthighscore,data_highscore[0].highscore_txt);
	  fprintf(scorewrite,"%s %d\n",data_highscore[1].txthighscore,data_highscore[1].highscore_txt);
	  fprintf(scorewrite,"%s %d\n",data_highscore[2].txthighscore,data_highscore[2].highscore_txt);
	  fprintf(scorewrite,"%s %d\n",data_highscore[3].txthighscore,data_highscore[3].highscore_txt);
	  fprintf(scorewrite,"%s %d\n",data_highscore[4].txthighscore,data_highscore[4].highscore_txt);
	  fclose(scorewrite);
}


void game_over(){
if(menu==8)
{
rt=rt+1;
if(rt>49){
	menu=9;
	rt=0;
}
}
}

void intro_animation()
{
	if(menu==1)
	{
		intro=intro+1;
	}
	if(intro>147)
	{
		menu=2;
		intro=0;
	}

}

void save_game()
{
	FILE *savegame;
	savegame=fopen("savegame.txt","w");
	fprintf(savegame,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",p,q,p1,q1,p2,q2,p3,q3,p4,q4,health_x,health_y,speed,score,life,bullet,reload,health,health_flag,max,levelup,mode,rt,bubble[0],bubble[1],bubble[2],bubble[3],bubble[4]);
	fclose(savegame);
}

void load_game()
{
 
                    ///read save value from save game
                 	FILE *input_loadgame;
	                input_loadgame=fopen("savegame.txt","r");
	                fscanf(input_loadgame,"%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&load_p,&load_q,&load_p1,&load_q1,&load_p2,&load_q2,&load_p3,&load_q3,&load_p4,&load_q4,&load_health_x,&load_health_y,&load_speed,&load_score,&load_life,&load_bullet,&load_reload,&load_health,&load_health_flag,&load_max,&load_levelup,&load_mode,&load_rt,&load_bubble[0],&load_bubble[1],&load_bubble[2],&load_bubble[3],&load_bubble[4]);
	                fclose(input_loadgame);
					/////value assaign
	                p=load_p,q=load_q;
					p1=load_p1,q1=load_q1;
					p2=load_p2,q2=load_q2;
					p3=load_p3,q3=load_q3;
					p4=load_p4,q4=load_q4;
					health_x=load_health_x,health_y=load_health_y;
					speed=load_speed;
					score=load_score;
					life=load_life;
					bullet=load_bullet;
					reload=load_reload;
					health=load_health;
					health_flag=load_health_flag;
					max=load_max;
					levelup=load_levelup;
				
}
void declaration()
{
	             p=rand()%1024,q=(-50)*((rand()%9));
                 p1=rand()%1024,q1=(-50)*((rand()%9));
                 p2=rand()%1024,q2=(-100)*((rand()%9));
                 p3=rand()%1024,q3=(-100)*((rand()%9));
                 p4=rand()%1024,q4=(-50)*((rand()%9));
                 score=0;
				 bubble[0]=1;
				 bubble[1]=1;
				 bubble[2]=1;
				 bubble[3]=1;
				 bubble[4]=1;
                 life=10;//life counting variable
                 bullet=6;//bullet counting variable
                 reload=0;
				 health_x=rand()%980,health_y=820;
                 health=1;//image visibility
                 health_flag=0;//score trigar
                 max=0;
				 speed=5;
                 levelup=0;
                 mode=0;
				 rt=0;
			     menu=3;

}
/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */
void iPassiveMouseMove(int mx, int my)
{
	//place your codes here
	mposx = mx;
	mposy = my;
}
/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		if(menu==7&&((mx >= 279 && mx <= 791) && (my >= 142 && my <= 172)) && mode == 0)
		{
			mode = 1;
		}
		if(menu==3&&score==40)
		{
			speed=speed_hard;
			levelup=1;
		}
		
		 if(menu==2&&(mx>=425&&mx<=595)&&(my>=470&&my<=510))
		{
			declaration();
		}

		else if(menu==2&&(mx>=425&&mx<=595)&&(my>=410&&my<=450))
		{
			///load game
			load_game();
			menu=3;

		}
		else if(menu==2&&(mx>=425&&mx<=595)&&(my>=350&&my<=391))
		{
			menu=5;
		}
		else if(menu==5&&(mx>=563&&mx<=963)&&(my>=271&&my<=331))
		{
			declaration();
			speed=speed_normal;
			menu=3;
		}
		else if(menu==5&&(mx>=377&&mx<=647)&&(my>=155&&my<=215))
		{
			declaration();
			speed=speed_hard;
			menu=3;
		}

		else if(menu==2&&(mx>=423&&mx<=595)&&(my>=230&&my<=270))
		{
		     ///////instruction page
			menu=11;
		}
		
		else if(menu==2&&(mx>=425&&mx<=595)&&(my>=170&&my<=210))
		{
		
			exit(0);
		}
		if(bullet>0&&menu==3)
		{
           bullet--;
		}
		if(bullet!=0){
		//game control if else part
		///bubble 0
		if(menu==3&&bubble[0]==1&&(mx>=p-15&&mx<=p+15)&&(my>=q-20&&my<=q+20)&&(q<=700))
		{
			bubble[0]=0;
			score++;
			p=rand()%1024;
			q=(-50)*((rand()%9));
			bubble[0]=1;
		}
		//bubble 1
		if(menu==3&&bubble[1]==1&&(mx>=p1-15&&mx<=p1+15)&&(my>=q1-20&&my<=q1+20)&&(q1<=700))
		{
			bubble[1]=0;
			score++;
			p1=rand()%1024;
			q1=(-50)*((rand()%9));
			bubble[1]=1;
		}
		//bubble 2
		if(menu==3&&bubble[2]==1&&(mx>=p2-15&&mx<=p2+15)&&(my>=q2-20&&my<=q2+20)&&(q2<=700))
		{
			bubble[2]=0;
			score++;
			p2=rand()%1024;
			q2=(-100)*((rand()%9));
			bubble[2]=1;
		}
		//bubble 3
		if(menu==3&&bubble[3]==1&&(mx>=p3-15&&mx<=p3+15)&&(my>=q3-20&&my<=q3+20)&&(q3<=700))
		{
			bubble[3]=0;
			score++;
			p3=rand()%1024;
			q3=(-100)*((rand()%9));
			bubble[3]=1;
		}
		//bubble 4
		if(menu==3&&bubble[4]==1&&(mx>=p4-15&&mx<=p4+15)&&(my>=q4-20&&my<=q4+20)&&(q4<=700))
		{
			bubble[4]=0;
			score++;

			p4=rand()%1024;
			q4=(-50)*((rand()%9));
			bubble[4]=1;
		}

		if(menu==3&&health==1&&(mx>=health_x&&mx<=health_x+64)&&(my>=health_y&&my<=health_y+64))
		{
			health=0;
			life+=5;
			score++,
			health_flag=0;
			health_y=820;
		    health_x=rand()%980;
		    health=1;
		}
		}
		if(menu==2&&(mx>=425&&mx<=535)&&(my>=291&&my<=335))
		{
			menu=6;
		}

		if(menu==9)
		{
			if((mx>=449&&mx<=596)&&(my>=259&&my<=281))
			{
                 menu=2;
				
			}
			else if((mx>=452&&mx<=601)&&(my>=205&&my<=231))
			{
                 ///load game
				load_game();
				menu=3;
			    iResumeTimer(0);
		        iResumeTimer(1);
		        iResumeTimer(2);
		        iResumeTimer(3);
		        iResumeTimer(4);
		        iResumeTimer(5);
		        iResumeTimer(6);
			}
			else if((mx>=499&&mx<=550)&&(my>=158&&my<=181))
			{
             
				 exit(0);
			}
		}
		  if(menu==10)
		  {
			if((mx>=808&&mx<=923)&&(my>=522&&my<=553))
			{
				///resume
				 menu=3;
		        iResumeTimer(0);
		        iResumeTimer(1);
		        iResumeTimer(2);
		        iResumeTimer(3);
		        iResumeTimer(4);
		        iResumeTimer(5);
		        iResumeTimer(6);
			}

			else if((mx>=810&&mx<=913)&&(my>=457&&my<=487))
			{
				////restart
				declaration();
				iResumeTimer(0);
		        iResumeTimer(1);
		        iResumeTimer(2);
		        iResumeTimer(3);
		        iResumeTimer(4);
		        iResumeTimer(5);
		        iResumeTimer(6);

			}

			else if((mx>=828&&mx<=895)&&(my>=389&&my<=417))
			{
				////saving game
				save_game();

			}

			else if((mx>=828&&mx<=896)&&(my>=324&&my<=353))
			{
				///loadgame
				load_game();
				menu=3;
				iResumeTimer(0);
		        iResumeTimer(1);
		        iResumeTimer(2);
		        iResumeTimer(3);
		        iResumeTimer(4);
		        iResumeTimer(5);
		        iResumeTimer(6);
			}

			else if((mx>=792&&mx<=946)&&(my>=256&&my<=282))
			{
				///main menu
				menu=2;
				iResumeTimer(0);
		        iResumeTimer(1);
		        iResumeTimer(2);
		        iResumeTimer(3);
		        iResumeTimer(4);
		        iResumeTimer(5);
		        iResumeTimer(6);

			}

			else if((mx>=830&&mx<=888)&&(my>=192&&my<=222))
			{
				
				exit(0);
			}
		
         }

		 
	 }

	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here

		if(menu==3)bullet=6;
		
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	
	int i;
	if(menu==3)
	{
		if(key=='r')
		{
			bullet=6;
		}
		if(bullet>0&&key=='\r')
		{
           bullet--;
		}
		if(bullet!=0){
		//game control if else part
		///bubble 0
		if(menu==3&&bubble[0]==1&&(mposx>=p-15&&mposx<=p+15)&&(mposy>=q-20&&mposy<=q+20)&&(q<=700))
		{
			bubble[0]=0;
			score++;
			p=rand()%1024;
			q=(-50)*((rand()%9));
			bubble[0]=1;
		}
		//bubble 1
		if(key=='\r'&&bubble[1]==1&&(mposx>=p1-15&&mposx<=p1+15)&&(mposy>=q1-20&&mposy<=q1+20)&&(q1<=700))
		{
			bubble[1]=0;
			score++;

			p1=rand()%1024;
			q1=(-50)*((rand()%9));
			bubble[1]=1;
		}
		//bubble 2
		if(key=='\r'&&bubble[2]==1&&(mposx>=p2-15&&mposx<=p2+15)&&(mposy>=q2-20&&mposy<=q2+20)&&(q2<=700))
		{
			bubble[2]=0;
			score++;
			p2=rand()%1024;
			q2=(-100)*((rand()%9));
			bubble[2]=1;
		}
		//bubble 3
		if(key=='\r'&&bubble[3]==1&&(mposx>=p3-15&&mposx<=p3+15)&&(mposy>=q3-20&&mposy<=q3+20)&&(q3<=700))
		{
			bubble[3]=0;
			score++;
			p3=rand()%1024;
			q3=(-100)*((rand()%9));
			bubble[3]=1;
		}
		//bubble 4
		if(key=='\r'&&bubble[4]==1&&(mposx>=p4-15&&mposx<=p4+15)&&(mposy>=q4-20&&mposy<=q4+20)&&(q4<=700))
		{
			bubble[4]=0;
			score++;
			p4=rand()%1024;
			q4=(-50)*((rand()%9));
			bubble[4]=1;
		}

		if(key=='\r'&&health==1&&(mposx>=health_x&&mposx<=health_x+64)&&(mposy>=health_y&&mposy<=health_y+64))
		{
			health=0;
			life+=5;
			score++,
			health_flag=0;
			health_y=820;
		    health_x=rand()%980;
		    health=1;
		}
		}

	}

	if(menu==7&&mode == 1)
	{
		if(key == '\r')
		{
			mode = 0;
			strcpy(str1, str);
			for(i=0;i<len;i++)
				str[i]=0;
			len = 0;
			data_highscore[4].highscore_txt=score;
	        strcpy(data_highscore[4].txthighscore,str1);
			sort(data_highscore,5);
			menu=8;
		}
		else if(key=='\b')
		{
			if(len!=0)len--;
			str[len] = 0 ;
		}
		else
		{
			if(len<10)
			{
			str[len] = key;
			 len++;
		   	 str[len] = '\0' ;
			}
		}
	
	     menu7();
	}
		
	
	//place your codes for other keys here
	if((menu==5||menu==6||menu==11)&&key == '\b')
	{
		//do something with 'x'
		menu=2;
	}
	

}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{
	if(menu==3&&key==GLUT_KEY_LEFT)
	{
		if(mposx>10)
		{
		   mposx=mposx-20;
		}
	}
	
	if(menu==3&&key==GLUT_KEY_RIGHT)
	{
		if(mposx<=1000)
		{
		   mposx=mposx+20;
		}
	}
	if(menu==3&&key==GLUT_KEY_DOWN)
	{
		if(mposy>10)
		{
		   mposy=mposy-20;
		}
	}
	
	if(menu==3&&key==GLUT_KEY_UP)
	{
		if(mposy<690)
		{
		   mposy=mposy+20;
		}
	}
	
	if(menu==3&&key == GLUT_KEY_END)
	{	
		iPauseTimer(0);
		iPauseTimer(1);
		iPauseTimer(2);
		iPauseTimer(3);
		iPauseTimer(4);
		iPauseTimer(5);
		iPauseTimer(6);
		menu=10;
	}
	else if(menu==10&&key == GLUT_KEY_END)
	{
		menu=3;
		iResumeTimer(0);
		iResumeTimer(1);
		iResumeTimer(2);
		iResumeTimer(3);
		iResumeTimer(4);
		iResumeTimer(5);
		iResumeTimer(6);
	}
	
}
	
	//place your codes for other keys here

void bubble0move()
{
	if(menu==3&&life==0)menu=4;
	if(menu==3&&bubble[0]==1)
	{
	if(q>768)
	{
		q=(-50)*((rand()%9));
		p=rand()%1024;
	}
	else if(q<=768)
	{
		q+=speed;
	}
	}
	if(menu==3&&bubble[0]==1&&(q-20==700))
    	{
		life--;
	    }

}

void bubble1move()
{
	if(menu==3&&life==0)menu=4;
	if(menu==3&&bubble[1]==1)
	{
	if(q1>768)
	{
		q1=(-50)*((rand()%9));
		p1=rand()%1024;
	}
	else if(q1<=768)
	{
		q1+=speed;
	}
	}
	if(menu==3&&bubble[1]==1&&(q1-20==700))
    	{
		life--;
	    }

}

void bubble2move()
{
	if(menu==3&&life==0)menu=4;
	if(menu==3&&bubble[2]==1)
	{
	if(q2>768)
	{
		q2=(-100)*((rand()%9));
		p2=rand()%1024;
	}
	else if(q2<=768)
	{
		q2+=speed;
	}
	}
	if(menu==3&&bubble[2]==1&&(q2-20==700))
    	{
		life--;
	    }

}

void bubble3move()
{
	if(menu==3&&life==0)menu=4;
	if(menu==3&&bubble[3]==1)
	{
	if(q3>768)
	{
		q3=(-100)*((rand()%9));
		p3=rand()%1024;
	}
	else if(q3<=768)
	{
		q3+=speed;
	}
	}
	if(menu==3&&bubble[3]==1&&(q3-20==700))
    	{
		life--;
	    }

}

void bubble4move()
{
	if(menu==3&&life==0)menu=4;
	if(menu==3&&bubble[4]==1)
	{
	if(q4>768)
	{
		q4=(-50)*((rand()%9));
		p4=rand()%1024;
	}
	else if(q4<=768)
	{
		q4+=speed;
	}
	}
	if(menu==3&&bubble[4]==1&&(q4-20==700))
    	{
		life--;
	    }

}

void lifemove()
{
	if(menu==3)
	{

	   if((score==10||score==20||score==40||score==60||score==80||score==100||score==120||score==140||score==160||score==200||score==300)&&score>max)
	   {
		   health_flag=1;
		   max=score;

	   }
	  if(health_flag==1)
       {

		   if(health_y!=0)
		   {
			   health_y-=20;
		   }
       }
	  if(health_y==0)
		{
		health_flag=0;
		health=1;
		health_y=820;
		health_x=rand()%980;


		}
	}
}



int main()
{
	//place your own initialization codes here.
    int z;
	FILE *input_highscore,*input_loadgame;
	input_highscore=fopen("highscore.txt","r");
	for(z=0;z<5;z++)
	{
	fscanf(input_highscore,"%s %d",&data_highscore[z].txthighscore,&data_highscore[z].highscore_txt);	
	}
	fclose(input_highscore);
	srand( (unsigned)(time(NULL) / 2 ) ) ;
	PlaySound(TEXT("main_music.wav"), NULL,SND_LOOP|SND_ASYNC );
	iSetTimer(30,bubble0move);
	iSetTimer(20,bubble1move);
	iSetTimer(30,bubble2move);
	iSetTimer(20,bubble3move);
	iSetTimer(30,bubble4move);
	iSetTimer(20,lifemove);
	iSetTimer(50,game_over);
	iSetTimer(100,intro_animation);
	iInitialize(1024, 768, "Bubble Shooter");
	return 0;
}
