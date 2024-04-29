#include <iostream>
#include <string>

using namespace std;

string operation(string str, int mid, int last){
    if (mid != str.size() && str[mid] != 'a'){
        int k = (int) str[mid];
        for (int i = 0; i<str.size(); i++){
            if (str[i] == str[mid] && i!=mid){
                str[i] = (char) k-1;
            }
        }
        str[mid] = (char)  k-1;
        return str;
    }
    if (last != str.size()){
        int k = (int) str[last];
        for (int i = 0; i<str.size(); i++){
            if (str[i] == str[last] && last != i){
                int k = (int) str[last];
                str[i] = (char) k-1;
            }
        }
        str[last] = (char) k-1;
        return str;
    }
}

int main(){
    int t, n, k;
    string str;
    cin >> t;

    for (int i = 0; i<t; i++){
        cin >> n >> k;
        cin >> str;

        int min = 50, mid = n;

        for (int j = 0; j<n; j++){
            int m = (int) str[j];
            if ( 110-m < min && 110-m > 0){
                min = 110-m;
                mid = j;
            }
        }
        
        int minn = 50, last = n;
        for (int j = 0; j<n; j++){
            int m = (int) str[j];
            if (122-m < minn && m>=110){
                minn = 122-m;
                last = j;
            }
        }

        for (int j = 0; j<k; j++){
            str = operation(str, mid, last);
        }

        cout << str << endl;
    }

    return 0;
}