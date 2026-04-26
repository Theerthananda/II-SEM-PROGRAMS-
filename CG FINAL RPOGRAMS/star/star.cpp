#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    int star[] = {
        300,100,
        340,200,
        450,200,
        360,260,
        400,360,
        300,300,
        200,360,
        240,260,
        150,200,
        260,200,
        300,100
    };

    drawpoly(11, star);

    getch();
    closegraph();
    return 0;
}
