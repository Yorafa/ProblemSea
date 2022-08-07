#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;

int main() {
    char chr;
    int m1 = 0, o1 = 0, m2 = 0, o2 = 0;
    vector<pair<int, int>> w11, w21;
    cin >> chr;
    if (chr == 'E'){
        cout << "0:0" <<endl;
        cout << endl;
        cout << "0:0" << endl;
        return 0;
    }
    while (chr != 'E'){
        if (chr == 'W'){m1++; m2++;}
        else if (chr == 'L') {o1++; o2++;}
        if ((m1 >= 11 || o1 >= 11) && abs(m1 - o1) >= 2){
            w11.pb(mp(m1, o1));
            m1 = 0; o1 = 0;
        }
        if ((m2 >= 21 || o2 >= 21) && abs(m2 - o2) >= 2){
            w21.pb(mp(m2, o2));
            m2 = 0; o2 = 0;
        }
        cin >> chr;
    }
    w11.pb(mp(m1, o1));
    w21.pb(mp(m2, o2));
    for (auto& s : w11) cout << s.first << ":" << s.second << endl;
    cout << endl;
    for (auto& s : w21) cout << s.first << ":" << s.second << endl;
    return 0;
}

