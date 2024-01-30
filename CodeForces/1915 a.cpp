#include <iostream>

int main(){
    using namespace std;
    int n;
    cin >> n;
    while (n--){
        int a, b = 0;
        for (int i = 0; i < 3; i++){
            cin >> a;
            b ^= a;
        }
        cout << b << '\n';
    }
    cout << endl;
    return 0;
}