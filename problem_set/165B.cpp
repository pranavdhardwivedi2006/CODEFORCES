#include <bits/stdc++.h>
using namespace std;

long long find(int mid, long long k) {
    long long x = 0, p = 1;
    while(mid / p) {
        x += mid / p;
        p *= k;
    }
    return x;
}

int main() {
	long long n, k; cin >> n >> k;
	int l = 1, r = n;
	while(l <= r) {
	    int mid = l + (r - l) / 2;
	    long long x = find(mid, k);
	    if(x >= n) r = mid - 1;
	    else l = mid + 1;
	}
	cout << l << endl;

}
