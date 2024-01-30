#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;

int gcd(int a, int b){
    return (b == 0)?a:gcd(b, a % b);
}

int main(){
    int n,m,z, flag;
    cin >> n;
    for (int idx = 0; idx < n; idx++){
        cin >> m;
        vector<int> v;
        vector<int> v1(10, 0);
        for (int i = 0; i < m; i++){
            cin >> z;
            v1[z % 10]++;
        }
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < min(v1[i], 3); j++) v.pb(i);
        }
        flag = 0;
        for (int i = 0; i < v.size(); i++){
            for (int j = i + 1; j < v.size(); j++){
                for (int k = j +1; k< v.size(); k++){
                    if ((v[i] + v[j] + v[k])%10 == 3) flag = 1;
                    if (flag) break;
                }
                if (flag) break;
            }
            if (flag) break;
        }
        if (flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
