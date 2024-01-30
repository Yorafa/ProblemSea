#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair

using namespace std;
typedef long long ll;

int gcd(int a, int b){
    return (b == 0)?a:gcd(b, a % b);
}

int main(){
    int n, t;
    int h,m, h1, m1;
    cin >> n;
    string line;
    for (int i = 0; i < n; i++){
        int num = 0;
        cin >> line >> t;
        h = (line[0] - '0')*10 + line[1] - '0';
        m = (line[3] - '0')*10 + line[4] - '0';
        m1  =  m + t;
        h1 = h + m1 / 60;
        h1 %= 24;
        m1 %= 60;
        while (h1 != h || m1 != m){
            string a;
            if (h1 < 10){
                a = "0" + to_string(h1);
            }else a = to_string(h1);
            if (m1 < 10){
                a += "0" + to_string(m1);
            }else a += to_string(m1);
            string b = a;
            reverse(a.begin(), a.end());
            if (a == b){num++;}
            m1  =  m1 + t;
            h1 = h1 + m1 / 60;
            h1 %= 24;
            m1 %= 60;
        }
            string a;
            if (h1 < 10){
                a = "0" + to_string(h1);
            }else a = to_string(h1);
            if (m1 < 10){
                a += "0" + to_string(m1);
            }else a += to_string(m1);
            string b = a;
            reverse(a.begin(), a.end());
            if (a == b) num++;
        cout << num << endl;
    }
    return 0;
}
