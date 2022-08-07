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
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int dis = 0;
    if (a >= c){
        if (b >= d){
            dis = d-a;
        }else{
            dis = b-a;
        }
    }else{
        if (b >= d){
            dis = d-c;
        }
        else{
            dis = b-c;
        }
    }
    dis = (dis < 0)?0:dis;
    coe(dis);
    return 0;
}
