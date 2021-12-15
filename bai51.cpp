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
#include<cstring>
using namespace std;
int main()
{
	int T;
	cin>>T;
	char* n= new char[1001];
	while(T--)
	{
		int sum=0;
		cin>>n;
		for(int i=0;i<strlen(n);i++ )
		{
			if(i%2!=0) sum-=n[i]-'0';
			else sum+=n[i]-'0';
		}	
		if(sum%11==0) cout<<"1";
		else cout<<"0";
		cout<<endl;
	}
	return 0;
}
