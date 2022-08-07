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


void solve(){
    
}

int main(){
    int n;
    cin >> n;
    unordered_map<string, int> m;
    string str;
    for (int i = 0; i < n; i++){
        cin >> str;
        if (m.find(str) != m.end()) m[str] += 1;
        else m[str] = 0;
        
        if (m[str]){coe(str << "(" << m[str] << ")");}
        else coe(str);
    }
    return 0;
}
