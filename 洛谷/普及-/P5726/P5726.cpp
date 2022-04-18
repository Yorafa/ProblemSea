#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, m0 = 11, m1 = -1, total = 0;
    cin >> a;
    for (int i = 0; i < a; i++){
        cin >> b;
        m0 = min(m0, b);
        m1 = max(m1, b);
        total += b;
    }
    printf("%.2f", (total - m0 - m1)*1.0/(a-2));
    return 0;
}

