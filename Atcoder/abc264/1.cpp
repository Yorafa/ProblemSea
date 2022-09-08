#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define lb lower_bound
#define ub upper_bound
#define coe(x) cout << x << endl

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;

int main(){
    int n,m;
    cin >> n >> m;
    int l = m - n;
    string a = "atcoder";
    string b = a.substr(n-1, l+1);
    coe(b);
    return 0;
}
