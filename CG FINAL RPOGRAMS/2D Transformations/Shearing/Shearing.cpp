#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    int x1=200,y1=200, x2=250,y2=100, x3=300,y3=200;

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    delay(2000);

    float shx = 1.5;

    int x1s = x1 + shx*y1;
    int x2s = x2 + shx*y2;
    int x3s = x3 + shx*y3;

    line(x1s,y1,x2s,y2);
    line(x2s,y2,x3s,y3);
    line(x3s,y3,x1s,y1);

    getch();
    closegraph();
}
