#include <bits/stdc++.h>
using namespace std;

typedef struct oier{
    string name;
    int a;
    int b;
    int c;
    int t;
}OI;

int main() {    
    int n;
    cin >> n;
    OI lg[1001];
    vector<pair<string, int>> v;
    for (int i = 0; i < n; i++){
        cin >> lg[i].name >> lg[i].a >> lg[i].b >> lg[i].c;
        lg[i].t = lg[i].a + lg[i].b + lg[i].c;
        v.push_back(make_pair(lg[i].name, i));
    }
    sort(v.begin(), v.end());
    int c1, c2;
    for (int i = 0; i < v.size(); i++){
        c1 = v[i].second;
        for (int j = i+1; j < v.size(); j++){
            c2 = v[j].second;
            if (abs(lg[c1].a - lg[c2].a) <= 5 &&abs(lg[c1].b - lg[c2].b) <= 5 &&abs(lg[c1].c - lg[c2].c) <= 5 &&abs(lg[c1].t - lg[c2].t) <= 10) cout << v[i].first << " " << v[j].first << endl;
        }
    }
    return 0;
}


