#include <iostream>
#include <cmath>

using namespace std;

void task2_6() {
    int a, c;
    double b, S;

    cout<<"a is:";
    cin>>a;
    cout<<"c is:";
    cin>>c;

    b = sqrt((c*c)-(a*a));
    S = (a*b)/2;

    cout<<"Square is: "<<S;
}