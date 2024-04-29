#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int count = n;

    for (int i = 2; i<=n; i++){
        for (int j = 1; j*i<=n; j++){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}


// 1 1
// 1 2
// 1 3
// 1 4
// 2 2
// 2 4
// 3 3
// 4 4

// 1 1
// 1 2
// 1 3
// 1 4
// 1 5 
// 1 6
// 1 7
// 1 8
// 1 9
// 1 10
// 2 2
// 2 4
// 2 6
// 2 8
// 2 10
// 3 3
// 3 6
// 3 9
// 4 4
// 4 8
// 5 5
// 5 10
// 6 6
// 7 7
// 8 8
// 9 9 
// 10 10 