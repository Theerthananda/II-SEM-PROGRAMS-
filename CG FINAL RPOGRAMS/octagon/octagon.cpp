#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    int points[] = {
        200,100,
        300,100,
        350,150,
        350,250,
        300,300,
        200,300,
        150,250,
        150,150,
        200,100
    };

    drawpoly(9, points);

    getch();
    closegraph();
    return 0;
}
