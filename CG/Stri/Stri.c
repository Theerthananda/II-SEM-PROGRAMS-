#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int t1[]={100,100,250,400,400,100,100,100};
    drawpoly(4,t1);

    int t2[]={150,200,350,200,250,100,150,200};
    drawpoly(4,t2);

    int t3[]={123,150,200,150,160,100,123,150};
    drawpoly(4,t3);


    int t4[]={300,150,360,100,380,150,300,150};
    drawpoly(4,t4);


    getch();
    closegraph();
    return 0;
}





