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
    int n;
    cin >> n;
    if (n == 1) coe(2);
    else coe((int)ceil(1.0*n/3));
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        solve();
    }
    return 0;
}
