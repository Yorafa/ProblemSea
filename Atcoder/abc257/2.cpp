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
    int n,k,q;
    cin >> n >> k >> q;
    int arr[n+1] =  {0}, A[k+1] = {0};
    for (int i = 1; i <= k; i++){
        cin >> A[i];
        arr[A[i]] ++;
    }
    for (int i = 1; i <= q; i++){
        int idx;
        cin >> idx;
        if (A[idx] != n){
            if (!arr[A[idx] + 1]){
                arr[A[idx]]--;
                A[idx]++;
                arr[A[idx]]++;
            }
        }
    }
    int first = 0;
    for (int i = 1; i <= k; i++){
        if (!first++) cout << A[i];
        else cout << " " << A[i];
    } 
    cout << endl;
    return 0;
}
