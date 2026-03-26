#include <iostream>
using namespace std;

int main(){
    int n, v[100], rs, rs2 = 0;

    cin >> n;

    for(int i = 0; i < n; i++) cin >> v[i];
    cin >> rs;

    for(int i = 0; i < n; i++){
        (v[i] == rs) ? rs2++ : 0;
    }
    cout << rs2;

}