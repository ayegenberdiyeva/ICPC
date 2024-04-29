#include <iostream>
#include <string>

using namespace std;

void pattern(int n, int m){
    char matrix[n][m];

    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cin >> matrix[i][j];
        }
    }

    int y = n-1;

    for (int j = m-1; j>=0; j--){
        for (int i = n-1; i>=0; i--){
            if (i == n-1){
                if (matrix[i][j] == '.'){
                    y = i;
                } else{
                    y = i-1;
                }
                continue;
            } 
            if (matrix[i][j] == '.'){
                continue;
            }
            if (matrix[i][j] == '*'){
                matrix[i][j] = '.';
                matrix[y][j] = '*';
                y--;
                continue;
            }
            if (matrix[i][j] == 'o'){
                y = i-1;
                continue;
            }
        }
    }

    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

int main(){
    int l, m, n;
    cin >> l;

    for (int i = 0; i<l; i++){
        cin >> n >> m;
        // string matrix[n][m];

        // for (int i = 0; i<n; i++){
        //     for (int j = 0; j<m; j++){
        //         cin >> matrix[i][j];
        //     }
        // }
        pattern(n, m);
        // for (int i = 0; i<n; i++){
        //     for (int j = 0; j<m; j++){
        //         cout << matrix[i][j];
        //     }
        //     cout << endl;
        // }
    }

    return 0;
}