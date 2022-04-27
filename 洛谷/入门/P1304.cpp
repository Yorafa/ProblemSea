#include <bits/stdc++.h>
using namespace std;
// 入 门 题 哥 德 巴 赫 猜 想
// 震 撼 我 全 家

int o[10001] = {{0}};

void oshai(){
    o[0] = 1;
    o[1] = 1;
    int idx;
    for (int i = 2; i <= 10001; i++){
        idx = i;
        if (!o[i]) while (i * idx <= 10001) o[i*idx++] = 1;
    }
}

int main() {    
    int n, pr;
    cin >> n;
    oshai();
    for (int i = 4; i <= n; i+=2){
        pr = 2;
        while(1){
            if (!o[i - pr] && !o[pr]){
                cout << i << "=" << pr << "+" << i-pr <<endl;
                break;
            }
            pr++;
        }
    }
    return 0;
}


