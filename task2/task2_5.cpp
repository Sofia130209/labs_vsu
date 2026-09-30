#include <iostream>
#include <cmath>
#include <numbers>

using namespace std;

void task2_5() {
    int N, a;
    double r;

    cout<<"Enter N:";
    cin>>N;
    cout<<"Enter a:";
    cin>>a;

    r = a/(2*tan(numbers::pi/N));

    cout<<"Radius is: "<<r;
}