#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[30] = {}, m = 1;

    for(int i = 0; i < 28; i++) cin >> a[i];
    
    sort(a, a + 28);

    for(int i = 1; i <= 30; i++){
        for(int n = 1; n <= 30; n++){
            if(m == a[n-1]){
                break;
            }
            else if(n == 30){
                cout << m << endl;
            }
        }
        m++;
    }
}