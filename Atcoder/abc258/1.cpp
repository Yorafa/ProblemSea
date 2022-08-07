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

int main(){
    int a;
    cin >> a;
    int time = 21*60 + a;
    if (time>=(24*60)){
        printf("%02d:%02d\n", time/60 - 24, time%60);
    }else{
        printf("%02d:%02d\n", time/60, time%60);
    }
    return 0;
}
