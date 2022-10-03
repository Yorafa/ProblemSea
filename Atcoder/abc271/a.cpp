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
    
}

int main(){
    int n;
    cin >> n;
    map<int, char> mp;
    for (int i = 10; i < 16; i++) mp[i] = i - 10 + 'A';
    string ans;
    while (n){
        if (n%16 >= 10) ans = mp[n%16] + ans;
        else ans = (char)(n%16+'0') + ans;
        n/=16;
    }
    if (ans.size() == 0) coe("00");
    else if (ans.size() == 1) coe("0" + ans);
    else coe(ans);
    return 0;
}
