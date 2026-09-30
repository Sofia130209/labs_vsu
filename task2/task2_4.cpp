#include <iostream>
#include <cmath>

using namespace std;

void task2_4() {
    double p, S, a, b, c;

    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    cout<<"c:";
    cin>>c;

    p = (a+b+c)/2;
    S = sqrt(p*(p-a)*(p-b)*(p-c));

    cout<<"Square is: "<<S;
}