#include <iostream>
#include <vector>

using namespace std;

void permutation_helper(int list[], int l, int r, vector<int>: res, vectoir<int>: prefix){
    if (l == r){
        res =
    }
}

void permutation(int list[], int n){
    vector<int> res;
    vector<int> prefix;
    permutation_helper(list[], 0, list.size()-1, res[], prefix)
    for (int i = 0; i<res.size(); i++){
        cout << res[i] <<  " ";
        if ((i+1)%3 == 0){
            cout << endl;
        }
    }
}

int main(){
    int n;
    cin >> n;

    int list[n];

    for (int i = 0; i<n; i++){
        list[i] = i+1;
    }

    permutation(list[], n);

    return 0;
}