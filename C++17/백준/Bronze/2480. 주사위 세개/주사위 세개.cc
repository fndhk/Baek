#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    cin >> a >> b >> c;

    if(a == b && a == c && b == c) cout << 10000 + (a * 1000);
    else if((a == b || a == c)) cout << 1000 + (a * 100);
    else if(b == a || b == c) cout << 1000 + (b * 100);
    else {
        a = (a > b) ? a : b;
        a = (a > c) ? a : c;
        cout << (a * 100);
    }
}