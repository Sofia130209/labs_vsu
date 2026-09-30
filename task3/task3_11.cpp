#include <iostream>

using namespace std;

void task3_11() {
    int x1, y1, x2, y2, x3, y3, x4, y4;

    cout<<"Enter x1 and y1 for A:";
    cin>>x1>>y1;
    cout<<"Enter x2 and y2 for B:";
    cin>>x2>>y2;
    cout<<"Enter x3 and y3 for C:";
    cin>>x3>>y3;

    x4=x1+x3-x2;
    y4=y1+y3-y2;

    cout<<"x4 and y4 for D are: "<<x4<<", "<<y4;
}