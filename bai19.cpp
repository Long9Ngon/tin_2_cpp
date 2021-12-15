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
	int T,n;
	long K;
	cin>>T;
	while(T--)
	{
		int tong=0;
		cin>>n>>K;
		for(int i=1;i<=n;i++)
		{
			tong += i%K;	
		}
		if(tong==K)
			cout<<"1"<<endl;
		else
			cout<<"0"<<endl;
	}
	return 0;
}
