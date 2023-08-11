#include<bits/stdc++.h>
using namespace std;

vector<int> primeFactorization(int n) {
    vector<int> factors;
    while(n%2==0){
        factors.push_back(2);
        n/=2;
    }
    int ans=sqrt(n);
    for(int i=3; i<=ans; i+=2) {
        while(n%i==0) {
            factors.push_back(i);
            n/=i;
        }
    }

    if (n>1) factors.push_back(n);

    return factors;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    vector<int> primeFactors = primeFactorization(num);

    cout << "Prime factorization of " << num << ": ";
    for (int factor : primeFactors) {
        cout << factor << " ";
    }
    cout<<endl;
    return 0;
}
