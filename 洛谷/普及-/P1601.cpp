#include <bits/stdc++.h>
using namespace std;

int a[505] = {0}, b[505] = {0};

int main() {
    string nn, mm;
    cin >> nn >> mm;
    int idx = 0;
    for (int i = nn.size() - 1; i>=0; i--) a[idx++] = nn[i] - '0';
    idx = 0;
    for (int i = mm.size() - 1; i>=0; i--) b[idx++] = mm[i] - '0';
    int co = 0;
    for (int i = 0; i < 505; i++){
        a[i] += b[i] + co;
        if (a[i] >= 10){
            a[i] -= 10;
            co = 1;
        }else co = 0;
    }
    idx = 504;
    while (a[idx--] == 0 && idx >= 0);
    for (int i = idx + 1; i>=0; i--) cout <<a[i];
    cout << endl;
    return 0;
}

