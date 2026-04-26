#include <graphics.h>

// Rectangle / Square
int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    rectangle(100, 100, 200, 200);

    getch();
    closegraph();
    return 0;
}
