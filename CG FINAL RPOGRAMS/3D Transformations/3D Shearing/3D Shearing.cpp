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

    // Shearing factor
    float shx = 0.5;

    // Extra spacing (IMPORTANT)
    int gap = 120;

    // Apply shearing + spacing
    int sx1 = x1 + shx * y1 + gap;
    int sy1 = y1;

    int sx2 = x2 + shx * y2 + gap;
    int sy2 = y2;

    // Sheared cube (shifted away)
    setcolor(LIGHTGRAY);
    bar3d(sx1, sy1, sx2, sy2, depth, 1);

    getch();
    closegraph();
}
