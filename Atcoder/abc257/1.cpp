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
    int a,b;
    cin >> a >> b;
    int n = b % a;
    char oo = 'A';
    if (n == 0){
        oo += b/a - 1;
        cout << oo << endl;
        return 0;
    }
    oo += b/a;
    coe(oo);
    return 0;
}
