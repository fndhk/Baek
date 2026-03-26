#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    double n, m, s = 0;
    
    cin >> n;
    
    vector<double> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
        
        
    }

    sort(a.begin(), a.begin() + n);
    m = a[n-1];

    for(int i = 0; i < n; i++){
        s = s + ((a[i]*100) / m);
    }

    cout << s / n;
}

