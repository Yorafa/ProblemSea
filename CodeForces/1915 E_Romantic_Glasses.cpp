#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;
typedef long long ll;

void solve() {
    int len;
    cin >> len;
    ll arr[len] = {};
    for (ll i = 0; i < len; i++){
        cin >> arr[i];
    }
    map<ll, ll> mp{{0, 1}};
    ll sums = 0;
    for (ll i = 0; i < len; i++){
        sums += arr[i] * (i % 2 == 0 ? 1 : -1);
        if (mp.count(sums)){
            cout << "YES\n";
            return;
        }
        mp[sums] = 1;
    }
    cout << "NO\n";
}

int main() {

    int T = 1;
    cin >> T;
    for (int Task = 1; Task <= T; Task++) {
        solve();
    }

    return 0;
}