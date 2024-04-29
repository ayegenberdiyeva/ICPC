#include <iostream>
#include <string>

using namespace std;

long long how_many_pairs(int n){
    string* pair = new string[n];
    long long ans = 0;

    for (int i = 0; i<n; i++){
        cin >> pair[i];
    }

    for (int i = 0; i<n-1; i++){
        for (int j = i+1; j<n; j++){
            if (pair[i] == pair[j]){
                continue;
            }
            if (pair[i][0] == pair[j][0]){
                ans++;
            }
            if (pair[i][1] == pair[j][1]){
                ans++;
            }
        }
    }
    
    return ans;
}

int main(){
    int n, m;
    cin >> n;

    long long* answers = new long long[n];

    for (int i = 0; i<n; i++){
        cin >> m;
        answers[i] = how_many_pairs(m);
    }

    for (int i = 0; i<n; i++){
        cout << answers[i] << endl;
    }

    return 0;
}