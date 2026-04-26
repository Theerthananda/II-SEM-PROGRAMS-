#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"C:\\Dev-Cpp\\MinGW32\\lib");

    // face
    circle(300,200,100);

    // eyes
    circle(260,170,10);
    circle(340,170,10);

    // nose
    line(300,180, 290,220);
    line(290,220, 310,220);
    line(310,220, 300,180);

    // mouth
    arc(300,240, 200,340, 40);

    getch();
    closegraph();
    return 0;
}
