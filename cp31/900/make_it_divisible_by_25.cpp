#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    long long n;
	    cin >> n;
	    int cnt0 = 0, cnt5 = 0, cnt2 = 0, cnt = 0;
	    while(n) {
	        if(n % 10 == 0) {
	            if(cnt0 == 1) {
	                cnt--;
	                break;
	            }
	            cnt0++;
	        } 
	        else if(n % 10 == 2 || n % 10 == 7) {
	            if(cnt5) {
	                cnt--;
	                break;
	            }
	        }
	        else if(n % 10 == 5) {
	            if(cnt0) {
	                cnt--;
	                break;
	            }
	            cnt5++;
	        }
	        cnt++;
	        n /= 10;
	    }
	    std::cout << cnt << std::endl;
	}

}
