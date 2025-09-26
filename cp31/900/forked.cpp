#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
        int a,b,kx,ky,qx,qy;
        cin >> a >> b >> kx >> ky >> qx >> qy;
        set<pair<int, int>> st;
        st.insert({kx-a, ky-b});
        st.insert({kx-a, ky+b});
        st.insert({kx+a, ky-b});
        st.insert({kx+a, ky+b});
        st.insert({kx-b, ky-a});
        st.insert({kx+b, ky+a});
        st.insert({kx-b, ky+a});
        st.insert({kx+b, ky-a});
        int cnt = 0;
        if(st.find({qx-a, qy-b}) != st.end()) {
            st.erase({qx-a, qy-b});
            cnt++;
        }
        if(st.find({qx-a, qy+b}) != st.end()) {
            st.erase({qx-a, qy+b});
            cnt++;
        }
        if(st.find({qx+a, qy+b}) != st.end()) {
            st.erase({qx+a, qy+b});
            cnt++;
        }
        if(st.find({qx+a, qy-b}) != st.end()) {
            st.erase({qx+a, qy-b});
            cnt++;
        }
        if(st.find({qx-b, qy-a}) != st.end()) {
            st.erase({qx-b, qy-a});
            cnt++;
        }
        if(st.find({qx-b, qy+a}) != st.end()) {
            st.erase({qx-b, qy+a});
            cnt++;
        }
        if(st.find({qx+b, qy+a}) != st.end()) {
            st.erase({qx+b, qy+a});
            cnt++;
        }
        if(st.find({qx+b, qy-a}) != st.end()) {
            st.erase({qx+b, qy-a});
            cnt++;
        }
        std::cout << cnt << std::endl;
	}
}