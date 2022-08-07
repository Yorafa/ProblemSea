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

void dfs(int num, int depth, int maxn, int maxd, vi & arr){
    if (depth >= maxd){
        for (int i = 0; i < arr.size(); i++){
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }
    for (int i = num; i <= maxn; i++){
        if (maxn - i + 1 < maxd - depth) continue;
        arr.pb(i);
        dfs(i+1, depth + 1, maxn, maxd, arr);
        arr.pop_back();
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    vi arr;
    dfs(1, 0, m, n, arr);
    return 0;
}
