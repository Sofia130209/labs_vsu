#include <iostream>
#include <cmath>
#include <numbers>

using namespace std;

void task2_1() {
    int N, a;
    double R;

    cout<<"Enter N:";
    cin>>N;
    cout<<"Enter a:";
    cin>>a;

    R = a/(2*sin(numbers::pi/N));

    cout<<"Radius is: "<<R;
}