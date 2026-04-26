#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <dos.h>

void plotpoints(int xc, int yc, int x, int y) {
    putpixel(xc + x, yc + y, WHITE);
    putpixel(xc - x, yc + y, WHITE);
    putpixel(xc + x, yc - y, WHITE);
    putpixel(xc - x, yc - y, WHITE);
    putpixel(xc + y, yc + x, WHITE);
    putpixel(xc - y, yc + x, WHITE);
    putpixel(xc + y, yc - x, WHITE);
    putpixel(xc - y, yc - x, WHITE);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    int xc, yc, r;

    printf("Enter center (xc yc): ");
    scanf("%d %d", &xc, &yc);

    printf("Enter radius: ");
    scanf("%d", &r);

    int x = 0;
    int y = r;
    int p = 1 - r;

    while(x <= y) {
        delay(20);
        plotpoints(xc, yc, x, y);

        x++;

        if(p < 0) {
            p = p + 2*x + 1;
        } else {
            y--;
            p = p + 2*x + 1 - 2*y;
        }
    }

    getch();
    closegraph();
    return 0;
}
