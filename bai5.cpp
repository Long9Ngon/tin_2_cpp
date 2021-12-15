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
int nt(int n) {
	if(n<2) return 0;
	for(int i=2 ; i<=sqrt(n) ; i++)
	if(n%i==0) return 0;
	return 1;
}
int main()
{
	int T;
	cin>>T;
	long long N;
	while(T>0)
	{
		cin>>N;
		for(int i=2 ; i<=sqrt(N) ; i++) {
			if(nt(i) == 1) {
				while(N % i ==0) {
					N/=i;
					if(N==1) {
						cout << i;
						break;
					}
				}
			}
		}
		if(N != 1) cout << N;
		cout << endl;
		T--;
	}
	return 0;
}
