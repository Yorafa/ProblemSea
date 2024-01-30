#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()

using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    int a,b;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        int arr[a], sum = 0, pre[a+1] = {0}, post[a+1] = {0};
        for (int j = 0; j < a; j++){
            cin >> arr[j];
            sum += arr[j];
            pre[j+1] = pre[j] + arr[j];
        }
        if (sum < b){
            cout << -1 << endl;
            continue;
        }
        for (int j = 0; j < a; j++) post[j+1] = post[j] + arr[a-1-j];
        int m=a, lp, lpo;
        for (int j = 0; j <= sum - b; j++){
            lp = lower_bound(pre, pre + a + 1, j) - pre;
            lpo = lower_bound(post, post + a + 1, sum-b-j) - post;
            m = min(lp+lpo, m);
        }
        cout << m << endl;
    }

    return 0;
}
