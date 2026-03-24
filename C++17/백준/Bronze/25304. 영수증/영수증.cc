#include <iostream>
using namespace std;

int main(){
    int a, b, x, n, rs = 0;

    cin >> x >> n;

    for(int i = 1; i <= n; i++){
        cin >> a >> b;
        rs += (a * b);
    }

    if(x == rs) cout << "Yes";
    else cout << "No";
}