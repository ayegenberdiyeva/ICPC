#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; cin >> n;

    vector<int> powers_of_twos(25, 1);
    for (int i = 1; i<=25; i++){
        powers_of_twos[i] = powers_of_twos[i-1]*2;
    }

    int sum = 0, size = 1;
    while (sum < n) {
        sum += powers_of_twos[size];
        size++;
    }
    sum -= powers_of_twos[size-1];
    n-= sum+1;

    vector<int> num;
    while (n>0){
        if (n%2 != 0) num.push_back(7);
        else num.push_back(1);
        n/=2;
    }

    while (num.size()!= size-1){
        num.push_back(1);
    }

    // vector<int>::iterator it = num.end();

    // while (it!=num.begin()){
    //     cout << *it;
    // }

    for (int i = num.size() -1; i >=0; i--) {
        cout << num[i];
    }

    cout << endl;

    return  0;
}