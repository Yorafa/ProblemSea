#include <bits/stdc++.h>
using namespace std;

int a[10000] = {0}, b[10000] = {0}, c[20000] = {0};

int main() {
    string nn, mm;
    cin >> nn >> mm;
    int idx = 0;
    for (int i = nn.size() - 1; i>=0; i--) a[idx++] = nn[i] - '0';
    idx = 0;
    for (int i = mm.size() - 1; i>=0; i--) b[idx++] = mm[i] - '0';
    int co = 0, loc = 0, cu;
    for (int i = 0; i < 10000; i++){
        for (int j = 0; j< 10000; j++){
            cu = a[i] * b[j] + c[j + loc] + co;
            co = cu/10;
            cu = cu%10;
            c[j+loc] = cu;
        }
        loc++;
    }
    idx = 19999;
    while (c[idx--] == 0 && idx >= 0);
    for (int i = idx + 1; i>=0; i--) cout <<c[i];
    cout << endl;
    return 0;
}

