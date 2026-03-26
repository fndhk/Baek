#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, min = 0, max = 0;

    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++){
        
        if(a[max] <= a[i]){
            max = a[i];
            max = i;
        }
        if(a[min] >= a[i]){
            min = a[i];
            min = i;
        }
        
    }

    cout << a[min] << " " << a[max];
}
