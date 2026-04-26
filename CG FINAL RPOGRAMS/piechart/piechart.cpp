#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    // Slice 1
    setfillstyle(SOLID_FILL, RED);
    pieslice(300,200, 0, 90, 100);

    // Slice 2
    setfillstyle(SOLID_FILL, GREEN);
    pieslice(300,200, 90, 180, 100);

    // Slice 3
    setfillstyle(SOLID_FILL, BLUE);
    pieslice(300,200, 180, 270, 100);

    // Slice 4
    setfillstyle(SOLID_FILL, YELLOW);
    pieslice(300,200, 270, 360, 100);

    getch();
    closegraph();
    return 0;
}
