#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


void solve() {
    int len;
    cin >> len;
    string s, temp = "";
    cin >> s;
    while (!s.empty()){
        int num = 0;
        if (s.back() == 'a' || s.back() == 'e') num = 2;
        else num = 3;
        while (num --){
            temp += s.back();
            s.pop_back();
        }
        temp.push_back('.');
    }
    temp.pop_back();
    reverse(temp.begin(), temp.end());
    cout << temp << '\n';
}

int main() {

    int T = 1;
    cin >> T;
    for (int Task = 1; Task <= T; Task++) {
        solve();
    }

    return 0;
}