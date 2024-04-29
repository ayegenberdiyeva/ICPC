#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int three_in_the_row(int n){
    vector<int> array;
    int m, count = 0;
    
    for (int i = 0; i<n; i++){
        cin >> m;
        array.push_back(m);
    }

    sort(array.begin(), array.end());

    for (int i = 1; i<n; i++){
        if (array[i] == array[i-1]){
            count++;
            if (count >= 2){
                return array[i];
            }
        } else {
            count = 0;
        }
    }
    return -1;
}

int main(){
    int n, num; 
    cin >> n;

    int* answers = new int[n];

    for (int i =0; i<n; i++){
        cin >> num;
        answers[i] = three_in_the_row(num); 
    }

    for (int i = 0; i<n; i++){
        cout << answers[i] << endl;
    }

    return 0;
}