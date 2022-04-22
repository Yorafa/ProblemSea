#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// 树状数组
// the main contribute use the method of lower bit, where we can remove all higher 1
// to keep tracking the index
#define N 500001

int arr[N] = {0};
ll tree[N] = {0};

int n, m;

void modify(int x, int y){
    while (x <= n){
        tree[x] += y;
        x += x & (-x);
    }
}

ll query(int x){
    ll s = 0;
    while (x != 0){
        s += tree[x];
        x -= x & (-x);
    }
    return s;
}

int main(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
        modify(i, arr[i]);
    }
    int x, a, b;
    for (int i = 0; i < m; i++){
        cin >> x;
        cin >> a >> b;
        if (x == 1) {modify(a, b); arr[a] += b;}
        else cout << query(b) - query(a-1) << endl;
    }
}
