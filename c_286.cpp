#include<iostream>
#include<stdio.h>
using namespace std;

int gem[30005];
int dp[600][30005];
int base;

int dfs(int cur,int step)
{
	if(cur > 30000)	return 0;

	if(dp[step-base][cur]==-1)
	{
		int ans=0;
		ans=max(ans,dfs(cur+step,step+1));
		
	}
}

int main()
{
	int n,d;
	scanf("%d",&n,&d);

	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
		gem[a]++;
	}

	base=d-260;

	printf("%d\n",dfs(0,d));

	return 0;
}