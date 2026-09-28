#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;

int mang[100];
int tong = 0;
for(int i=0;i<n;i++){
cin>>mang[i];
tong += mang[i];
}
cout<<tong<<endl;
return 0;
}
