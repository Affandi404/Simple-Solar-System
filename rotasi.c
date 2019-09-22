/*Mencoba membuat rotasi pelanet
*/
#include <stdio.h>
#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    int errorcode = graphresult();
    if(errorcode != grOk)
    {
        printf("Kode error",grapherrormsg(errorcode));
        printf("Press any key to halt");

        getch();
        exit(1);
    }
    float x, y, pi=2.0*asin(1.0);
    int midx = getmaxx()/2;
    int midy = getmaxy()/2;

    
    //setfillstyle(SOLID_FILL,getmaxcolor());
    //bar(0,0,midx,midy);
    
   //animasi
    int n=0;
    while(1)
    {
        n++;
        x = 100*cos(n*pi/40);
        y = 50*sin(n*pi/40);

        int i = midx + x;
        int j = midy + y;
        

             //bumi
        x = 200*cos(n*pi/55);
        y = 90*sin(n*pi/55);

        int a = midx + x;
        int b = midy + y;
        setfillstyle(SOLID_FILL,BLUE);
                
        fillellipse(a,b,18-5,18-5);
        ellipse(midx,midy,0,0,200,150-60);
        outtextxy(a,b,"Bumi");

         //venus
         x = 150*cos(n*pi/50);
        y = 70*sin(n*pi/50);

        int k = midx + x;
        int l = midy + y;
        setfillstyle(SOLID_FILL,RED);
                
        fillellipse(k,l,25-5,25-5);
        ellipse(midx,midy,0,0,150,100-30);
      
        //merkurius
        setfillstyle(SOLID_FILL,DARKGRAY);
        //gambar lingkaran
        fillellipse(i,j,20-10,20-10);
        //line(midx,midy,i,j);
        ellipse(midx,midy,0,0,100,50);
           //matahari
        setfillstyle(SOLID_FILL,YELLOW);
        fillellipse(midx,midy,40,40);
        
       //delay
        delay(100);
        


cleardevice();

    }
    return 0;
}
