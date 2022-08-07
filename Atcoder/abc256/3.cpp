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

int h1, h2,h3,w1,w2,w3,ans = 0;

int main(){
    cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;
    for (int i = 1; i <= 30; i++){
        for (int j = 1; j <= 30; j++){
            for (int k = 1; k <= 30; k++){
                for (int l = 1; l <= 30; l++){
                    int a = h1 - i - j;
                    int b = h2 - k - l;
                    int d = w1 - i - k;
                    int e = w2 - j - l;
                    int f = w3 - a - b;
                    int g = h3 - d - e;
                    if (min({a,b,d,e,f}) > 0 && f == g) ans++;
                }
            }
        }
    }
    coe(ans);
    return 0;
}
