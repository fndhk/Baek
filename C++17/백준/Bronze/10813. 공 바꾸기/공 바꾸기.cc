#include <iostream>
using namespace std;

int main(){
    int n, m, i, j, rs;
    int a[100];

    cin >> n >> m;

    for(int s = 0; s < n; s++) a[s] = s + 1;

    for(int s = 0; s < m; s++){
        cin >> i >> j;

        rs = a[i-1];
        a[i-1] = a[j-1];
        a[j-1] = rs;
    }

    for(int s = 0; s < n; s++) cout << a[s] << " ";
}