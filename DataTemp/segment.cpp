#include <bits/stdc++>

using namespace std;

int seg[400000];
int lst[100000];

void build(int l, int r, int p){
	if (l == r){
		seg[p] = lst[l];
		return;
	}
	int m = l + ((r-l) >> 1);
	build(l, m, p*2);
	build(m+1, r, p*2 + 1);
	seg[p] = seg[p*2] + seg[p*2+1];
}

int getSum(int l, int r, int s, int t, int p){
	if (l >= s && r <= t){
		return seg[p];
	}
	int m = l + ((r-l) >> 1);
	int sum = 0;
	if (m >= s) sum += getSum(l, m, s, t, p*2);
	if (m <= t) sum += getSum(m+1, r, s, t, p*2 + 1);
	return sum;
}

void update(int l, int r, int s, int t, int p){
	// without lazy tag
	if (l == r){
		seg[p] = lst[l];
	}
	int m = l + ((r-l) >> 1);
	if (m >= s) update(l, m, s, t, p * 2);
	if (m <= t)	update(m+1,r, s, t, p * 2 + 1);
}

int main(){
	return 0;
}
