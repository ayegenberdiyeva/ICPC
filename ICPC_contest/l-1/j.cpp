#include <iostream>

using namespace std;

string to_binary(int n){
    string repr = "";
    if (n == 0){
        return "0";
    }
    while (n>1){
        repr = (n%2 == 0? "S" : "SX") + repr;
        n /= 2;
    }

    return repr;
}

int main(){
    int n;
    cin >> n;

    cout << to_binary(n) << endl;

    return 0;
}