#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n){
    // if (n<=1) return false;
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

    while (n!=0){
        int a, b;
        cin >> a >> b;
        a = sqrt(a);
        b = sqrt(b);
        int ans = 0;
        
        for (int i = a; i<=b; i++){
            
        }

        cout << ans;

        n--;
    }

    return 0;
}
