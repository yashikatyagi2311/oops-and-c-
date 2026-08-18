#include <iostream>
using namespace std;

// Recursive function to calculate HCF (Euclidean Algorithm)
int hcf(int a, int b) {
    if (b == 0)   // base case
        return a;
    return hcf(b, a % b);  // recursive call
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "HCF of " << num1 << " and " << num2 << " = " << hcf(num1, num2) << endl;

    return 0;
}
