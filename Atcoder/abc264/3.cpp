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

int a1[11][11] = {0}, a2[11][11] = {0}, boo[11][11] = {0};


int sc(int c1, int c2, int l2, int l1, int cc1, int cc2){
    int idx = cc2;
    for (int i = cc1; i <= l1; i++){
        if (a1[i][c1] == a2[idx][c2]){
            boo[idx][c2] = 1;
            idx++;
        }
    }
    if (idx-1 == l2) return 1;
    for (int i = 1; i <= l2; i++) boo[i][c2] = 0;
    return 0;
}

int sr(int r1, int r2, int l2, int l1, int c2, int c1){
    int idy = 1;
    for (int i = 1; i <= l1; i++){
        if (a1[r1][i] == a2[r2][idy]){
            if (sc(i, idy, c2, c1, r1, r2)){
                idy++;
            }
        }
    }
    if (idy-1 == l2) return 1;
    for (int i = 1; i <= l2; i++) boo[r2][i] = 0;
    return 0;
}

int main(){
    int h1, w1,h2,w2;
    cin >> h1 >> w1;
    for (int i = 1; i <= h1; i++) for (int j = 1; j <= w1; j++) cin >>a1[i][j];
    cin >> h2 >> w2;
    for (int i = 1; i <= h2; i++) for (int j = 1; j <= w2; j++) cin >>a2[i][j];
    int idy = 1;
    for (int i = 1; i <= h1; i++){
        if (idy > h2) continue;
        if (sr(i, idy, w2, w1, h2, h1) == 1) idy++;
    }
    int sum = 0;
    for (int i = 1; i <= h2; i++) for (int j = 1; j <= w2; j++) sum += boo[i][j];
    if (h2 > h1 || w2 > w1 || (sum !=h2*w2)) coe("No");
    else coe("Yes");
    return 0;
}
