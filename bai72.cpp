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
		long long sum=0;
		string n  ;
		long long m;
		cin>>n>>m;
		int k=n.size();
		int s[1000];
		for(int i=0;i<k;i++)
			s[i]=n[i]-'0';
		for(int i=0;i<k;i++)
			sum = (sum*10 + s[i])%m;
		cout<<sum<<endl;
	}
	return 0;
}

