#include<graphics.h>
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
using namespace std;
int main()
{
	int gd=0,gm,A;
	initgraph(&gd,&gm,(char*)"C:\\Dev-Cpp\\lib");


cout<<"\t \t \t 2D Transformations";
cout<<"\n 1. Translation";
cout<<"\n 2. Scaling";
cout<<"\n 3. Rotation";
cout<<"\n 4. Shearing";
cout<<"\n 5. Reflection";
cout<<"\n 6. Exit";
cout<<"\n Enter ur choice :";
cin>>A;



switch(A)
{
	case 1: {  
	      int tx=150,ty=150;
	      outtextxy(50,150,"Before translation");
	      rectangle(200,200,300,300);
	      delay(1000);
	      cleardevice();
	      
	      outtextxy(50,350,"After translation");
	      rectangle(200+tx,200+ty,300+tx,300+ty);
		     delay(1000);
	      cleardevice();
	      
		break;
	        }
	        case 2:{
	        	    int sx=3,sy=3;
	      outtextxy(50,150,"Before scaling");
	      rectangle(60,60,100,100);
	      delay(1000);
	      cleardevice();
	      
	      outtextxy(50,350,"After scaling");
	      rectangle(60*sx,60*sy,100*sx,100*sy);
		     delay(1500);
	      cleardevice();
	        	
				break;
			}
	case 3:{ int x1=150,y1=150,x2=250,y2=250;
	double R=22.0/(7*180.0), Ang, tx,ty;
	cout<<"\t \t Enter angle of rotation : ";
	cin>>Ang;
	Ang= Ang*R;
	
	tx=x1+((x2-x1)*cos(Ang)-(y2-y1)*sin(Ang));
	ty=y1+((x2-x1)*sin(Ang)+(y2-y1)*cos(Ang));
	
	outtextxy(50,110," before rotation");
	line(x1,y1,x2,y2);
	    delay(1000);
	      cleardevice();	
	
	outtextxy(50,110," after rotation");
	line(x1,y1,(int)tx,(int)ty);
	    delay(1000);
	     // cleardevice();
		
		break;
	}
	
	case 4:{
		int x1=100,y1=100,x2=100,y2=30,x3=170,y3=30,x4=170,y4=100,sh=5;
		line(x1,y1,x2,y2);
		line(x1,y1,x4,y4);
		line(x2,y2,x3,y3);
		line(x3,y3,x4,y4);		
		  delay(1000);
	      cleardevice();
			line(x1,y1,x2+sh*y2,y2);
		line(x1,y1,x4,y4);
		line(x2+sh*y2,y2,x3+sh*y3,y3);
		line(x3+sh*y3,y3,x4,y4);
		
		break;
	}
	
	case 5:
		{
			int x=50,y=150,x1=75,y1=125,x2=100,y2=150;
			outtextxy(20,50," Before Reflection");
			line(x,y,x1,y1);
			line(x,y,x2,y2);
			line(x1,y1,x2,y2);
			delay(1500);
	      cleardevice();
	      
	      outtextxy(20,50," After Reflection");
			line(x,-y+300,x1,-y1+300);
			line(x,-y+300,x2,-y2+300);
			line(x1,-y1+300,x2,-y2+300);
			delay(1500);
	      cleardevice();
	      
			
		}
	case 6: {
		 closegraph();
   
	}
		
}


	getch();
	return 0;
}
