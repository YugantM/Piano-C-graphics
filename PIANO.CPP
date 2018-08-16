#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
#include<process.h>
int mx,my;
inline void ready(){

	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:/TC/BGI");
	mx=getmaxx();
	my=getmaxy();
}

inline void stop(){

	closegraph();
}


void main(){


	ready();
	char ch;

	int t=0,a,b,m=45,d=45,flag=0,fq=0;
	setcolor(3);

	while(1>0)
	{
		setcolor(0);

		for(int i=1;i<=9;i++){
			int temp[]={mx/9*i,my/3,mx*(i+1)/9,2*my/3};
			if(i==flag)
			{
			setfillstyle(SOLID_FILL,WHITE);
			sound(fq);
			bar(temp[0]+2,temp[1],temp[2],temp[3]);
			delay(120);
			nosound();
			flag=0;
			}
			else
			{
			setfillstyle(SOLID_FILL,BLUE);
			bar(temp[0]+2,temp[1],temp[2],temp[3]);
			}
		}



		if(kbhit())
		{
			ch=getch();

			if(ch=='a')
			{
			flag=1;
			fq=240;
			}
			else if(ch=='s')
			{
			flag=2;
			fq=260;
			}
			else if(ch=='d')
			{
			flag=3;
			fq=290;
			}
			else if(ch=='f')
			{
			flag=4;
			fq=325;
			}
			else if(ch=='g')
			{
			flag=5;
			fq=360;
			}
			else if(ch=='h')
			{
			flag=6;
			fq=390;
			}			}
			else if(ch=='j')
			{
			flag=7;
			fq=440;
			}
			else if(ch=='k')
			{
			flag=8;
			fq=480;
			}
			else if(ch==32)
			stop();
		}


}