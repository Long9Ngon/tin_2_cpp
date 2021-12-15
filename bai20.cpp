/*
 Pham Xuan Long
 B19DCAT117
 23
 35
 D19CQAT01-B
 Long Pham
 phamlongthd@gmail.com
 */

#include<iostream>
#include<cmath>
const long k = 1000000007; 
using namespace std;
int main()
{
	int T,n;
	long long f[1001];
	cin>>T;
	while(T--)
	{
		cin>>n;
		f[1]=1;f[0]=0;
		for(int i=2;i<=n;i++)
			{
				f[i]=(f[i-1]+f[i-2])%k;
			}
			cout<<f[n]<<endl;
		}
	return 0;
}

