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
    int point[3] = {0};
    map<string, vector<int>> mm;
    string miao;
    cin >> n;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < n; j++){
            cin >> miao;
            if (mm.find(miao) == mm.end()) mm[miao] = vector<int>();
            mm[miao].pb(i);
        }
    }
    for (auto & c : mm){
        if (c.second.size() == 3) continue;
        if (c.second.size() == 2){
            point[c.second[0]]++;
            point[c.second[1]]++;
        }
        else point[c.second[0]] += 3;
    }
    cout << point[0] << " " << point[1] << " " << point[2] << endl;
}

int main(){
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}
