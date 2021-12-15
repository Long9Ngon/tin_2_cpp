#include<iostream>
using namespace std;

long long BCNN(long long a,long long b)
{
    if(a % b == 0) return b;
    return BCNN(b , a % b);
    } 
int main()
{
	int T,n,i;
	cin>>T;
	while(T>0)
	{
		cin>>n;
		int dapan=1;
		for(i=2;i<=n;i++)
			dapan=BCNN(dapan,i);		
		cout<<dapan<<endl;
		T--;
	}
	return 0;
}
