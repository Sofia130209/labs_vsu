#include <iostream>
#include <cmath>
#include <numbers>

using namespace std;

void task2_10() {
    int N, a;
    double S;

    cout<<"N is:";
    cin>>N;
    cout<<"a is:";
    cin>>a;

    S = (N*(a*a))/(4*tan(numbers::pi/N));

    cout<<"Square S is: "<<S;
}