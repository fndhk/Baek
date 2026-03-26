#include <iostream>
using namespace std;

int main(){
    int n, m, i, j, k; // n = 바구니 개수 / m = 공의 개수
    int a[100];

    for(int s = 0; s < 100; s++) a[s] = 0;

    cin >> n >> m;
    
    for(int s = 0; s < m; s++){
        cin >> i >> j >> k;

        for(;i <= j; i++) if(a[i-1] != k) a[i-1] = k;
    }
    for(int s = 0; s < n; s++)cout << a[s] << " ";
}