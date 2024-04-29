#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n){
    if (n<=3) return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for (int i = 5; i*i<=n; i+=6){
        if (n%i == 0 || n%(i+2) == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    int n_const = n;

    for (int i = 2; i<=n_const/2; i++){
        int count = 0;
        if (n%i == 0 && is_prime(i)){
            while (n%i == 0){
                count++;
                n /= i;
            }
            if (count > 0){
                cout << i;
                if (count >1){
                    cout << "^" << count;
                }
                if (n>1){
                    cout << "*";
                }
            }
        }
    }

    if (n == n_const){
        cout << n << endl;
    }

    return 0;
}