#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int i,n,x[100000],y[100000];

	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x[i]>>y[i];
	}

	sort(x,x+n);
	sort(y,y+n);

	long long int myx,myy;

	myx=x[n-1]-x[0];
	myy=y[n-1]-y[0];

	if(myy > myx)	cout<<myy*myy;

	else	cout<<myx*myx;

	return 0;
}