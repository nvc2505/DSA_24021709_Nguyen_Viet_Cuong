#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
/* ĐỘ PHỨC TẠP:
 - Time: O(N) vì duyệt qua N phần tử đúng một lần để nhập và tính tổng.
 - Memory: O(N) để lưu trữ N phần tử trong bộ nhớ
 */
int mang[100];
int tong = 0;
for(int i=0;i<n;i++){
cin>>mang[i];
tong += mang[i];
}
cout<<tong<<endl;
return 0;
}
