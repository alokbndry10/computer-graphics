//2d transformation
#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
void translation(int x1,int y1, int x2, int y2 )
{
	int tx, ty;
	cout<<"Enter coordinates:";
      cin>>x1>>y1>>x2>>y2;
	cout<<"Enter translation point";
	cin>>tx>>ty;
      cout<<"Rectangle before translation"<<endl;
      setcolor(3);
      rectangle(x1,y1,x2,y2);
      setcolor(4);
      cout<<"Rectangle after translation"<<endl;
      rectangle(x1+tx,y1+ty,x2+tx,y2+ty);
      getch();
}
void rotation(int x1,int y1, int x2, int y2 )
{
      cout<<"Enter coordinates:";
      cin>>x1>>y1>>x2>>y2;
      double a;
      cout<<"Rectangle with rotation"<<endl;
      setcolor(3);
      rectangle(x1,y1,x2,y2);
      cout<<"Enter Angle of rotation:";
      cin>>a;
      a=(a*3.14)/180;
      long xr=x1+((x2-x1)*cos(a)-(y2-y1)*sin(a));
      long yr=y1+((x2-x1)*sin(a)+(y2-y1)*cos(a));
      setcolor(2);
      rectangle(x1,y1,xr,yr);
      getch();
}





void scaling(int x1,int y1, int x2, int y2 )
{
	 cout<<"Enter coordinates:";
       cin>>x1>>y1>>x2>>y2;
	 int x,y;
	 cout<<"Enter the scaling point:";
	 cin>>x>>y;
       cout<<"Before scaling"<<endl;
       setcolor(3);
       rectangle(x1,y1,x2,y2);
       cout<<"After scaling"<<endl;
       setcolor(10);
       rectangle(x1*x,y1*y,x2*x,y2*y);
       getch();
}
void reflection(int x1,int y1, int x2, int y2,int x3,int y3 )
{
	 cout<<"Enter coordinates :";
       cin>>x1>>y1>>x2>>y2>>x3>>y3;
       cout<<"triangle before reflection"<<endl;
       setcolor(3);
       line(x1,y1,x2,y2);
       line(x1,y1,x3,y3);
       line(x2,y2,x3,y3);
       cout<<"triangle after reflection"<<endl;
       setcolor(5);
       line(x1,-y1+500,x2,-y2+500);
       line(x1,-y1+500,x3,-y3+500);
       line(x2,-y2+500,x3,-y3+500);
       getch();
}
void shearing(int x1,int y1, int x2, int y2,int x3,int y3,int x4,int y4 )
{
	 int shx;
       cout<<"Enter coordinates :";
       cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	 cout<<"Enter the shearing point:";
	 cin>>shx;
       cout<<"Before shearing of rectangle"<<endl;
       setcolor(3);
       line(x1,y1,x2,y2);
       line(x1,y1,x3,y3);
       line(x3,y3,x4,y4);
       line(x2,y2,x4,y4);
       cout<<"After shearing of rectangle"<<endl;
       x1=x1+shx*y1;
       x2=x2+shx*y2;
       x3=x3+shx*y3;
       x4=x4+shx*y4;
       setcolor(13);
        line(x1,y1,x2,y2);
        line(x1,y1,x3,y3);
        line(x3,y3,x4,y4);
        line(x2,y2,x4,y4);
        getch();
}
int main()
{
        printf("*********** project by Aalok Bhandari ********\n\n");
        int gd=DETECT,gm,s,x1,y1,x2,y2,x3,y3,x4,y4;
        initgraph(&gd,&gm,(char*)"");
        cout<<"1.Translation\n2.Rotation\n3.Scaling\n4.Reflection\n5.Shearing      "<<endl;
        cout<<"Selection:";
        cin>>s;
        switch(s)
        {
            case 1:
            {   
                translation(x1,y1,x2,y2); 
                break;
            }
            case 2:
            {  
                rotation(x1,y1,x2,y2 );
                break;
            }
            case 3:
            {
                scaling(x1,y1,x2,y2 );
                break;
            }
            case 4:
            {
                 reflection(x1,y1,x2,y2,x3,y3 );
                 break;
            }
            case 5:
            {
                 shearing( x1,y1,x2,y2,x3,y3,x4,y4 );
            } 
            default:
            {
                 cout<<"Invalid Selection"<<endl;
                 break;
            }
        }
        closegraph();
        return 0;
}
