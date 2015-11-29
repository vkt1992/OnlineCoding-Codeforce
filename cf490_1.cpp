#include<iostream>
#include<stdio.h>
using namespace std;

int min(int a,int b,int c)
{
	if(a < b)
	{
		if(a < c)	return a;
		else
			return c;
	}
	else
	{
		if(b < c)	return b;
		else
			return c;
	}
}

int main()
{
	int a,i,n,p[5001],m[5001],pe[5001],p_pos=0,m_pos=0,pe_pos=0,minn;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);

		if(a==1)
		{
			p[p_pos++]=i;
		}
		else if(a==2)
		{
			m[m_pos++]=i;
		}
		else
		{
			pe[pe_pos++]=i;
		}
	}
	minn=min(p_pos-1,m_pos-1,pe_pos-1);

	printf("%d\n",minn+1);

	for(i=0;i<=minn;i++)
	{
		printf("%d %d %d",p[i],m[i],pe[i]);
		printf("\n");
	}	

	return 0;

}