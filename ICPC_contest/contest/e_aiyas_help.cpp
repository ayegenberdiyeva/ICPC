#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main(){
    int t, n;
    string s;

    cin >> t;

    for (int i = 0; i<t; i++){
        cin >> n;

        int count = 0;
        string* str = new string[n];
        map<char, int> first_letter;
        map<char, int> second_letter;
        map<string, int> pair_recurrence;

        for (int j = 0; j<n;j++){
            cin >> str[j];
        }

        for (int j = 0; j<n;j++){
            s = str[j];
            pair_recurrence[s]++;
            first_letter[s[0]]++;
            second_letter[s[1]]++;
            count += first_letter[s[0]] + second_letter[s[1]] - (2*(pair_recurrence[s]));
            // pair_recurrence[s]++;
        }

        cout << count << endl;

    }

    return 0;
}