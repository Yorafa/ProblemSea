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
    int n;
    cin >> n;
    char arr[n][n];
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> arr[i][j];
    int ok = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){ 
            if (i == j && arr[i][j] != '-') ok = 0;
            if (i != j){
                if (arr[i][j] == 'W' && arr[j][i] != 'L') ok = 0;
                if (arr[i][j] == 'L' && arr[j][i] != 'W') ok = 0;
                if (arr[i][j] == 'D' && arr[j][i] != 'D') ok = 0;
            }
            if (!ok){
                coe("incorrect");
                return 0;
            }
        }
    }
    if (!ok) coe("incorrect");
    else coe("correct");
    return 0;
}
