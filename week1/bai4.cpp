 #include <iostream>
#include <algorithm> 

using namespace std;

/*ĐỘ PHỨC TẠP:
 - Time Complexity: O(log(min(|a|, |b|)))
 - Space/Memory Complexity: O(1)
*/

void rutGon(int &a, int &b) {
    int ucln = __gcd(a, b);
    a /= ucln;
    b /= ucln;
}

int main() {
    int a, b;
    cin >> a >> b;

    rutGon(a, b);

    cout << a << "/" << b << endl;
    return 0;
}
