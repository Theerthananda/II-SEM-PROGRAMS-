#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    // outer circle
    circle(300,200,100);

    // center pentagon
    int p[] = {
        300,150,
        340,180,
        320,230,
        280,230,
        260,180,
        300,150
    };
    drawpoly(6, p);

    // connecting lines
    line(300,150, 300,100);
    line(340,180, 380,160);
    line(320,230, 350,280);
    line(280,230, 250,280);
    line(260,180, 220,160);

    getch();
    closegraph();
    return 0;
}
