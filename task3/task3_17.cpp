#include <iostream>

using namespace std;

void task3_17() {
    int x1, y1, x2, y2, x3, y3, x4, y4;

    cout<<"x1 is:";
    cin>>x1;
    cout<<"y1 is:";
    cin>>y1;
    cout<<"x2 is:";
    cin>>x2;
    cout<<"y2 is:";
    cin>>y2;

    x3 = x2 - (y2 -y1);
    y3 = y2 + (x2 - x1);

    x4 = x1 - (y2 - y1);
    y4 = y1 + (x2 - x1);

    cout<<"C coords are ("<<x3<<", "<<y3<<")."<<'\n';
    cout<<"D coords are ("<<x4<<", "<<y4<<")."<<'\n';
}