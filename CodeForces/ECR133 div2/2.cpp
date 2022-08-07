#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define coe(x) cout << x << endl
using namespace std;
typedef long long ll;

int gcd(int a, int b){
    return (b == 0)?a:gcd(b, a % b);
}

void solve(){
    int n;
    cin >> n;
    coe(n);
    int arr[n];
    for(int i = 0; i < n; i++){
        arr[i] = i+1;
    }
    for (int i = 0; i < n - 1; i++){
        for (int j = 0;  j< n; j++){
            cout << arr[j] << " ";
        }
        cout << endl;
        swap(arr[i], arr[i+1]);
    }
    for (int i = 0; i < n; i++) cout<< arr[i] << " ";
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        solve();
    }

    return 0;
}
