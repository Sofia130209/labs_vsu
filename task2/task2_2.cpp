#include <iostream>
#include <cmath>

using namespace std;

void task2_2() {
    int P, a;
    double S;

    cout<<"Perimetr P is:";
    cin>>P;

    a=P/3;
    S=((a*a)*sqrt(3.0))/4;

    cout<<"Square is: "<<S;
}