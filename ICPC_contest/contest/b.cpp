#include <iostream>
#include <cmath>

using namespace std;

int min_candy_count(int n){
    int* candies = new int[n];
    double min = pow(10, 7);
    int sum = 0;
    for (int i = 0; i<n; i++){
        cin >> candies[i];
        if (candies[i]<min){
            min = candies[i];
        }
    }
    for (int i = 0; i<n; i++){
        sum += (candies[i]-min);
    }
    return sum;
}

int main(){
    int n, box_count;
    cin >> n;

    int* answers = new int[n];

    for (int i = 0; i<n; i++){
        cin >> box_count;
        answers[i] = min_candy_count(box_count);
    }

    for (int i = 0; i<n; i++){
        cout << answers[i] << endl;
    }

    return 0;
}