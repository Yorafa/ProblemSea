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

int a[10000000];

ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return a*b/gcd(a,b);
}

void quickSort(int l, int r){
    if (l >= r)return;
    swap(a[l], a[l + rand()% (r-l + 1)]);
    int x = a[l];
    int i = l, j = r;
    while (i < j){
        while(i < j && a[j] > x) j--; // find the rightest one <= x
        if(i < j) a[i++] = a[j];
        while (i < j && a[i] < x) i++; // find the leftest one >= x
        if (i < j) a[j--] = a[i]; 
    }
    a[i] = x;
    quickSort(l, i-1);
    quickSort(i+1, r);
}

void solve(){
    
}

int main(){
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}
