#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void compare_and_erase(vector<int> &a_list, vector<int> &halfed_b, vector<int> &doubled_b, int n){
    for (auto it = a_list.begin(); it != a_list.end();){
        vector<int>::iterator it_halfe = find(halfed_b.begin(), halfed_b.end(), *it);
        vector<int>::iterator it_double = find(doubled_b.begin(), doubled_b.end(), *it);
        if (it_halfe != halfed_b.end()){
            it = a_list.erase(it);
            it_halfe = halfed_b.erase(it_halfe);
            it_halfe = doubled_b.erase(it_halfe);
        } else if (it_double != doubled_b.end()){
            it = a_list.erase(it);
            it_double = halfed_b.erase(it_double);
            it_double = doubled_b.erase(it_double); 
        }else {
            it++;
        }
    }
}

void double_elements(vector<int> &doubled_b){
    for (int i = 0; i<doubled_b.size(); i++){
        doubled_b[i] *= 2;
    }
}

void halfe_elements(vector<int> &halfed_b){
    for (int i = 0; i<halfed_b.size(); i++){
        halfed_b[i] /= 2;
    }
}

bool is_it_possible(vector<int> &a_list, vector<int> &b_list, int n){
    for (auto it = b_list.begin(); it != b_list.end();){
        vector<int>::iterator it_a = find(a_list.begin(), a_list.end(), *it);
        if (it_a != a_list.end()){
            it = b_list.erase(it);
            it_a = a_list.erase(it_a);
        } else {
            it++;
        }
    }
    
    // for (int i = 0; i<n; i++){
    //     cout << a_list[i] << " ";
    // }
    // for (int i = 0; i<n; i++){
    //     cout << b_list[i] << " ";
    // }
    
    // compare_and_erase(a_list, b_list, n);

    vector<int> doubled_b, halfed_b;

    for (int i = 0; i<b_list.size(); i++){
        doubled_b.push_back(b_list[i]);
        halfed_b.push_back(b_list[i]);
    }

    while (a_list.size()!=0){
        double_elements(doubled_b);
        halfe_elements(halfed_b);

        compare_and_erase(a_list, halfed_b, doubled_b, n);
    }

    return true;
}

int main(){
    int n, m, l;
    cin >> n;

    for (int i = 0; i<n; i++){
        cin >> m;
        vector<int> a_list, b_list;
        for (int j = 0; j<m; j++){
            cin >> l;
            a_list.push_back(l);
        }
        for (int j = 0; j<m; j++){
            cin >> l;
            b_list.push_back(l);
        }
        if (is_it_possible(a_list, b_list, m) == true){
            cout << "YES" << endl;
        }

    }

    return 0;
}