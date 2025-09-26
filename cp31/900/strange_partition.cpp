#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,x;
        cin >> n >> x;
        long long max = 0, sum = 0;
        for(int i = 0; i < n; i++) {
            long long k;
            cin >> k;
            max += k / x;
            if(k % x) max++;
            sum += k;
        }
        long long min = sum / x;
        if(sum % x) min++;
        std::cout << min << " " << max << std::endl;
    }

}