#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, count = 0;

    while (n!=0){
        cin >> n;
        count = n*n;
        if (n == 0){
            break;
        }

        for (int i = 1; i<=n; i++){
            for (int k =2; k*i<=n; k++){
                if (i == 1){
                    count--;
                } else {
                    count -= 2;
                }
            }
        }

        cout << count << endl;
        count = 0;
    }

    return 0;
}