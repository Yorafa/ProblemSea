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
    int r, c;
    cin >> r >> c;
    int a[16][16] = {0};
    for (int i = 1; i < 8; i+=2){
        for (int j= i; j <= 16-i; j++){
            a[i][j] = 1;
            a[j][i] = 1;
        }
    }
    for (int i = 15; i > 8; i-=2) for (int j= 16 - i; j <= i; j++){ a[i][j] = 1; a[j][i] = 1;}
    if (a[r][c]) coe("black");
    else coe("white");
    return 0;
}
