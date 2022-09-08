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

const int N = 10000000;

int n,m = N, a[N+10], c[N+10], r[N+10];

ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return a*b/gcd(a,b);
}

void countSort(int l, int r){
    memset(c, 0, sizeof(c));
    for (int i = 0; i < n; i++) c[a[i]]++;
    for (int i = 0; i <= N; i++)
        for (int j = 1; j <= c[i]; j++)
            cout << i;
    cout << endl;
    for (int i = 2; i <= N; i++) c[i] += c[i-1]; // prefix array sum
    // want to sure the a[i] location after sort
    for (int i = n; i; i--){
        r[i] = c[a[i]]--;
        // e.g. 3 9 5 3 2, c = [0,0,1,2,0,1,0,0,0,1], after sum c =[0,0,1,3,3,4,4,4,4,5]
        // r[4] = c[a[4]] = c[2] = 1, r[3] = c[a[3]] = c[3] =3, r[2] = c[a[2]] = c[3] = 2 ... etc
    }
    for (int i = 1; i <= n; i++) cout << r[i];
    cout << endl;
}

void solve(){
    
}

int main(){
    int n, idx = 0;
    cin >> n;
    while (n--) cin >> a[idx++];
    return 0;
}
