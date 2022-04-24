#include <bits/stdc++.h>
using namespace std;

vector<int> v;

bool isP(int x){
    if (x <= 1) return false;
    if (x == 2 || x == 3) return true;
    int m = (int) sqrt(x);
    while (m > 1){
        if(x%m==0) return false;
        m--;
    }
    return true;
}

int main() {    
    int n, a;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        cin >> a;
        if(isP(a)) v.push_back(a);
    }
    int first = 1;
    for (int i = 0; i < v.size(); i++){
        if(first-- == 1) cout << v[i];
        else cout << " " << v[i];
    }
    cout << endl;
    return 0;
}


