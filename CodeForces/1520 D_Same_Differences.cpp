#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;


void solve() {
    // aj - ai = j - i => aj - j = ai - i
    // i nums = sum([1, i - 1])
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> cnt;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ans += cnt[a[i] - i];
        cnt[a[i] - i]++;
    }
    cout << ans << '\n';
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