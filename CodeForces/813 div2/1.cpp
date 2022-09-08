#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define coe(x) cout << x << endl

using namespace std;
typedef long long ll;

int gcd(int a, int b){
    return (b == 0)?a:gcd(b, a % b);
}
void solve(){
    int n,m ;
    cin >> n >> m;
    int arr[n+1];
    for (int i = 1; i <= n; i++) cin >> arr[i];
    int count = 0;
    for (int i = 1; i <= m; i++) if (arr[i] > m) count++;
    coe(count);

}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        solve();
    }
    return 0;
}
