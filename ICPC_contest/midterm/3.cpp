#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> powers_of_twos(25, 1);
    for (int i = 1; i < 25; i++) {
        powers_of_twos[i] = powers_of_twos[i-1]*2;
    }

    int i = 1, sum = 0;
    while (sum < n) {
        sum += powers_of_twos[i];
        i++;
    }
    i--; sum -= powers_of_twos[i]; n -= sum+1;

    vector<int> num;
    while (n > 0) {
        if(n%2 == 0) {
            num.push_back(1);
        } else {
            num.push_back(7);
        }
        n /= 2;
    }
    while (num.size() != i) {
        num.push_back(1);
    }
    for (int i = num.size() -1; i >=0; i--) {
        cout << num[i];
    }
    cout  << endl;
}