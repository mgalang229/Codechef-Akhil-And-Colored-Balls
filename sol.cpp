#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		string x, y;
		cin >> x >> y;
		for(int i=0; i<(int)x.size(); ++i) {
			if(x[i]==y[i]) {
				if(x[i]=='B')
					cout << 'W';
				else
					cout << 'B';
			} else 
				cout << 'B';
		}
		cout << "\n";
	}
}
