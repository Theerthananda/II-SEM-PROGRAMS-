#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    int tri[] = {
        200, 200,
        200, 350,
        300, 350,
        200, 200
    };

    drawpoly(4, tri);

    getch();
    closegraph();
    return 0;
}
