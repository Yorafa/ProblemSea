#include <bits/stdc++.h>
#define pb(x) push_back(x)
typedef long long ll;
using namespace std;

int main(){
    int a;
    cin >> a;
    ll n, k;
    for (int i = 0; i < a; i++){
        cin >> n >> k;
        if (k > n) cout << "NO" <<endl;
        else if ((n&1)==1 && (k&1) ==0) cout << "NO" << endl;
        else if ((n&1) == 0 && k > n/2 && (k&1) == 1) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            if ((n&1) == 0){
                if (k > n/2){
                    for (int i = 0; i < k - 1; i++) cout << 1 << " ";
                    cout << n - (k - 1) << endl;
                }
                else{
                    for (int i = 0; i < k - 1; i++) cout << 2 << " ";
                    cout << n - (k - 1)*2 << endl;
                }
            }else{
                for (int i = 0; i < k - 1; i++) cout << 1 << " ";
                cout << n - (k - 1) << endl;
            }
        }
    }
    return 0;
}
