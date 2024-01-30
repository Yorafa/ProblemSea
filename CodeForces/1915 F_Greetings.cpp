#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
using namespace std;
typedef long long ll;

struct BIT {
    vector<ll> bit;
    int n;
    BIT(int n) {
        this->n = n + 1;
        bit.assign(n + 1, 0);
    }
    ll lowbit(int x) {
        return x & -x;
    }
    ll sum(int r) {
        ll ret = 0;
        r += 1;
        for (; r > 0; r -= lowbit(r)) {
            ret += bit[r];
        }
        return ret;
    }
    void add(int idx, ll delta) {
        idx += 1;
        for (; idx < n; idx += lowbit(idx)) {
            bit[idx] += delta;
        }
    }
};

void solve() {
    int len;
    cin >> len;
    vector<pair<ll, ll>> arr(len);
    vector<ll> v;
    for (ll i = 0; i < len; i++){
        cin >> arr[i].second >> arr[i].first;
        v.push_back(arr[i].second);
        v.push_back(arr[i].first);
    }
    sort(v.begin(), v.end());
    ll cnt = 0;
    for (int i = 0; i < len; i++){
        arr[i].second = lower_bound(v.begin(), v.end(), arr[i].second) - v.begin();
        arr[i].first = lower_bound(v.begin(), v.end(), arr[i].first) - v.begin();
    }
    vector<int> idx(2 * len + 1, -1);
    for (int i = 0; i < len; i++){
        idx[arr[i].first] = arr[i].second;
    }

    BIT bit(2 * len + 1);

    for (int i = 2*len; i >= 0; i--){
        if (idx[i] != -1){
            cnt += bit.sum(idx[i]);
            bit.add(idx[i], 1);
        }
    }
    cout << cnt << '\n';
}

int main() {

    int T = 1;
    cin >> T;
    for (int Task = 1; Task <= T; Task++) {
        solve();
    }

    return 0;
}