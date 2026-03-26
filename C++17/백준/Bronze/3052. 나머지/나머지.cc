#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[10], b;

    for(int i = 0; i < 10; i++){
        cin >> b;

        a[i] = b % 42;
    }

    sort(a,a + 10);
    b = 0;

    for(int i = 1; i <= 10; i++){
        if(a[i-1] != a[i]) b++;
    }

    cout << b;
}