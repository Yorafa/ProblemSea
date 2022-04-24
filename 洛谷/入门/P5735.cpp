#include <bits/stdc++.h>
using namespace std;

double dis(double x, double y, double x2, double y2){
    return sqrt(pow(x-x2,2) + pow(y-y2,2));
}

int main() {
    double x1,x2,x3,y1,y2,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    printf("%.2f\n", dis(x1,y1,x2,y2) + dis(x1,y1,x3,y3) + dis(x2,y2,x3,y3));
    return 0;
}

