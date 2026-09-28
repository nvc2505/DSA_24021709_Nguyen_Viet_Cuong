#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void SapXepTangDan(vector<int> &a, int n) {
    for (int i = 0; i < n - 1; i++) {
        bool daSapXep = true;
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                daSapXep = false;
            }
        }
        if (daSapXep) break;
    }
}

int main() {
    int n;
    if (!(cin >> n) || n <= 0) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    SapXepTangDan(a, n);

    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? "" : " ");
    }
    cout << endl;

    return 0;
}
