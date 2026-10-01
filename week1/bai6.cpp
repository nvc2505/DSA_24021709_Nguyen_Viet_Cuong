#include <iostream>
using namespace std;

void Xoa(int &n, int k, int a[]){
    for(int i = k; i < n-1; i++){
     a[i] = a[i+1];
    }
    n--;
}
void Chen(int &n, int m, int y, int a[]){
     for(int j =n; j>m; j--){
     a[j] = a[j-1];
     }
a[m]=y;
n++;
}
void InMang(int n, int a[]){
      for( int i = 0; i<n; i++){
          cout<< a[i]<<" ";
      }
      cout << endl;
}
int main(){

    int n, a[10000];
    cout << "Nhap so nguyen n:" << endl;
    cin >> n;
    cout << "Nhap cac phan tu cua mang:" << endl;
    for (int i=0;i<n;i++){
        cin >> a[i];
    }
int k;
cout<<" Vi tri can xoa: "<<endl; 
cin>>k;
Xoa(n,k,a);
 cout << "Mang sau khi xoa: " << endl;
InMang(n,a);
// Chen phan tu y vao vi tri m
int m,y;
cout << "Vi tri m can chen la: " << endl;;
cin >> m;
cout << "Nhap gia tri y can chen la :" << endl;
cin >> y;
Chen(n,m,y,a);
 cout << "Mang sau khi chen: " << endl;
InMang(n,a);
return 0;
}
// Phân tích độ phức tap:
// - Thời gian: O(n)
// - Bộ nhớ: O(1)

