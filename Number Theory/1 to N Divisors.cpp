#include<bits/stdc++.h>
using namespace std;

void findAllDivisors(int n) {
    vector<vector<int>> divisors(n + 1);

    for(int i=1; i<=n; i++) {
        for (int j =i; j<=n; j+=i) {
            divisors[j].push_back(i);
        }
    }

    for(int i=1; i<=n; i++) {
        cout<<"Divisors of "<<i<<": ";
        for(int divisor : divisors[i]) {
            cout<<divisor<< " ";
        }
        cout<<endl;
    }
}

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    findAllDivisors(num);

    return 0;
}
