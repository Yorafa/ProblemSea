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
    int arr[n+1] = {0};
    for (int i = 2; i <= n; i++) cin >> arr[i];
    int p = arr[n], diff = 0;
    for (int i = n; i >= 1; i--){
        if (i == p){
            p = arr[i];
            diff++;
        }
    }
    coe(diff);
    return 0;
}
