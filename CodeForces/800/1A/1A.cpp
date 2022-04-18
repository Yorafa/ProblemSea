#include <bits/stdc++.h>
using namespace std;

int main() {
    long n,m,a;
    cin >> n >> m >> a;
    long long total = ceil(1.0*n/a) * ceil(1.0*m/a);
    cout << total;
    return 0;
}

