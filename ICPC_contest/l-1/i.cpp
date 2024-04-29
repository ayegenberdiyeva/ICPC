#include <iostream>
// #include <cmath> 

using namespace std;

// bool is_prime(int n){
//     if (n<=3) return true;
//     if (n%2 == 0 || n%3 == 0) return false;
//     for (int i = 5; i*i<n; i+=6){
//         if (n%i == 0 || n%(i+2) == 0) return false;
//     }
//     return true;
// }

// int main(){
//     int t, n;
//     cin >> t >> n;

//     int ans = t, n_const = n;

//     for (int i = 2; i<=n_const/2; i++){
//         if (is_prime(i) == true){
//             while (n%i == 0){
//                 n /= i;
//                 ans = pow(ans, i);
//             }
//         }
//     }

//     if (n == n_const){
//         ans = pow(ans, n);
//     }

//     cout << ans << endl;

//     return 0;
// }

long long power(long long n, long long t){
    if (t == 0) return 1;
    long long ans = 1;
    while (t>0){
        if (t%2 == 1){
            ans *= n;
        }
        n *= n;
        t/=2;
    }
    return ans;
}

int main(){
    long long n, t;
    cin >> n >> t;

    long long ans = power(n, t);

    cout << ans << endl;

    return 0;
}