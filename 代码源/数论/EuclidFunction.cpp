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

ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return a*b/gcd(a,b);
}

void solve(){
    int a;
    cin >> a;
    int phi = a;
    for (int b = 2; b*b <= a; b++){
        if (a % b == 0){
            phi = phi/b*(b-1); // since a%b ==0 so that phi%b == 0
            // since less than sqrt(a)
            while(a % b == 0) a/=b;
        }
    }
    if (a != 1){
        phi = phi/a*(a-1);
    }
    coe(phi);
}

int main(){
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}
