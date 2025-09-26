#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, x = 400;
    string s;
    cin >> n >> s;
    map<int, set<string>> mpp;
    for(char c = 'a'; c <= 'z'; c++) {
        string temp = string(1, c);
        mpp[1].insert(temp);
        for(char d = 'a'; d <= 'z'; d++) {
            string temp2 = temp + d;
            mpp[2].insert(temp2);
            if(!x) continue;
            for(char e = 'a'; e <= 'z'; e++) {
                if(x) {
                    mpp[3].insert(temp2 + e);
                    x--;
                }
            }
        }
    }
    while(1) {
        for(int i = 1; i <= 3; i++) {
            for(auto it : mpp[i]) {
                if(s.find(it) == string::npos) {
                    cout << it << endl;
                    return;
                }
            }
        }
    }

}

int main() {
    int t;
    cin >> t;
    while (t--) solve();

}