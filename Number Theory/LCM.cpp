#include<bits/stdc++.h>
using namespace std;

int GCD1(int A, int B) {
    if(B==0) return A;
    return GCD1(B, A%B);
}

int GCD2(int A, int B) {
    while(B!=0) {
        int remainder=A%B;
        A=B;
        B=remainder;
    }
    return A;
}

int LCM(int A, int B) {
    return (A * B) / GCD1(A, B);
}

int main(){
    int A,B;
    cin>>A>>B;
    cout<<LCM(A,B)<<endl;
    cout<<(A*B)/__gcd(A,B)<<endl;

    return 0;
}



