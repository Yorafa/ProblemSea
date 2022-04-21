#include <bits/stdc++.h>
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()

using namespace std;

int main(){
    int n, l, cor, diff;
    vector<int> ve;
    cin >> n >> l;
    for (int i = 0; i < n; i++){
        cin >> cor;
        ve.pb(cor);
    }
    sort(all(ve));
    diff = (ve[0] - 0)*2;
    for (int i = 0; i < n - 1; i++) { 
        diff = max(diff, abs(ve[i] - ve[i+1]));
    }
    diff = max(diff, abs(l - ve.back())*2);
    double d = diff*1.0/2;
    printf("%lf\n", d);
    return 0;
}
