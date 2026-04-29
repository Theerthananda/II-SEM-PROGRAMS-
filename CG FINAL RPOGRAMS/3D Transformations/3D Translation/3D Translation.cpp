#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Dev-Cpp\\MinGW32\\lib");

    int x1 = 150, y1 = 150;
    int x2 = 220, y2 = 220;
    int depth = 30;

    // Original cube
    setcolor(WHITE);
    bar3d(x1, y1, x2, y2, depth, 1);

    // Translation values
    int tx = 100;
    int ty = 100;

    // Translated cube
    setcolor(LIGHTGRAY);
    bar3d(x1 + tx, y1 + ty, x2 + tx, y2 + ty, depth, 1);

    getch();
    closegraph();
}
