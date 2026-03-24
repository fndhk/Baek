#include <iostream>
using namespace std;

int main(){
    int a, b, c;

    cin >> a >> b >> c;

    b += c;

    if(b >= 60){
        c = b % 60;
        a += (b / 60);
    }
    else c = b;
    if(a > 23) a -= 24;

    cout << a << " " << c;
}