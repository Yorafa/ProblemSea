#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double dis, v;
    cin >> dis >> v;
    int time = ceil(dis/v) + 10;
    time = 8*60 + 24*60-time;
    int hour = time / 60, min = time % 60;
    hour = (hour >= 24) ? hour - 24: hour;
    printf("%02d:%02d\n",hour, min);
    return 0;
}


