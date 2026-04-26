#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    int points[] = {
        250,100,
        350,150,
        350,250,
        250,300,
        150,250,
        150,150,
        250,100
    };

    drawpoly(7, points);

    getch();
    closegraph();
    return 0;
}
