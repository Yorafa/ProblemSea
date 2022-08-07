#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;

int gcd(int a, int b){
    return (b == 0)?a:gcd(b, a % b);
}

int main(){
    int n,t, num;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        unordered_map<int, int> m;
        for (int j = 0; j < n; j++){
            cin >> num;
            if (m.find(num) != m.end()){
                m[num]++;
            }else m[num] = 1;
        }
        int ie = 0, io = 0;
        for (auto& a:m){
            if ((a.second & 1) == 0) ie++;
            else io++;
        }
        if ((n - ie - io)%2 ==0) cout << ie + io <<endl;
        else cout << ie + io - 1 << endl;
    }

    return 0;
}
