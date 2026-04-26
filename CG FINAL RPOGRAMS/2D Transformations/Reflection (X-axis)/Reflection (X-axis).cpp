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

    int mid = 250;

    line(x1,2*mid-y1, x2,2*mid-y2);
    line(x2,2*mid-y2, x3,2*mid-y3);
    line(x3,2*mid-y3, x1,2*mid-y1);

    getch();
    closegraph();
}
