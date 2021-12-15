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
		long long n,tong=0  ;
		cin>>n;
		long long c=n;
		
		for(long long i=2;i<n;i++)
			if(n%i==0){
				tong+=i;
				tong+=(n/i);
				n/=i;
		}
		
		tong++;
		if(tong==c) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
	return 0;
}

