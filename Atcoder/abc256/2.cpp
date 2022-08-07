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


void solve(){
    
}

int main(){
    int n;
    cin >> n;
    int p = 0, arr[n+1] = {0}, square[4] = {0};
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++){
        square[0]++;
        for (int j = 3; j >= 0; j--){
            if (square[j] > 0){
                if (j + arr[i] < 4){
                    square[j+arr[i]] += square[j];
                    square[j] = 0;
                }else{
                    square[j] = 0;
                    p++;
                }
            }
        }
    }
    coe(p);
    return 0;
}
