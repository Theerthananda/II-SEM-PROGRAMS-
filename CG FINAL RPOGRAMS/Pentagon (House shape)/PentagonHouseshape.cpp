#include <graphics.h>

int main() {
    int gd = DETECT, gm;

    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    int points[] = {
        200,150,
        300,150,
        300,250,
        250,300,
        200,250,
        200,150
    };

    drawpoly(6, points);

    getch();
    closegraph();
    return 0;
}
