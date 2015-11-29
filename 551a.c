#include <stdio.h>
int main()
{
	int n,a[2001],i,cnt=0,j;
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{	cnt=0;
		for(j=0;j<n;j++)
		{
			if(a[i] < a[j])
			{
				cnt++;
			}
		}

		printf("%d ",cnt+1);
	}

	printf("\n");
	return 0;
}