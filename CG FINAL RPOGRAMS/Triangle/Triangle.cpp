#include <graphics.h>

// Triangle
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    line(100, 200, 200, 200); // base
    line(100, 200, 150, 100); // left side
    line(200, 200, 150, 100); // right side

    getch();
    closegraph();
    return 0;
}
