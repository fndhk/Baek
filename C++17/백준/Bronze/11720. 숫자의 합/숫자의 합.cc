#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n, rs = 0;
    vector<int> s;
    string input;

    cin >> n;

    cin >> input;

    for(char c : input){
        s.push_back(c - '0');
    }
    for(int i = 0; i < n; i++) rs += s[i];

    cout << rs;
}