/*#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    // Original triangle (front face)
    int x[3] = {200, 250, 300};
    int y[3] = {200, 100, 200};

    int d = 40; // depth

    // ---- DRAW ORIGINAL 3D TRIANGLE ----
    setcolor(WHITE);

    // front
    for(int i=0;i<3;i++)
        line(x[i], y[i], x[(i+1)%3], y[(i+1)%3]);

    // back (shifted)
    for(int i=0;i<3;i++)
        line(x[i]+d, y[i]-d, x[(i+1)%3]+d, y[(i+1)%3]-d);

    // connect edges
    for(int i=0;i<3;i++)
        line(x[i], y[i], x[i]+d, y[i]-d);

    delay(2000);

    // ---- REFLECTION (about horizontal line y = 300) ----
    int xr[3], yr[3];

    setcolor(YELLOW);

    for(int i=0;i<3;i++){
        xr[i] = x[i];
        yr[i] = 300 + (300 - y[i]);   // reflection formula
    }

    // ---- DRAW REFLECTED 3D TRIANGLE ----

    // front
    for(int i=0;i<3;i++)
        line(xr[i], yr[i], xr[(i+1)%3], yr[(i+1)%3]);

    // back
    for(int i=0;i<3;i++)
        line(xr[i]+d, yr[i]-d, xr[(i+1)%3]+d, yr[(i+1)%3]-d);

    // connect edges
    for(int i=0;i<3;i++)
        line(xr[i], yr[i], xr[i]+d, yr[i]-d);

    getch();
    closegraph();
    return 0;
}*/


#include <graphics.h>
#include <conio.h>
#include <dos.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    // Original rectangle (cube)
    int x1 = 150, y1 = 150, x2 = 220, y2 = 220;
    int depth = 40;

    // Draw ORIGINAL cube
    setcolor(WHITE);
    outtextxy(x1, y1 - 20, (char*)"Original");
    bar3d(x1, y1, x2, y2, depth, 1);

    delay(2000);

    // ---- REFLECTION about horizontal line y = 300 ----
    int y_ref = 300;

    int ry1 = 2 * y_ref - y1;
    int ry2 = 2 * y_ref - y2;

    // Fix order (important!)
    int new_y1 = (ry1 < ry2) ? ry1 : ry2;
    int new_y2 = (ry1 > ry2) ? ry1 : ry2;

    // Draw REFLECTED cube
    setcolor(YELLOW);
    outtextxy(x1, new_y1 - 20, (char*)"Reflected");
    bar3d(x1, new_y1, x2, new_y2, depth, 1);

    getch();
    closegraph();
    return 0;
}

