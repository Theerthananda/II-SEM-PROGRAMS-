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

    // Scaling factors
    float sx = 1.5;
    float sy = 1.5;

    // Gap for spacing
    int gap = 120;

    // Apply scaling + spacing
    int nx1 = x1 * sx + gap;
    int ny1 = y1 * sy;

    int nx2 = x2 * sx + gap;
    int ny2 = y2 * sy;

    // Scaled cube
    setcolor(LIGHTGRAY);
    bar3d(nx1, ny1, nx2, ny2, depth, 1);

    getch();
    closegraph();
}
