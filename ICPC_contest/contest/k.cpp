#include <iostream>
#include <string>

using namespace std;

int main(){
    int t,n;
    cin >> t;

    long long* answers = new long long(t);

    for (int i = 0; i<t; i++){
        cin >> n;

        string str;
        int* list = new int(n);
        long long ans = 0;

        cin >> str;

        string str_init = str, str_temp = str;

        for (int j = 0; j<n; j++){
            cin >> list[j];
        }

        do{
            for (int j = 0; j<n; j++){
                str[j] = str_temp[list[j]-1];
            }
            str_temp = str;
            ans++;
        }
        while (str != str_init);

        answers[i] = ans;

    }

    for (int i = 0; i<t; i++){
        cout << answers[i] << endl;
    }

    return 0;
}