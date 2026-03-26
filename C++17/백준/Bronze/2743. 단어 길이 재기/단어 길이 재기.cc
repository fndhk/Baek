#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector<char> s;
    string line;
    int i = 0;

    getline(cin, line);

    for(char c : line){
        if(c != ' ') s.push_back(c);
        i++;
    }

    cout << i;
}