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
const int N=10000;
int m,n;
int nt[N];
void snt() {
	for(int i=2 ; i<=N ; i++) nt[i]=1;
	for(int i=2 ; i<=N ; i++) {
		if(nt[i]) {
			for(int j= 2 * i ; j<=N ; j+=i) nt[j] = 0;
		}
	}
	return ;
}
int main() {
	int T; cin >> T;
	snt();
	while (T--) {
		cin>>m>>n;
		for(int i=m;i<=n;i++)
			if(nt[i]) cout<<i<<" ";
		cout<<endl;	
	}
	return 0;
}

