#include <iostream>
#include <cmath>

using namespace std;

void task2_8() {
    int S, d1;
    double P;

    cout<<"Square S is:";
    cin>>S;
    cout<<"Diagonal d1 is:";
    cin>>d1;

    P = 2*(sqrt((d1*d1)+((4*(S*S))/(d1*d1))));

    cout<<"Perimetr P is: "<<P;
}