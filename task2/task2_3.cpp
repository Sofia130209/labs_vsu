#include <iostream>
#include <numbers>
#include <cmath>

using namespace std;

void task2_3() {
    const double Pi = numbers::pi;

    int C1, C2;
    double S;

    cout<<"First ring:";
    cin>>C1;
    cout<<"Second ring";
    cin>>C2;

    S=((C1*C1)-(C2*C2))/4*Pi;

    cout<<"Square is:"<<S;
}