#include <iostream>

using namespace std;

int max_possible(int n){
    int* candies = new int[n];
    for (int i = 0; i<n; i++){
        cin >> candies[i];
    }

    int i = 0, j = n-1, count = 2, temp_count = 0;
    int i_sum = candies[i], j_sum = candies[j];

    while (i<j){
        if (i_sum < j_sum){
            i++;
            i_sum += candies[i];
            count++;
            continue;
        }
        if (i_sum > j_sum){
            j--;
            j_sum += candies[j];
            count++;
            continue;
        }
        if (i_sum == j_sum){
            temp_count = count;
            count += 2;
            i++;
            j--;
            i_sum += candies[i];
            j_sum += candies[j];
            continue;
        }
    }
    return temp_count; 
}

int main(){
    int n, m;
    cin >> n;

    int* answers = new int[n];

    for (int i = 0; i<n; i++){
        cin >> m;
        answers[i] = max_possible(m);
    }

    for (int i = 0; i<n; i++){
        cout << answers[i] << endl;
    }

    return 0;
}