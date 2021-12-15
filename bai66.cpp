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
const int n=10000;
int nt[n];
void snt()
{
	for(int i=2 ; i<=n ; i++) nt[i]=1;
	for(int i=2 ; i<=n ; i++) {
		if(nt[i]) {
			for(int j= 2 * i ; j<=n ; j+=i) nt[j] = 0;
		}
	}
	return ;
}
int main() {
	int T; cin >> T;
	snt();
	while (T--) 
	{
		int N ;
		cin>>N;
		for(int i=2;i<=N;i++)
			if(nt[i]&&nt[N-i])
			{
				cout<<i<<" "<<N-i<<endl;
				break;
			}
	}
	
	return 0;
}

