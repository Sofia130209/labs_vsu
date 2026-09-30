#include <iostream>
#include <cmath>

using namespace std;

void task2_7() {
    int d1, a1;
    double S;

    cout<<"First side a1 is:";
    cin>>a1;
    cout<<"First diagonal d1 is:";
    cin>>d1;

    S = (d1*sqrt(4*(a1*a1)-(d1*d1)))/2;

    cout<<"Square S is: "<<S;
}