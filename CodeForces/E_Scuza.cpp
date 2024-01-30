#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve() {
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n+1), prevMax;
    for (ll i = 0; i <n; i++) {
        ll x;
        cin >> x;
        a[i+1] = a[i] + x;
        if (i) prevMax.push_back(max(prevMax[i - 1], x));
        else prevMax.push_back(x);
    }
    for (ll i = 0; i < q; i++){
        ll x;
        cin >> x;
        ll pos = upper_bound(prevMax.begin(), prevMax.end(), x) - prevMax.begin();
        cout << a[pos] << " ";
    }
    cout << '\n';
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