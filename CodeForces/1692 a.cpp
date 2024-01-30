#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;

int gcd(int a, int b){
    return (b == 0)?a:gcd(b, a % b);
}

int main(){
    int n;
    int a,b,c,d;
    int num = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b >> c >> d;
        if (a < b){num++;}
        if (a < c){num++;}
        if (a < d){num++;}
        cout << num << endl;
        num = 0;
    }
    return 0;
}
