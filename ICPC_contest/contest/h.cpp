#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max_value = 0;

        for (int bit = 30; bit >= 0; bit--) {
            if ((k >> bit) & 1) {
                int current_bit = 1 << bit;

                // Выбираем индекс i, устанавливаем биты
                for (int i = 0; i < n && k > 0; i++) {
                    if ((a[i] & current_bit) == 0) {
                        a[i] |= current_bit;
                        k--;
                    }
                }
            }
        }

        for (int i = 0; i < n; i++) {
            max_value &= a[i];
        }

        cout << max_value << endl;
    }

    return 0;
}
