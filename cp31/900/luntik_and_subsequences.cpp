#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long cnt0 = 0, cnt1 = 0;
        while(n--) {
            int k;
            cin >> k;
            if(k == 0) cnt0++;
            if(k == 1) cnt1++;
        }
        long long k = 1;
        while(cnt0--) {
            k *= 2;
        }
        std::cout << cnt1 * k << std::endl;
    }
}