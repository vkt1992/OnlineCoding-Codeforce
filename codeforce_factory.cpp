#include<iostream>
using namespace std;

int main()
{
	long long int a,m,sum,temp;

	cin>>a>>m;
	temp=a;

	while(a < m)
	{
		a=a+(a%m);
	}

	if(a%m==0)	cout<<"Yes";

	else	cout<<"No";

	return 0;
}