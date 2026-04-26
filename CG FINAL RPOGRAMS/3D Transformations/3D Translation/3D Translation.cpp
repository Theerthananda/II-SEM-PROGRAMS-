#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main() {
    int gd=DETECT, gm;
    initgraph(&gd,&gm,(char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    int x[3]={200,250,300};
    int y[3]={200,100,200};
    int z[3]={0,0,0};

    for(int i=0;i<3;i++)
        line(x[i],y[i],x[(i+1)%3],y[(i+1)%3]);

    delay(2000);

    int xp[3], yp[3];
    int tx=50, ty=50, tz=50;

    for(int i=0;i<3;i++){
        x[i]+=tx; y[i]+=ty; z[i]+=tz;
        xp[i]=x[i]+z[i]*0.5;
        yp[i]=y[i]-z[i]*0.5;
    }

    for(int i=0;i<3;i++)
        line(xp[i],yp[i],xp[(i+1)%3],yp[(i+1)%3]);

    getch();
}
