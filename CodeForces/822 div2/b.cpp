#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define lb lower_bound
#define ub upper_bound
#define coe(x) cout << x << endl

using namespace std;
typedef unsigned int uint;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef pair<int,int> pii;

ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return a*b/gcd(a,b);
}

void solve(){
   int n;
   cin >> n;
   for(int i = 1; i <= n; i++){
       for (int j = 1; j <= i; j++){
            if (j == 1) cout << "1" << " ";
            else if (j == i) cout << "1" << endl;
            else cout << "0" << " ";
            if (i==1) cout << endl;
        }
    }
}

int main(){
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}
