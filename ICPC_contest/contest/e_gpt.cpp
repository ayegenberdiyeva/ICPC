#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t, n;
    string s;

    cin >> t;

    for (int l = 0; l < t; l++) {
        cin >> n;

        int count = 0;
        vector<string> strings(n);

        for (int i = 0; i < n; i++) {
            cin >> strings[i];
        }
        
        sort(strings.begin(), strings.end());

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int diff_count = 0;
                for (int k = 0; k < 2; k++) {
                    if (strings[i][k] != strings[j][k]) {
                        diff_count++;
                    }
                }
                if (diff_count == 1) {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
