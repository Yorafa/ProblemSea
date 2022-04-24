#include <bits/stdc++.h>
#define pb push_back

using namespace std;

typedef long long ll;

unordered_map<string, int> m;
int main(){
    m["one"] = 1;m["two"] = 2;m["three"] = 3; m["four"] = 4; m["five"] = 5;
    m["six"] = 6; m["seven"] = 7; m["eight"] = 8; m["nine"] = 9; m["ten"] = 10;
    m["eleven"] = 11; m["twelve"] = 12; m["thirteen"] = 13; m["fourteen"] = 14; m["fifteen"] = 15;
    m["sixteen"] = 16; m["seventeen"] = 17; m["eighteen"] = 18; m["nineteen"] = 19; m["twenty"] = 20;
    m["a"] = 1; m["both"] = 2; m["another"] = 1; m["first"] = 1; m["second"] = 2; m["third"] = 3;
    string a;
    vector<int> v;
    int num;
    for (int i = 0; i < 6; i++){
        cin >> a;
        if (m.find(a) != m.end()){
            num = (m[a] * m[a])%100;
            if (num == 0) continue;
            v.pb(num);
        }
    }
    if (v.size() == 0) {
        cout << 0 << endl;
        return 0;
    }
    sort(v.begin(), v.end());
    cout << v[0];
    for (int i = 1; i < v.size(); i++){
        printf("%02d", v[i]);
    }
    cout << endl;
    return 0;
}
