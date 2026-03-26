#include <iostream>
using namespace std;

int main(){
    int a[9], max = 0;

    for(int i = 0; i < 9; i++) cin >> a[i];

    for(int i = 0; i < 9; i++){

        if(a[max] <= a[i]){
            max = i;
        }
    }
    
    cout << a[max] << " " << max + 1;
}