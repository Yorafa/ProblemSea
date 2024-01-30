#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

void solve() {
    int n;
    cin >> n;
    ll s = 0;
    while (n--) {
        int a;
        cin >> a;
        s += a;
    }
    ll root = sqrt(s);
    cout << (root*root== s ? "YES" : "NO") << '\n';
}

int main() {

    int T = 1;
    cin >> T;
    for (int Task = 1; Task <= T; Task++) {
        solve();
    }
    cout << endl;
    return 0;
}