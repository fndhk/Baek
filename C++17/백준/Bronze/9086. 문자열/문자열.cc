#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    vector<char> s;
    string line;
    int t, r = 0;

    cin >> t;

    cin.ignore();

    for(int i = 0; i < t; i++){
        getline(cin, line);

        for(char c : line){
            if(c != ' ') s.push_back(c);
            r++;
        }

        cout << s[0] << s[r-1] << endl;

        s.clear();

        r = 0;
    }
}