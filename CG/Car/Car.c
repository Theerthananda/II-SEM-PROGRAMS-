#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    rectangle(100,100,500,300);
    circle(200,100,20);
    circle(200,100,25);
    circle(200,100,15);

    circle(420,100,20);
    circle(420,100,15);
    circle(420,100,25);

    line(200,400,400,400);

    line(200,400,100,300);
    line(400,400,500,300);
    rectangle(200,320,400,380);


    getch();
    closegraph();
    return 0;
}






