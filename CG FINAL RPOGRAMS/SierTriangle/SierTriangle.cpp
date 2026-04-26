#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    // -------- MAIN TRIANGLE POINTS --------
    int x1 = 320, y1 = 50;
    int x2 = 120, y2 = 400;
    int x3 = 520, y3 = 400;

    // -------- MIDPOINTS (LEVEL 1) --------
    int m12x = (x1 + x2) / 2, m12y = (y1 + y2) / 2;
    int m13x = (x1 + x3) / 2, m13y = (y1 + y3) / 2;
    int m23x = (x2 + x3) / 2, m23y = (y2 + y3) / 2;

    // -------- LEVEL 2 MIDPOINTS --------
    // Top
    int t1x = (x1 + m12x) / 2, t1y = (y1 + m12y) / 2;
    int t2x = (x1 + m13x) / 2, t2y = (y1 + m13y) / 2;
    int t3x = (m12x + m13x) / 2, t3y = (m12y + m13y) / 2;

    // Left
    int l1x = (x2 + m12x) / 2; l1y = (y2 + m12y) / 2;
    int l2x = (x2 + m23x) / 2; l2y = (y2 + m23y) / 2;
    int l3x = (m12x + m23x) / 2;l3y = (m12y + m23y) / 2;

    // Right
    int r1x = (x3 + m13x) / 2, r1y = (y3 + m13y) / 2;
    int r2x = (x3 + m23x) / 2, r2y = (y3 + m23y) / 2;
    int r3x = (m13x + m23x) / 2, r3y = (m13y + m23y) / 2;

    // -------- OUTER TRIANGLE --------
    int outer[] = {
        x1, y1,
        x2, y2,
        x3, y3,
        x1, y1
    };
    drawpoly(4, outer);

    // -------- CENTER TRIANGLE --------
    int center[] = {
        m12x, m12y,
        m13x, m13y,
        m23x, m23y,
        m12x, m12y
    };
    drawpoly(4, center);

    // -------- TOP SMALL --------
    int top[] = {
        t1x, t1y,
        t2x, t2y,
        t3x, t3y,
        t1x, t1y
    };
    drawpoly(4, top);

    // -------- LEFT SMALL --------
    int left[] = {
        l1x, l1y,
        l2x, l2y,
        l3x, l3y,
        l1x, l1y
    };
    drawpoly(4, left);

    // -------- RIGHT SMALL --------
    int right[] = {
        r1x, r1y,
        r2x, r2y,
        r3x, r3y,
        r1x, r1y
    };
    drawpoly(4, right);

    getch();
    closegraph();
    return 0;
}
