#include <iostream>
#include <vector>

using namespace std;

void operation(string str, vector<int> &pos){
    string temp = str;
    for (int i = 0; i<str.size(); i++){
        str[i] = temp[pos[i]-1];
    }
}

int main(){
    int t, n;
    cin >> t;

    for (int i = 0; i<t; i++){
        cin >> n;

        string str;
        cin >> str;

        vector<int> positions(n);
        for (int i = 0; i<n; i++){
            cin >> positions[i];
        }

        string temp_str = str;

        for ()

    }

    return 0;
}