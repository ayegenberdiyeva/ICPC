// #include <iostream>

// using namespace std;

// bool is_prime(int n){
//     if (n<=3) return true;
//     if (n%2 == 0 || n%3 == 0) return false;
//     for (int i = 5; i*i<=n; i+=6){
//         if (n%i == 0 || n%(i+2) == 0) return false;
//     }
//     return true;
// }

// int main(){
//     int n, m;

//     while (cin >> m){
//         cin >> n;
//         int ans = 0;

//         for (int i = m; i<=n; i++){
//             if(is_prime(i)){
//                 ans++;
//             }
//         }
//         cout << ans << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool is_prime(int n){
    if (n<=1) return false;
    if (n<=3) return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for (int i = 5; i*i<=n; i+=6){
        if (n%i == 0 || n%(i+2) == 0) return false;
    }
    return true;
}

// vector<bool> is_prime(int n){
//     vector<bool> primes(n+1, true);
//     primes[0] = primes[1] = false;
//     for (int p = 2; p<=n; p++){
//         if (primes[p] == true){
//             for (int i = p*p; i<=n; i+=p){
//                 primes[i] = false;
//             }
//         }
//     }
//     return primes;
// }

int main(){
    int m, n;
    const int max = pow(10,7);
    vector<int> primes(max, -1);

    while (cin >> m >> n){
        int ans = 0;
        for (int i = m; i <= n; i++){
            if (primes[i] == -1){
                if (is_prime(i)){
                primes[i] = 1;
                ans++;
                } else primes[i] = 0;
            } else if (primes[i] == 1) ans++;
        }
        cout << ans << endl << endl;
    }

    return 0;
}