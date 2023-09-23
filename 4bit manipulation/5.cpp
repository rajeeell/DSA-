#include <bits/stdc++.h>
using namespace std;

// Function to compute fast exponentiation (a^n) using bitwise operations
int fastexp(int a, int n){
    int ans = 1; // Initialize the result to 1
    while (n > 0) {
        int last_bit = (n & 1); // Get the last bit of n
        if (last_bit == 1) {
            ans = ans * a; // If the last bit is 1, multiply ans by a
        }
        a = a * a; // Square a
        n = n >> 1; // Right shift n by 1, effectively dividing it by 2
    }
    return ans; // Return the final result
}

int main() {
    cout << fastexp(2, 2) << endl; // Compute and print 2^2
    return 0;
}
