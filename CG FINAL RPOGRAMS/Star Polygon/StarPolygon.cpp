#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    int points[] = {
        200,100,
        240,200,
        150,140,
        250,140,
        160,200,
        200,100
    };

    drawpoly(6, points);

    getch();
    closegraph();
    return 0;
}
