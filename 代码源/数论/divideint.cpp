#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define lb lower_bound
#define ub upper_bound
#define coe(x) cout << x << endl;

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef unsigned long long ull;

int main() {
    ull mod = 1ull << 60, sum = 0, n;
    cin >> n;
    for (ull l = 1; l <= n; l++){
        ll d = n/l, r = n/d;
        sum += ((r-l+1)*(n-r*d + n-l*d)/2);
        l = r;
    }
    coe(sum % mod);
    return 0;
}
