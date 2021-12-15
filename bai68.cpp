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
	int T; cin >> T;
	while (T--) 
	{
		long long n;
		cin>>n;
		cout<<"1 ";
		for(long long i=2;i<=n;i++)
		{
			int j=2;
			while(i>1)
			{
				if(i%j==0)
				{
					cout<<j<<" ";
					break;
				}
				else j++;
			}
		}
		cout<<endl;
	}
	return 0;
}

