#include <bits/stdc++.h>
using namespace std;

typedef struct oier{
    int id;
    int xgrade;
    int sgrade;
    double tgrade;
}OI;

int main() {    
    int n;
    cin >> n;
    OI lg[10001];
    for (int i = 0; i < n; i++){
        cin >> lg[i].id >> lg[i].xgrade >> lg[i].sgrade;
        lg[i].tgrade = 0.7*lg[i].xgrade + 0.3*lg[i].sgrade;
        if (lg[i].xgrade + lg[i].sgrade > 140 && lg[i].tgrade >= 80) cout << "Excellent" << endl;
        else cout << "Not excellent" << endl;
    }
    return 0;
}


