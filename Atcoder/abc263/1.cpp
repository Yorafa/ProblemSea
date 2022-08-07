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

int main(){
    vi a;
    int b;
    for (int i = 0; i < 5; i++){
        cin >> b;
        a.pb(b);
    }
    sort(all(a));
    if (a[2] < a[3]){
        if (a[0] != a[2] || a[3]!= a[4]) coe("No");
        else coe("Yes");
    }else{
        if (a[0]!= a[1] || a[2] != a[4]) coe("No");
        else coe("Yes");
    }
    return 0;
}
