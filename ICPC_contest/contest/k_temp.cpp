#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

using namespace std;

int main(){
    int t, n;
    cin >> t;

    for (int i = 0; i<t; i++){
        cin >> n;

        string str;
        cin >> str;

        int temp;
        vector<int> num(n);
        for (int j = 0; j<n; j++){
            cin >> temp;
            num.push_back(temp);
        }

        string str_orig = str, str_temp = str;
        int ans = 0;

        unordered_set<string> checked;

        while (checked.find(str) == checked.end()){
            checked.insert(str);
            for (int k = 0; k<n; k++){
                str[k] = str_temp[num[k]-1];
            }
            str_temp = str;

            ans++;

            cout << str << "/" << ans << endl;
            if (str == str_orig){
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}