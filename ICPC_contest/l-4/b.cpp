#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long n, k; cin >> n >> k;

    vector<long long> els(n, 0);

    vector<long long> pre(n+1, 0);

    while(k--){
        string type; long long i_l, x_r; cin >> type >> i_l >> x_r;
        if (type == "A"){
            els[i_l] = x_r;
            for (int i = 1; i<=n; i++) pre[i] = pre[i-1] + els[i-1];
        } else if (type == "Q"){
                cout << pre[x_r] - pre[i_l-1] << endl;
        }
    }

    return 0;
}