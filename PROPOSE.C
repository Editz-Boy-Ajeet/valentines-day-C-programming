#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
int x,x2,y=310, throw_x,throw_y;
int stick_man_open(int x);
void get_back();
int man_eye,girl_eye;
void fun();
void throw_rose();
void rain_cloud(int cloud);
int cloud=200;
int get_propsed(int x);
int do_propse(int x);
int stick_man(int x);

void border();
void rose(int x,int y);

void main ()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm, "c:\\tc\\BGI");
    fflush(stdin);
    fun();
    fflush(stdin);
    cleardevice();
    do_propse(x);
    border();
    rose(x+10,y-20);
    stick_girl(x2);
    delay(300);
    cleardevice();
    get_proposed(x2);
    border();
    stick_man(x);
    rose(x2-30,y-20);
    delay(300);
    throw_rose();
	throw_y=270;
	throw_x=265;
	for(;x2<=600;x2++)
    {
        get_back();
        rain_cloud(cloud);
        }

    getch();
}
void border()
{

   // rectangle(1,1,638,478);
    line(1,350,638,350); //460
}
int stick_man(int x)
{
    setcolor(YELLOW);
    circle (x,260,15);
    line(x,275,x,349);
    line(x-1,275,x-1,349);
    line(x+1,275,x+1,349);
    //left hand
    line(x,290,x-10,310);
    line(x,285,x-10,310);
    //right hand
    line(x,290,x+10,310);
    line(x,285,x+10,310);
    setcolor(WHITE);
    return 0;
}
int stick_man_open(int x)
{
    setcolor(YELLOW);
    circle (x,260,15);
    line(x,275,x,323);
    line(x-1,275,x-1,323);
    line(x+1,275,x+1,323);
    //left hand
    line(x,290,x-10,310);
    line(x,285,x-10,310);
    //right hand
    line(x,290,x+10,310);
    line(x,285,x+10,310);
    //left leg
    line(x,323,x-5,349);
    line(x-1,322,x-5,349);
    //right leg
    line(x,317,x+5,349);
    line(x-1,316,x+5,349);
    setcolor(WHITE);
    return 0;
}





int stick_girl(int x)
{
    circle (x,260,15);
    line(x,275,x,349);
    line(x-1,275,x-1,349);
    line(x+1,275,x+1,349);
    //left hand
    line(x,290,x-10,310);
    line(x,285,x-10,310);
    //right hand
    line(x,290,x+10,310);
    line(x,285,x+10,310);
    return 0;
}
int stick_girl_open(int x)
{
    circle (x,260,15);
    line(x,275,x,323);
    line(x-1,275,x-1,323);
    line(x+1,275,x+1,323);
    //left hand
    line(x,290,x-10,310);
    line(x,285,x-10,310);
    //right hand
    line(x,290,x+10,310);
    line(x,285,x+10,310);
    //left leg
    line(x,323,x-5,349);
    line(x-1,322,x-5,349);
    //right leg
    line(x,317,x+5,349);
    line(x-1,316,x+5,349);
    return 0;
}

void rose(int x,int y)
{

    setcolor(GREEN);
    line(x+8,y+5,x+12,y-15);
    line(x+12,y-15,x+20,y-18);
    line(x+12,y-15,x+7,y-20);
    line(x+7,y-20,x+20,y-18);
    setfillstyle(1,RED);
    floodfill(x+9,y-19,GREEN);
    setcolor(WHITE);
}
int do_propse(int x)
{
    setcolor(YELLOW);
    circle (x,260,15);
    line(x,275,x,349);
    line(x-1,275,x-1,349);
    line(x+1,275,x+1,349);
    //left hand
    line(x,290,x-10,310);
    line(x,285,x-10,310);
    //right hand
    line(x,290,x+20,290);
    line(x,288,x+20,290);
    outtextxy(x-120,240,"I LOVE YOU");
    setcolor(WHITE);
    delay(500);
    return 0;
}
int get_proposed(int x)
{
    circle (x,260,15);
    line(x,275,x,349);
    line(x-1,275,x-1,349);
    line(x+1,275,x+1,349);
    //left hand
    line(x,290,x-20,290);
    line(x,288,x-20,290);
    //right hand
    line(x,290,x+10,310);
    line(x,285,x+10,310);
    delay(300);
    return 0;
}


void fun(){

    for(x=-13,x2=600;x<=265 && !kbhit();x++ && --x2)
    {
    cleardevice();
    border();
    stick_man(x);
    rose(x,y);
    stick_girl(x2);
    delay(100);
    cleardevice();
    border();
    stick_man_open(x);
    rose(x,y);
    stick_girl_open(x2);
    delay(100);
    }
    
}

void rain_cloud(int cloud)
{
    int cloud1=70;
    arc(cloud,cloud1,65,330,35);
	arc(cloud+50,cloud1+20,145,315,25);
    arc(cloud+50,cloud1-15,2,185,40);
    arc(cloud+90,cloud1+40,145,305,25);
    arc(cloud+113,cloud1+20,245,125,46);
	setfillstyle(1,CYAN);
	floodfill(cloud+10,cloud1+10,WHITE);
	for(y=1;y<=60;y++)
	
	    outtextxy(rand()%300,rand()%350,".");
	    delay(100);
	    }
	    
void throw_rose()
{
    for( throw_x=x2, throw_y=y;( (throw_x >=x+45 )|| ( throw_y >=270)); )
	{
	cleardevice();
	outtextxy(x+120,240,"SORRY AJ33T");
	
	border();
	stick_man(x);
	stick_girl(x2);
	rain_cloud(cloud);
	rose(throw_x-30,throw_y);
    outtextxy(x+120,240,"SORRY AJ33T");
	if(throw_x >=x+45) throw_x-=1;
	if(throw_y >=270) throw_y-=1;
	delay(50);
	}
}
void get_back()
{
    
	{
	cleardevice();
	border();
	stick_man(x);
	stick_girl(x2);
	rose(throw_x+15,throw_y);

	if(x2/2==0 && throw_x <=285) throw_x++;
	if( throw_y<=350) throw_y++;
	delay(100);
	cleardevice();
	border();
	stick_man(x);
	stick_girl_open(x2);
	rose(throw_x+15,throw_y);
	if(throw_x <=x+50) throw_x++;
	if(throw_y <=350) throw_y++;
	delay(100);
	}
}