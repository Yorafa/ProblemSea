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
    int n,k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bool sub[n];
    for (int i = 0; i < n - 1 ;i++){
        sub[i] = arr[i] < 2*arr[i+1];
    }
    int result = 0;
    int l = -1, curr = -1;
    for (int i = 0; i < n - 1; i ++){
        if (sub[i]){
            if (l == -1) l = i;
            curr = i;
        }else{curr = -1; l = -1;};
        if (curr - l + 1 >= k && l != -1){
            result ++;
        }
    }
    cout << result <<endl;
}

int main(){
    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}
