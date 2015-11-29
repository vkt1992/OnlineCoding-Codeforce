#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

vector<pair<int,int> >vct[101];
int visited[101],i;

void restore()
{
	for(i=0;i<=100;i++)	visited[i]=0;
}

void function(int u,int color)
{
	queue <int> que;
	que.push(u);

	while(!que.empty())
	{
		int element=que.front();

		for(i=0;i<vct[element].size();i++)
		{
			int x=vct[element][i].first;

			if(!visited[x] && vct[element][i].second==color)
			{
				visited[x]=1;
				que.push(x);
			}
		}

		que.pop();
	}

	return ;
}

int main()
{
	int n,m,temp;

	scanf("%d%d",&n,&m);
	
	temp=m;
	
	while(temp--)
	{
		int a,b,c;

		scanf("%d%d%d",&a,&b,&c);
		vct[a].push_back(make_pair(b,c));
		vct[b].push_back(make_pair(a,c));
	}

	int q;
	scanf("%d",&q);

	while(q--)
	{
		int u,v,i;

		scanf("%d%d",&u,&v);
		
		int ans=0;

		for(i=1;i<=m;i++)
		{
			restore();
			function(u,i);
			ans=ans+visited[v];
		}

		printf("%d\n",ans);	
	}

	return 0;
}