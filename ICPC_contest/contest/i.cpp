#include <iostream>
#include <string>

using namespace std;

string operation(int n, string str){
    // int temp = 0;
    // int mid = 0;

    // for (int i = 0; i<n; i++){
    //     int k = (int) str[i];
    //     if (110-k > 0){
    //         mid = i;
    //     }
    // }

    for (int j = 0; j<n; j++){

        if (str[j] == 'a'){
            continue;
        }
        for (int i = j+1; i<n; i++){
            if (str[i] == str[j]){
                int k = (int) str[i] - 1;
                if (k == 96){
                    k = 122;
                }
                str[i] = (char)k;
            }
        } 
        temp = j;
        break;   
    }

    int k = (int) str[temp];
    str[temp] = (char)k-1;
    return str;
}

int main(){
    int n, m, k;
    string str;
    cin >> n;

    string* answers = new string[n];

    for (int i = 0; i<n; i++){
        cin >> m >> k;
        cin >> str;
        for (int j = 0; j<k; j++){
            answers[i] = operation(m, str);
            str = answers[i];
        }
    }

    for (int i = 0; i<n; i++){
        cout << answers[i] << endl;
    }

    return 0;
}