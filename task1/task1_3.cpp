#include <iostream>

using namespace std;

void task1_3() {
    int A3, B3, C3, D3;
    cout << "Enter number: ";
    cin >> A3;
    B3 = A3 * A3;
    C3 = B3 * B3;
    B3 = C3 * C3;
    B3 = B3 * C3;
    D3 = B3 * A3;
    cout << "Your number: " << D3;
}