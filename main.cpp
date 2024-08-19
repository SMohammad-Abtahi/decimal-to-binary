#include <iostream>


using namespace std;

void decimalToBinary(int n);


int main() {
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    cout << "Binary representation: ";
    decimalToBinary(n);
    return 0;
}
