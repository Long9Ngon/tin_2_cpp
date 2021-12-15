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
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i=2,dem=0;
		cin>>n>>k;
		while(n>1)
		{
			if(n%i==0) 
			{
				n/=i;
				dem++;
			}
			else if(n%i!=0) i++;
			if(dem==k)
			{
				cout<<i;
				break;
			}
			
		}
		if(dem!=k) cout<<"-1";
		cout<<endl;
	}
	return 0;
}
