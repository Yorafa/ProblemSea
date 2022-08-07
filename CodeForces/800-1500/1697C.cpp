#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define lb lower_bound
#define ub upper_bound
#define cpo(x) cout << x << endl;

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;


void solve(){
    int n;
    cin >> n;
    string s,t;
    cin >> s >> t;
    string sp, tp;
    vi si, ti;
    int six[3] = {0}, tix[3] = {0};
    for (int i = 0; i < n; i++){
        if (s[i] != 'b') {sp += s[i]; si.pb(i);}
        six[s[i]-'a']++;
        if (t[i] != 'b') {tp += t[i]; ti.pb(i);}
        tix[t[i]-'a']++;
    }
    for (int i = 0; i < 3; i++)
        if (tix[i] != six[i]){
            cout << "NO" << endl;
            return;
        }
    if (sp != tp){
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < (int)si.size(); i++){
        if (sp[i] == 'a' && si[i] > ti[i]){
            cout << "NO" << endl;
            return;
        }
        if (sp[i] == 'c' && si[i] < ti[i]){
            cout << "NO" << endl;
            return;
        }
    }
    cpo("YES");
}

int main(){
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}
