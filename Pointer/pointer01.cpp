#include <iostream>
using namespace std;

int squareNumber(int *num) {
    return (*num) * (*num);
}

int main() {
    int num = 10;
    int *numAddress = &num;

    int squareNum = squareNumber(numAddress);
    cout << "Square of num: " << squareNum << endl;
    cout << "num before change: " << num << endl;

    // Squaring the number again to demonstrate
    int changedNum = squareNumber(numAddress);
    cout << "Square of num (after change): " << changedNum << endl;

    return 0;
}
