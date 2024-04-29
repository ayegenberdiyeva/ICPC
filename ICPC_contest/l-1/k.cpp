#include <iostream>

using namespace std;

// long long power(long long n, long long t){
//     if (t == 0) return 1;
//     long long ans = 1;
//     while (t>0){
//         if (t%2 == 1){
//             ans *= n;
//         }
//         n *= n;
//         t/=2;
//     }
//     return ans;
// }

long long modular_exponentiation(int a, int b, int c){
    long long ans = 1;
    a %= c;
    while (b>0){
        if (b%2 == 1){
            ans = (ans*a)%c;
        }
        b /= 2;
        a = (a*a)%c;
    }
    return ans;
}

int main(){
    int a, b, c;


    while (cin >> a >> b >> c){
        long long ans = modular_exponentiation(a, b, c);
        cout << ans << endl;
    }

    return 0;
}

/*
7 mod 11 = 7
7^2 mod 11 = 5
7^3 mod 11 = 2
7^4 mod 11 = 3
*/