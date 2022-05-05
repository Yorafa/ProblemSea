#include <bits/stdc++.h>
#define pb(x) push_back(x)

using namespace std;

int main(){
    int n,m;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> m;
        vector<int> ls(m, 0);
        for (int j = 0; j < m; j++) cin >> ls[j];
        sort(ls.begin(), ls.end());
        if (ls.size() == 1){
            if (ls[0] == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }else{
            int a = ls[ls.size()-2], b =ls[ls.size()-1];
            if (a + 1 == b || a==b) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
