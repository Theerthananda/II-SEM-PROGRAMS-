//Bresenham
#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    int dx, dy, p, x, y;

    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    printf("Enter x1 y1 :");
    scanf("%d %d", &x1, &y1);

    printf("Enter x2 y2 :");
    scanf("%d %d", &x2, &y2);


    if (x1 > x2)
    {
        int temp = x1;
        x1 = x2;
        x2 = temp;

        temp = y1;
        y1 = y2;
        y2 = temp;
    }

    x = x1;
    y = y1;

    dx = abs(x2 - x1);
    dy = abs(y2 - y1);

    p = 2 * dy - dx;

    while (x <= x2)
    {
    	delay(100);
        putpixel(x, y, WHITE);

        if (p < 0)
        {
            p = p + 2 * dy;
        }
        else
        {
            y = y + 1;
            p = p + 2 * dy - 2 * dx;
        }

        x = x + 1;
    }

    getch();
    closegraph();

    return 0;
}
