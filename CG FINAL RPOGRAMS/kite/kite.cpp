#include <graphics.h>

// Kite with Triangle Tail
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    int kite[] = {
        250,100,
        320,200,
        250,300,
        180,200,
        250,100
    };
    drawpoly(5, kite);

    line(250,100, 250,300);
    line(180,200, 320,200);

    int tri[] = {
        250,300,
        280,360,
        220,360,
        250,300
    };
    drawpoly(4, tri);

    getch();
    closegraph();
    return 0;
}
