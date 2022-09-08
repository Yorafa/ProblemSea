#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define lb lower_bound
#define ub upper_bound
#define coe(x) cout << x << endl

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;


void solve(){
    
}

int main(){
    string s;
    cin >> s;
    queue<string> q;
    unordered_map<string, int> m;
    m[s] = 0;
    q.push(s);
    while(!(q.empty())){
        string curr = q.front();
        q.pop();
        if (curr == "atcoder"){
            coe(m[curr]);
            return 0;
        }
        for (int i = 0; i < 6; i++){
            string next = curr;
            swap(next[i], next[i+1]);
            if (m.find(next) == m.end()){
                q.push(next);
                m[next] = m[curr] + 1;
            }
        }
    }
    return 0;
}
