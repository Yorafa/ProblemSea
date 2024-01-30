#include <bits/stdc++.h>
#define pb(x) push_back(x)

using namespace std;

int main(){
    int n,a;
    cin >> n;
    vector<int> arr;
    while (n!=0){
        cin >> a;
        arr.pb(a);
        n--;
    }
    if(arr.size() == 1){
        cout << 1 << endl;
        return 0;
    }
    sort(arr.begin(), arr.end());
    // Two pointer
    int l = 0, r = arr.size() - 1, count = 0;
    while (l <= r){
        if (arr[r] == 4){
            r--;
            count++;
        }else if(arr[r] + arr[l] == 4){
            r--;
            l++;
            count++;
        }else if(arr[r] + arr[l] > 4){
            r--;
            count++;
        }
        else if(arr[l] == 1 && arr[r] == 2){
            if (arr[l+1] == 1){count++; l+=2;r--;}
            else {count++; l++; r--;}
        }else{
            int remain = (r-l)%4;
            if (remain == 0 && r != l) count += (r-l)/4;
            else if (r != l) count += (r-l)/4+1;
            else if (r == l) count ++;
            break;
        }
    }
    cout << count << endl;
    return 0;
}
