#include <bits/stdc++.h>
using namespace std;

int main() {    
    double avg = 0, count, p, m0, m1;
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        count = 0;
        m0 = 10;
        m1 = 0;
        for (int j = 0; j < m; j++){
            cin >> p;
            count += p;
            m0 = min(m0, p);
            m1 = max(m1, p); 
        }
        avg = max(avg, (count - m0 - m1)/(m-2));
    }
    printf("%.2f\n", avg);
    return 0;
}


