#include <iostream>
using namespace std;

/* ĐỘ PHỨC TẠP:
 - Time Complexity: O(N) vì có 2 vòng lặp chạy từ 0 đến N-1 (vòng 1 tính tổng, vòng 2 in kết quả).
 - Space/Memory Complexity: O(N) do cần mảng lưu trữ N phần tử để duyệt lại lần 2.
 */
int main() {
    int n;
    cin >> n;

    double mang[100];
    double tong = 0;

    for (int i = 0; i < n; i++) {
        cin >> mang[i];
        tong += mang[i];
    }

    double trungBinh = tong / n;

    for (int i = 0; i < n; i++) {
        if (mang[i] >= trungBinh) {
            cout << mang[i] << " ";
        }
    }

    return 0;
}
