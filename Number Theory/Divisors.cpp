#include<bits/stdc++.h>
using namespace std;

vector<int> findDivisors(int n) {
    vector<int> divisors;

    for(int i=1; i*i<=n; i++) {
        if(i*i==n) divisors.push_back(i);
        else if (n % i == 0) {
            divisors.push_back(i);
            divisors.push_back(n/i);
        }
    }
    sort(divisors.begin(),divisors.end());
    return divisors;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    vector<int> divisors = findDivisors(num);

    cout << "Divisors of " << num << ": ";
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout<<endl;

    return 0;
}
