#include <iostream>

using namespace std;

void task1_5() {
    int A5, B5, C5, D5, E5, F5, G5;
    cout << "Enter number: ";
    cin >> A5;
    B5 = A5 * A5;
    D5 = B5 * A5;
    C5 = D5 * D5;
    E5 = C5 * C5;
    F5 = C5 * E5;
    G5 = F5 * D5;
    cout << "Your number: " << G5;
}