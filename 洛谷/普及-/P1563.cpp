#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
typedef long long ll;
using namespace std;

int main(){
    ll a, b;
    int ori;
    cin >> a >> b;
    vector<pair<string, int>> cir; 
    string name;
    for (int i = 0; i < a; i++){ 
        cin >> ori >> name;
        if (ori == 0) cir.pb(mp(name, 1));
        else cir.pb(mp(name, -1));
    }
    int idx = 0;
    int lr, mv;
    for (int i = 0; i < b; i++){
        cin >> lr >> mv;
        if (lr == 0) lr = -1;
        idx = (idx + a + lr*cir[idx].second*mv) % a;
    }
    cout << cir[idx].first << endl;
    return 0;
}
