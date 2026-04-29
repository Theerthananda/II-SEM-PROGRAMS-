#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    int x = 150, y = 150;   // base position
    int depth = 40;

    float angle;
    float rad;

    // Original cube dimensions
    int w = 60;   // width
    int h = 60;   // height

    // Draw original cube
    outtextxy(x, y - 20, "Original");
    bar3d(x, y, x + w, y + h, depth, 1);

    // Input angle
    printf("Enter rotation angle: ");
    scanf("%f", &angle);

    rad = angle * M_PI / 180;

    // Apply rotation on dimensions (TRICK)
    int new_w = abs(w * cos(rad) - h * sin(rad));
    int new_h = abs(w * sin(rad) + h * cos(rad));

    // Shift position so it looks separate
    int offset = 200;

    // Draw rotated-looking cube
    outtextxy(x + offset, y - 20, "Rotated");
    bar3d(x + offset, y, x + offset + new_w, y + new_h, depth, 1);

    getch();
    closegraph();
    return 0;
}
