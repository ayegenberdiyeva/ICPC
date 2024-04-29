#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, rate;
    cin >> n;

    vector<int> rating;

    for (int i=0; i<n; i++){
        cin >> rate;
        if (rate >= 1900){
            rating.push_back(1);
        } else if (rate >= 1600 && rate <= 1899){
            rating.push_back(2);
        } else if (rate >= 1400 && rate <= 1599){
            rating.push_back(3);
        } else if (rate <= 1399){
            rating.push_back(4);
        }
    }

    vector<int>::iterator it = rating.begin();

    while (it != rating.end()){
        cout << "Division " << *it << endl;
        it++;
    }

    return 0;
}