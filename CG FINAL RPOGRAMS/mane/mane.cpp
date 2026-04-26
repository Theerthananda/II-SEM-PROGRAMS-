#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    // base rectangle
    rectangle(200,250,600,450);
    line(400,250,400,450);

    line(200,250,300,150);
    line(300,150,400,250);

    line(300,150,600,150);
    line(600,150,600,250);

    circle(300,220,20);

    rectangle(260,350,320,450);

    getch();
    closegraph();
    return 0;
}
