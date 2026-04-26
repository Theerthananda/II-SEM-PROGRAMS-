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

    float sx=1.5, sy=1.5;

    line(x1*sx,y1*sy, x2*sx,y2*sy);
    line(x2*sx,y2*sy, x3*sx,y3*sy);
    line(x3*sx,y3*sy, x1*sx,y1*sy);

    getch();
    closegraph();
}
