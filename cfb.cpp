#include<iostream>
using namespace std;
int main()
{
	int temp,n,w1[200010],w2[200010],pos1=0,i,pos2=0,sum=0;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;

		if(a > 0)
		{
			w1[pos1++]=a;
		}
		else
		{
			w2[pos2++]=a;
		}
		sum=sum+a;
		temp=a;
	}

	if(sum < 0)	cout<<"second";

	else if(sum > 0)	cout<<"first";

	else if(sum==0)
	{
		if(pos1 > pos2)
		{
			for(i=0;i<pos2;i++)
			{	
				int k=w2[i]*(-1);
				if(k > w1[i])	
				{
					cout<<"second";
					return 0;
				}
				else if(k < w1[i])
				{
					cout<<"first";
					return 0;
				}
			}
		}
		else if(pos1 < pos2)
		{
			for(i=0;i<pos1;i++)
			{	
				int k=w2[i]*(-1);
				if(k > w1[i])	
				{
					cout<<"second";
					return 0;
				}
				else if(k < w1[i])
				{
					cout<<"first";
					return 0;
				}
			}
		}
		else if(pos1==pos2)
		{
			int flag=0;
			int k=w2[i]*(-1);
			for(i=0;i<pos2;i++)
			{
				if(k > w1[i])	
				{
					cout<<"second";
					flag=1;
					return 0;
				}
				else if(k < w1[i])
				{
					cout<<"first";
					flag=1;
					return 0;
				}
			}

			if(flag==0)
			{
				if(temp < 0)	
				{
					cout<<"second";
					return 0;
				}
				else 
				{
					cout<<"first";
					return 0;
				}
			}
		}
	}

	
}