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

const int M = 10000000;
const int N = 10000000;

int n,m;
int prefix[M+1], f[N+1];
string a, b;

ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return a*b/gcd(a,b);
}

void build_prefix(){
    prefix[0] = 0;
    int j = 0;
    for (int i = 1; i < b.size(); i++){
        while (j > 0 && b[i] != b[j]) j = prefix[j - 1];
        if (b[i] == b[j]) j++;
        prefix[i] = j;
    }
}

int kmp(){
    build_prefix();
    int i = 0, j = 0, idx = 0;
    while (i < a.size()) {
        if (j == b.size() - 1 && b[j] == a[i]){
            f[idx++] = i - b.size() + 1;
            if(j > 0)j = prefix[j - 1];
        }
        if (a[i] == b[j]){
            i++;
            j++;
        }
        else{
            if (j > 0) j = prefix[j-1];
            else i++;
        }
    }
    return idx;
}

void solve(){
    
}

int main(){
    cin >> a >> b;
    int k = kmp();
    for (int i = 0; i < k; i++) coe(f[i] + 1);
    for (int i = 0; i < b.size(); i++) cout << prefix[i] << " ";
    cout << endl;
    return 0;
}
