#include <iostream>
using namespace std;

int main() {
   int n;
   cin>>n;
int tich =1;
for(int i=1; i<=n; i++){
   tich *= i;
}
cout<<tich<<endl;
return 0;
}
