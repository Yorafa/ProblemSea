#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    int s[20001] = {0};
    cin >> n;
    a = n;
    int arr[n+1] = {0};
    while (n != 0){
        cin >> arr[n];
        n--;
    }
    n = a;
    int count = 0;
    for (int i = 1; i <= n; i++)
        for (int j = i+1; j <= n; j++)s[arr[i] + arr[j]] = 1;
    for (int i = 1; i <= n; i++) count += (s[arr[i]]==1)?1:0;
    cout << count;
    return 0;
}

