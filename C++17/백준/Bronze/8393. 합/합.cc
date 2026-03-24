#include <iostream>
using namespace std;

int main(){
    int n, rs = 0;

    cin >> n;
    
    for(int i = 1; i <= n; i++) rs = rs + i;

    cout << rs;
}