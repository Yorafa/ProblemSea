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

int a[N], c[N];

ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return a*b/gcd(a,b);
}

void mergeSort(int l, int r){
    if (l == r) return;
    int m = (r-l)/2 + l;
    mergeSort(l, m);
    mergeSort(m+1, r);
    int lh = l, rh = m + 1, ctn = 0;
    while (lh <= m && rh <= r){
        if (a[lh] > a[rh]) c[ctn++] = a[rh++];
        else c[ctn++] = a[lh++];
    }
    while (lh <= m) c[ctn++] = a[lh++];
    while (rh <= r) c[ctn++] = a[rh++];
    for (int i = 0; i < ctn; i++){
        a[l+i] = c[i];
    }
}

void solve(){
    
}

int main(){

    return 0;
}
