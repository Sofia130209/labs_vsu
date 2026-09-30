#include <iostream>

using namespace std;

void task1_4() {
    int A4, B4, C4;
    cout << "Enter number: ";
    cin >> A4;
    B4 = A4 * A4;
    C4 = B4 * A4;
    A4 = C4 * C4;
    A4 = A4 * A4;
    A4 = A4 * C4;
    cout << "Your number: " << A4;
}