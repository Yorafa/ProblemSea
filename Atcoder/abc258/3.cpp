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


void solve(){
    
}

int main(){
    int n, q, num, x, moving = 0;
    char s[500002] = "\0";
    cin >> n >> q >> s;
    for (int i = 1; i <= q; i++){
        cin >> num >> x;
        if (num == 1){
            x %= n;
            moving -= x;
            if (moving < 0) moving = n + moving;
        }
        if (num == 2){            
            int idx = moving + x - 1;
            if (idx >= n) idx%=n;
            printf("%c\n", s[idx]);
        }
    }
    
    return 0;
}
