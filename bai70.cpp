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
int main() {
	int T; cin >> T;
	while (T--) {
		int m,n,a,b  ;
		cin>>m>>n>>a>>b;
		int dem=0;
		for(int i=m;i<=n;i++)
			if(i%a==0||i%b==0) dem++;
		cout<<dem<<endl;
	}
	return 0;
}

