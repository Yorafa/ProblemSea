#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,b, first = 1;
    cin >> n;
    string ss[5][11] = {{"XXX", "..X", "XXX", "XXX", "X.X", "XXX", "XXX", "XXX", "XXX", "XXX", "."}, {"X.X", "..X", "..X", "..X", "X.X","X..", "X..", "..X", "X.X","X.X","."}, {"X.X", "..X", "XXX", "XXX", "XXX", "XXX", "XXX", "..X", "XXX", "XXX", "."}, {"X.X", "..X", "X..", "..X", "..X", "..X", "X.X", "..X", "X.X", "..X", "."}, {"XXX", "..X", "XXX", "XXX", "..X", "XXX", "XXX", "..X", "XXX", "XXX", "."}};
    string num;
    cin >> num;
    for (auto c:num){
        b = c - '0';
        if (first-- == 1) cout << ss[0][b];
        else cout << ss[0][10] << ss[0][b];
    }
    first = 1;
    cout << "\n";
    for (auto c:num){
        b = c - '0';
        if (first-- == 1) cout << ss[1][b];
        else cout << ss[1][10] << ss[1][b];
    }
    first = 1;
    cout << "\n";
    for (auto c:num){
        b = c - '0';
        if (first-- == 1) cout << ss[2][b];
        else cout << ss[2][10] << ss[2][b];
    }
    first = 1;
    cout << "\n";
    for (auto c:num){
        b = c - '0';
        if (first-- == 1) cout << ss[3][b];
        else cout << ss[3][10] << ss[3][b];
    }
    first = 1;
    cout << "\n";
    for (auto c:num){
        b = c - '0';
        if (first-- == 1) cout << ss[4][b];
        else cout << ss[4][10] << ss[4][b];
    }
    cout << "\n";
    return 0;
}

