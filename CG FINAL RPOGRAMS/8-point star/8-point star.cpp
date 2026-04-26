#include <graphics.h>
#include <conio.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    int cx = 250, cy = 250;   // center
    int r1 = 80;              // inner radius
    int r2 = 150;             // outer spike radius

    for (int i = 0; i < 8; i++) {
        float angle = i * 45 * M_PI / 180.0;
        float next = (i + 1) * 45 * M_PI / 180.0;
        float mid = angle + (22.5 * M_PI / 180.0);

        // Inner points
        int x1 = cx + r1 * cos(angle);
        int y1 = cy - r1 * sin(angle);

        int x2 = cx + r1 * cos(next);
        int y2 = cy - r1 * sin(next);

        // Outer spike
        int xo = cx + r2 * cos(mid);
        int yo = cy - r2 * sin(mid);

        // Draw petal shape
        line(x1, y1, xo, yo);
        line(xo, yo, x2, y2);

        // Draw spoke
        line(cx, cy, x1, y1);
    }

    // Close center spokes
    line(cx, cy, cx + r1, cy);


    getch();
    closegraph();
    return 0;
}
