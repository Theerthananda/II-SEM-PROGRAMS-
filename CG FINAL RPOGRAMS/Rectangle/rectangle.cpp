#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT;
    int gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    // Draw rectangle
    rectangle(200, 150, 450, 350);

    getch();
    closegraph();
    return 0;
}
