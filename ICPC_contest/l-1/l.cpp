#include <iostream>
#include <algorithm>

using namespace std;

// int gcd(int a, int b){
//     while (b!=0){
//         int temp = b;
//         b = b%a;
//         a = temp;
//     }
//     return a;
// }

int main(){
    int n = 1;

    while (n != 0){
        cin >> n;
        if (n == 0){
            break;
        }
        int ans = 0;
        for (int i = 1; i<n; i++){
            cout << i << "!" << endl;
            if (__gcd(n, i) == 1){
                cout << i << "/" << endl;
                ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}

/*
12
1 5 7 11 
*/