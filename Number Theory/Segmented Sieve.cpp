#include<bits/stdc++.h>
using namespace std;

void simpleSieve(int limit, vector<int>& primes) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

void segmentedSieve(int L, int R) {
    int limit = sqrt(R) + 1;
    vector<int> primes;
    simpleSieve(limit, primes);

    vector<bool> isPrime(R - L + 1, true);

    for (int prime : primes) {
        int start = max(prime * prime, (L + prime - 1) / prime * prime);
        for (int j = start; j <= R; j += prime) {
            isPrime[j - L] = false;
        }
    }

    cout << "Prime numbers in range [" << L << ", " << R << "]: ";
    for (int i = L; i <= R; i++) {
        if (isPrime[i - L]) {
            cout << i << " ";
        }
    }
    cout<<endl;
}

int main() {
    int L, R;
    cout << "Enter the range [L, R]: ";
    cin >> L >> R;

    segmentedSieve(L, R);

    return 0;
}
