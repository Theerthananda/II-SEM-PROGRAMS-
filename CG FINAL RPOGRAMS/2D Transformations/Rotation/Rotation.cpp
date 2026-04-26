#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <math.h>

#define PI 3.1416

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    int x1=200,y1=200, x2=250,y2=100, x3=300,y3=200;

    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);

    delay(2000);

    float angle = 45 * PI/180;

    int x1r = x1*cos(angle) - y1*sin(angle);
    int y1r = x1*sin(angle) + y1*cos(angle);

    int x2r = x2*cos(angle) - y2*sin(angle);
    int y2r = x2*sin(angle) + y2*cos(angle);

    int x3r = x3*cos(angle) - y3*sin(angle);
    int y3r = x3*sin(angle) + y3*cos(angle);

    line(x1r,y1r,x2r,y2r);
    line(x2r,y2r,x3r,y3r);
    line(x3r,y3r,x1r,y1r);

    getch();
    closegraph();
}
