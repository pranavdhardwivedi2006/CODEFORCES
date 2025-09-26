#include <bits/stdc++.h>
using namespace std;

int main() {
    map<pair<int, int>, vector<int>> mpp;
    vector<int> trk = {4, 8, 15, 16, 23, 42};
    for(int i = 0; i < 6; i++) {
        for(int j = i + 1; j < 6; j++) {
            for(int k = j + 1; k < 6; k++) {
                int a = trk[i], b = trk[j], c = trk[k];
                mpp[{a*b, b*c}] = {a, b, c};
                mpp[{a*c, c*b}] = {a, c, b};
                mpp[{b*a, a*c}] = {b, a, c};
                mpp[{b*c, c*a}] = {b, c, a};
                mpp[{c*a, a*b}] = {c, a, b};
                mpp[{c*b, b*a}] = {c, b, a};
            }
        }
    }
    
	cout << "? 1 2" << endl; cout.flush(); 
	int p1; cin >> p1;
	
	cout << "? 2 3" << endl; cout.flush();
	int p2; cin >> p2;
	
	cout << "? 4 5" << endl; cout.flush();
	int p3; cin >> p3;
	
	cout << "? 5 6" << endl; cout.flush();
	int p4; cin >> p4;
	
	cout << "! "; 
	for(auto it : mpp[{p1, p2}]) cout << it << " ";
	for(auto it : mpp[{p3, p4}]) cout << it << " ";
	cout.flush();

}