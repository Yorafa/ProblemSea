#include <bits/stdc++.h>
using namespace std;

vector<int> v;

bool run(int x){
    return (x % 400 == 0 || (x % 4 == 0 && x % 100 != 0));
}

int main() {    
    int a,b;
    cin >> a >> b;
    int count = 0, first = 1;
    vector<int> v;
    for (int i = a; i <= b; i++){
        if (run(i)){
            count++;
            v.push_back(i);
        }
    }
    cout << count << endl;
    for (int i = 0; i < v.size(); i++){
        if (first -- == 1) cout << v[i];
        else cout << " " << v[i];
    }
    return 0;
}


