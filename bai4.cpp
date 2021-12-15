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
	int T;
	long long N;
	cin>>T;
	while(T>0)
	{
		cin>>N;
		while(N % 2 == 0) {
			cout << 2 << " ";
			N /= 2;
		}
		for(int i =3 ; i<= sqrt(N) ; i++) {
			while(N % i == 0) {
				cout << i << " ";
				N /= i;
			}
		}
		if( N > 2) cout << N;
	cout<<endl;
	T--;
	}
}
