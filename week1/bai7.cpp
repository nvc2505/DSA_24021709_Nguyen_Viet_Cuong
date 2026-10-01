#include <iostream>
using namespace std;

int tinhTong(int n, int m, int **a) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += a[i][j];
        }
    }
    return sum;
}
void XoaDong(int &n, int m, int i, int **a) {
    for (int p = i; p < n - 1; p++) {
        for (int q = 0; q < m; q++) {
            a[p][q] = a[p + 1][q];
        }
    }
    n--;
}
void InMang(int n, int m, int **a) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n, m;
    cout << "Nhap kich thuoc N va M cua mang: ";
    cin >> n >> m;
    int temp = n;
    int **a = new int*[n];
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
    }

    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    cout << "Tong cac phan tu: " << tinhTong(n, m, a) << endl;
    int i;
    cout << "Nhap dong thu i can xoa : ";
    cin >> i;
    XoaDong(n, m, i, a);

    cout << "Mang sau khi xoa:\n";
    InMang(n, m, a);
    for (int idx = 0; idx < temp; idx++) {
        delete[] a[idx];
    }
    delete[] a;

    return 0;
}
// Phân tích độ phức tạp:
// - Thời gian:O(N*M)
// - Bộ nhớ: O(N*M)
