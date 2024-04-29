#include <iostream>
#include <string>

using namespace std;

bool is_it_possible(int n){
    string paint;
    cin >> paint;

    if (n == 1 && (paint[0] == 'B' || paint[0] == 'R')){
        return false;
    }

    int B_count = 0, R_count = 0;
    for (int i = 0; i<n; i++){
        if (paint[i] == 'W'){
            if (i!=0 && ((B_count > 0 && R_count == 0) || (B_count == 0 && R_count > 0))){
                return false;
            }
            B_count = 0;
            R_count = 0;
        } else if (paint[i] == 'B'){
            B_count++;
        } else if (paint[i] == 'R'){
            R_count++;
        }
    }

    if ((B_count > 0 && R_count == 0) || (B_count == 0 && R_count > 0)){
        return false;
    }

    return true;
}

int main(){
    int n, m;
    cin >> n;

    string* answers = new string[n];

    for (int i = 0; i<n ; i++){
        cin >> m;
        if (is_it_possible(m) == true){
            answers[i] = "YES";
        } else {
            answers[i] = "NO";
        }
    }

    for (int i = 0; i<n; i++){
        cout << answers[i] << endl;
    }

    return 0;
}