#include <bits/stdc++.h>
using namespace std;

int fibonacciIterative(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }

    int prev = 0, curr = 1, next;
    for (int i = 2; i <= n; i++) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}

int fibonacciRecursive(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
    }
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int fib=fibonacciIterative(n);
    cout<<"Fibonacci number at position "<<n<<": "<<fib<<endl;

    return 0;
}
