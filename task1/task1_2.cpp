#include <iostream>

using namespace std;

void task1_2() {
    int A2, B2, C2;
    cout << "Enter number: ";
    cin >> A2;
    B2 = A2 * A2;
    C2 = B2 * B2;
    C2 = C2 * C2;
    C2 = C2 * B2;
    cout << "Your number: " << C2;
}