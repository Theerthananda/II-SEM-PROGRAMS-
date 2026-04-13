#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    rectangle(100,100,400,300);
    line(100,300,150,400);
    line(150,400,200,300);
    line(150,400,400,400);
    line(400,400,400,300);
    line(200,300,200,100);
    rectangle(120,100,150,150);
    circle(150,350,10);


    getch();
    closegraph();
    return 0;
}





