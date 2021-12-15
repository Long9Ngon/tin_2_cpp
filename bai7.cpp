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
		int n,i=2;
		cin>>n;
		int dem=0;
		while(n>1)
		{
			if(n%i==0)
			{
				n/=i;
				dem++;
			}
			if(n%i!=0&&dem!=0)
			{
				cout<<i<<" "<<dem<<" ";
				i++;
				dem=0;
			}
			if(n%i!=0&&dem==0) i++;
		}
		cout<<endl;
	}
	
	return 0;
}
