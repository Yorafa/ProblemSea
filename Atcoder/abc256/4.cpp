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
typedef vector<pair<int, int>>  vpii;

void solve(){
    
}

int main(){
    int n, a, b;
    cin >> n;
    vpii ival;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        ival.pb({a, 0});
        ival.pb({b, 1});
    }
    sort(all(ival));
    int flag = 0;
    for (auto& pi : ival){
        int t = pi.first, f = pi.second;
        if (!f){
            if (!flag) cout << t << " ";
            flag++;
        }else{
            flag--;
            if (!flag) cout << t << endl;
        }
    }
    return 0;
}
