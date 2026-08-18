#include <iostream>
#include <vector>
using namespace std;


int fibonacci(int n, vector<int> &dp) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    
    if (dp[n] != -1) return dp[n];


    dp[n] = fibonacci(n - 1, dp) + fibonacci(n - 2, dp);
    return dp[n];
}

int main() {
    int terms;
    cout << "Enter number of terms: ";
    cin >> terms;

    vector<int> dp(terms + 1, -1);  

    cout << "Fibonacci Series: ";
    for (int i = 0; i < terms; i++) {
        cout << fibonacci(i, dp) << " ";
    }
    cout << endl;

    return 0;
}
