#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    if (a == 2){
        cout << "NO";
        return 0;
    }
    if ((a & 1) == 0) cout << "YES";
    else cout << "NO";
    return 0;
}

