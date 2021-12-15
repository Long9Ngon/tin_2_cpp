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
	int T,a,m;
	cin>>T;
	while(T--)
	{
		cin>>a>>m;
		int i;
		for(i=0;i<m;i++)
		{
			if((a*i)%m==1)
			{
				cout<<i<<endl;
				break;
			}
			
		}
		if((a*i)%m!=1)
			cout<<"-1"<<endl;
	}
	return 0;
}

