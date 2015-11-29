#include<iostream>
using namespace std;

int max(int a,int b)
{
	if(a > b) 
		return a;
	return b;
}

int min(int a,int b)
{
	if(a < b) 
		return a;
	return b;
}

int main()
{
	int n;
	long long int sum=0;
	cin>>n;
	while(n--)
	{
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		sum+= ( max(x1,x2)-min(x1,x2) + max(y1,y2)-min(y1,y2) )*2;
	}
	cout<<sum<<"\n";
	return 0;
}