#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, count = 0;
    cin >> n;

    int i = 2;

    do {
         if (n%i ==0){
            int j = n/i;
            if (i<j){
                count += 2;
            } else if (i==j){
                count++;   
            }
        }
        i++;
    } while (i<=sqrt(n));

    cout << count << endl;

    return 0;
}

/*
18 = 2, 3, 6, 9
    // for (int i = 2; i<n/4; i++){
    //     if (n%i ==0){
    //         int j = n/i;
    //         if (i<j){
    //             count += 2;
    //         } else if (i==j){
    //             count++;   
    //         }
    //     }
    // }
*/