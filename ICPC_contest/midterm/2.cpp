#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int is_prime(int n, vector<int> primes){
    if (primes[n] == 1){
        return 1;
    }
    if (primes[n] == -1){
        return -1;
    }

    if (n<=3) {
        primes[n] = 1;
        return 1;
    }
    if (n%2 == 0 || n%3 == 0) {
        primes[n] = -1;
        return -1;
    }
    for (int i = 5; i*i<=n; i+=6){
        if (n%i == 0 || n%(i+2) == 0) {
            primes[n] = -1;
            return -1;
        }
    }
    primes[n] = 1;
    return 1;
}

bool min_common_divisor(int i, int j){
    if (i<j){
        for (int min = 2; min<=i; min++){
            if (i%min==0 && j%min==0){
                return true;        
            }
        }
    } else {
        for (int min = 2; min<=j; min++){
            if (i%min==0 && j%min==0){
                return true;        
            }
        }
    }
    return false;
}

int main(){
    int n, count = 0;
    vector<int> primes(pow(10, 5), 0);

    while (n!=0){
        cin >> n;
        count = n*n;
        if (n == 0){
            break;
        }

        // for (int i = 1; i<=n; i++){
        //     for (int k =2; k*i<=n; k++){
        //         if (i == 1){
        //             count--;
        //         } else {
        //             count -= 2;
        //         }
        //     }
        // }

        for (int i = 1; i<=n; i++){
            for (int j = 1; j<=n; j++){

                if (i == j && i>1){
                    continue;
                }
                if (primes[i] == 0) {
                    primes[i] = is_prime(i, primes);
                }
                if (primes[j] == 0) {
                    primes[j] = is_prime(j, primes);
                }
                if ((primes[i] == 1 || primes[j] == 1)&& (i==1 || j==1)){

                    if (i==1 || j==1){
                        
                    }
                    else if (min_common_divisor == false){
                        count++;
                    }
                }
            }
        }
        cout << count << endl;
        count = 0;
    }

    return 0;
}

// k*i, k*j не учитывается
// bool min_common_divisor(int i, int j){
//     if (i<j){
//         for (int min = 2; min<=i; min++){
//             if (i%min==0 && j%min==0){
//                 return true;        
//             }
//         }
//     } else {
//         for (int min = 2; min<=j; min++){
//             if (i%min==0 && j%min==0){
//                 return true;        
//             }
//         }
//     }
//     return false;
// }
