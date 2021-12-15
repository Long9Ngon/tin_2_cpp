/*
 Pham Xuan Long
 B19DCAT117
 23
 35
 D19CQAT01-B
 Long Pham
 phamlongthd@gmail.com
 */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T; cin >> T;
	while(T--){
		int n, m, k; cin >> n >> m;
		int I[n] = {}, J[m] = {};
		for(int i = 0; i < n; ++i) {
			for(int j= 0; j < m; ++j) {
				cin >> k;
				if(k == 1){
					I[i] = 1;
					J[j] = 1;
				}
			}
		}
		for(int i = 0; i < n; ++i) {
			for(int j= 0; j < m; ++j) {
				if(I[i] || J[j]) cout << 1 << " ";
				else cout << 0 << " ";
			} cout << '\n';
		}
	}
}
