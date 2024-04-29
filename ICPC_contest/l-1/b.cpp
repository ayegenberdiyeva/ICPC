#include <iostream>

using namespace std; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;

    while (t--){
        cin >> n;

        int sum = 0;
        bool is_it_possible = false;

        if (n%2 == 1){
            cout << n << " = " << n/2 << " + " << n/2 + 1 << endl; 
        } else {
            for (int i = 1; i<n/2; i++){
                int sum = i*(i+1)/2;
                if ((n-sum)%(i+1)==0){
                    cout << n << " = ";
                    int start = (n-sum)/(i+1);
                    for (int j = 0; j<=i; j++){
                        cout << start+j;
                        if (j<i){
                            cout << " + ";
                        }
                    }
                    cout << endl;
                    is_it_possible = true;
                    break;
                }
            }
        }

        if (!is_it_possible){
            cout << "IMPOSSIBLE" << endl;
        }

        // t--;
    }

    return 0;
}

// int main(){
//     int n, t;
//     cin >> t;

//     while ()

//     return 0;
// }