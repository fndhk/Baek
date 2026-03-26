#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, m, i, j;
    
    cin >> n >> m;

    vector<int> a(n);

    for(int s = 0; s < n; s++) a[s] = s + 1;

    for(int s = 0; s < m; s++){
        cin >> i >> j;

        if (i <= j && i > 0 && j <= n){
            reverse(a.begin() + (i - 1), a.begin() + j);
        }
    }

    for(int s = 0; s < n; s++) cout << a[s] << " ";
}