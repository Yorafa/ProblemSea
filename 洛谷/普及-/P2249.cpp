#include <bits/stdc++.h>
using namespace std;

int arr[1000005] = {0}, mrr[100005] = {0};
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < m; i++) cin >> mrr[i];
    int l,r,p;
    for (int i = 0; i < m; i++){
        l = 0;
        r = n - 1;
        while (l <= r){
            p  = (r - l)/2 + l;
            if (arr[p] >= mrr[i]) r = p - 1;
            else l = p + 1;
        }
        if (mrr[i] == arr[l]) cout << l + 1 << " ";
        else cout << -1 << " ";
    }
    return 0;
}

