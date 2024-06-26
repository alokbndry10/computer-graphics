//dda for positive slope
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int main()
{
    printf("*********** project by Aalok Bhandari ********\n\n");
	int x1,x2,y1,y2,dx,dy;
	float xc,yc,m;
	int i,gd=DETECT,gm;
      printf("\t\t\t****** Positive slope DDA algorithm ******\n");
      initgraph(&gd,&gm,NULL);
	printf("Enter the value of points");
	scanf("%d%d",&x1,&y1);
	printf("Enter the value of finalpoints");
	scanf("%d%d",&x2, &y2);
	dx=abs(x2-x1);
	dy=abs(y2-y1);
	m=(float)dy/dx;
	if(dx>=dy)
	{
		xc=1;
		yc=m*xc;
		float x,y;
		x=x1;
		y=y1;
		for(i=x1;i<=x2;i++)
		{
		      putpixel(round(x),round(y),WHITE);
			delay(100);	
			x=x+xc;
			y=y+yc;
			
		}	
	}
	else
	{
	      yc=1;
	      xc=(1/m)*yc;
		float x,y;
		x=x1;
		y=y1;
		for(i=y1;i<=y2;i++)
		{
		      putpixel(round(x),round(y),WHITE);
			delay(100);	
			x=x+xc;
			y=y+yc;	
		}
	}
getch();
closegraph();
}
