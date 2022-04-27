#include <bits/stdc++.h>
using namespace std;

typedef struct oier{
    string name;
    int a;
    int b;
    int c;
}OI;

int main() {    
    int n;
    cin >> n;
    OI lg[1001];
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++){
        cin >> lg[i].name >> lg[i].a >> lg[i].b >> lg[i].c;
        v.push_back(make_pair(-(lg[i].a + lg[i].b + lg[i].c), i));
    }
    sort(v.begin(), v.end());
    int idd = v[0].second;
    cout << lg[idd].name << " " << lg[idd].a << " "<< lg[idd].b << " " << lg[idd].c << endl;
    return 0;
}


