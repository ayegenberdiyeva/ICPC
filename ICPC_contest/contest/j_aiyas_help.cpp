// #include <iostream>
// #include <vector>
// #include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, n, temp;
    cin >> t;

    for (int i = 0; i<t; i++){
        cin >> n;
        vector<int> list_1;
        vector<int> list_2;

        for (int j = 0; j<n; j++){
            cin >> temp;
            while (temp%2 == 0){
                temp /= 2;
            }
            list_1.push_back(temp);
        }

        for (int j = 0; j<n; j++){
            cin >> temp;
            list_2.push_back(temp);
        }

        // n = list_1.size();

        //
        // for (int j = 0; j<n; j++){
        //     cin >> temp;
        //     for (int k = 0; k<list_1.size(); k++){
        //         if (list_1[k] == temp){
        //             list_1.erase(list_1.begin()+k);
        //             break;
        //         }
        //     }
        //     list_2.push_back(temp);
        // }

        bool is_it_possible = true;
        
        // while (list_1.size() != 0){
        //     for (int j = 0; j<list_1.size(); j++){
        //         list_2[j] /= 2;
        //         for (int k = 0; k<list_1.size(); k++){
        //             if (list_1[k] ==  list_2[j]){
        //                 list_1.erase(list_1.begin()+k);
        //                 list_2.erase(list_2.begin()+j);
        //                 j--;
        //                 break;
        //             }
        //         }
        //         if (list_2[i] != 1){
        //             continue;
        //         }
        //         if (list_2[i] == 1){
        //             is_it_possible = false;
        //             list_1.resize(0);
        //         }
        //     }
        // }

        while (list_2.size() != 0){
            int last_el = list_2[list_2.size()-1];
            if (count(list_1.begin(), list_1.end(), last_el) == 0){
                if (last_el == 1){
                    is_it_possible = false;
                    break;
                }
                list_2.erase(list_2.size()-1);
                list_2.push_back(last_el/2);
                continue;
            } else {
                list_1.erase(list_1.find(last_el));
                list_2.erase(list_2.size()-1);
                }
        }

        if (is_it_possible == true){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}