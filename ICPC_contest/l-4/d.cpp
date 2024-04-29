#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long n, k; cin >> n >> k;

    vector<long long> pre(n+1, 0);

    while (k--){
        string type; cin >> type;
        if (type == "A"){
            long long l, r, d; cin >> l >> r >> d;
            pre[l] += d; pre[r+1] -= d;
        } else if (type == "Q"){
            long long i, result = 0; cin >> i;
            for (int j = 0; j <= i; j++){
                result += pre[j];
            }
            cout << result << endl;
        }
    }

    return 0;
}