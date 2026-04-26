//DDA Line Drawing Algorithm
#include <graphics.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    float dx, dy, steps, xinc, yinc, x, y;

    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    printf("Enter starting point (x1, y1): ");
    scanf("%d %d", &x1, &y1);

    printf("Enter ending point (x2, y2): ");
    scanf("%d %d", &x2, &y2);

    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);

    xinc = dx / steps;
    yinc = dy / steps;

    x = x1;
    y = y1;

    for (int i = 0; i <= steps; i++)
    {
    	delay(100);
        putpixel(round(x), round(y), WHITE);
        x = x + xinc;
        y = y + yinc;
    }

    getch();
    closegraph();

    return 0;
}
