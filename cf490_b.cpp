#include<iostream>
#include<stdio.h>
#include<map>
#include<set>
using namespace std;

int arr[1000001]={0};

int main()
{
	int n,i,stp,srtp,x,y;
	map<int,int>mp;
	map<int,int>l;
	set<int> st1;
	set<int> st2;
	scanf("%d",&n);
	int temp=n;
	while(temp--)
	{
		scanf("%d%d",&x,&y);
		mp[x]=y;

		st1.insert(x);
		st2.insert(y);

		l[x]++;
		l[y]++;

		if(l[x]==2)
		{
			st1.erase(x);
			st2.erase(x);
		}
		if(l[y]==2)
		{
			st1.erase(y);
			st2.erase(y);
		}
	}
	srtp=*st1.begin();
	stp=*st2.begin();

	if(n%2==0)
	{
		int k=n/2;
		int pos=0,temp;
		temp=srtp;
		while(k--)
		{
			arr[pos]=temp;
			temp=mp[temp];
			pos=pos+2;
		}
		k=n/2;
		temp=mp[0];
		pos=1;
		while(k--)
		{
			arr[pos]=temp;
			temp=mp[temp];
			pos=pos+2;
		}

		for(i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}

	}
	else
	{

		int k=(n/2)+1;
		int pos=0,temp;
		temp=srtp;
		while(k--)
		{
			arr[pos]=temp;
			temp=mp[temp];
			pos=pos+2;
		}
		k=n/2;
		temp=mp[0];
		pos=1;
		while(k--)
		{
			arr[pos]=temp;
			temp=mp[temp];
			pos=pos+2;
		}

		for(i=0;i<n;i++)
		{
			printf("%d ",arr[i]);
		}

	}
	
	return 0;
}