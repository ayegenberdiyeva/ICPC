#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

string is_it_possible(int n){
    vector<int> a_str(n), b_str(n);

    int temp;

    for (int i = 0; i<n; i++){
        cin >> temp;
        a_str.push_back(temp);
    }
    for (int i = 0; i<n; i++){
        cin >> temp;
        b_str.push_back(temp);
    }

    for (int i = 0; i<n; i++){
        for (int j = i; j<n; j++){
            if (b_str[i] == a_str[j]){
                a_str.erase(a_str.begin()+j);
                b_str.erase(b_str.begin()+i);
                n--;
            }
        }
    }

    vector<int> doubled_b(n), halfed_b(n);
    
    while (b_str.size() != 0){
        for (int i = 0; i<n; i++){
            doubled_b[i] = b_str[i] * 2;
            halfed_b[i] = b_str[i] / 2;
        }

        for (int i = 0; i<n; i++){
            for (int j = i; j<n; j++){
                if (doubled_b[i] == a_str[j] || halfed_b[i] == a_str[j]){
                    a_str.erase(a_str.begin()+j);
                    b_str.erase(b_str.begin()+i);
                    doubled_b.erase(doubled_b.begin()+i);
                    halfed_b.erase(halfed_b.begin()+i);
                    n--;
                    i--;
                    break;
                }
            }
        }
    }

    return "YES";

}

int main(){
    int n, m;
    cin >> n;

    vector<string> answers;

    for (int i = 0; i<n; i++){
        cin >> m;
        answers.push_back(is_it_possible(m));
    }

    for (int i = 0; i<n; i++){
        cout << answers[i] << endl;
    }

    return 0;
}