#include<iostream>
using namespace std;

int mycount[10001];

int NumberOfSetBits(int i)
{
     unsigned int count = 0;
    while (i)
    {
      i &= (i-1) ;
      count++;
    }
    return count;
}

void cal()
{

	int i;

	for(i=1;i<=10000;i++)
	{
		mycount[i]=NumberOfSetBits(i);
	}
}
int main()
{
	int n;
	cin>>n;

	cal();

	while(n--)
	{
		int i,l,r,fcount=0,num=0;

		cin>>l>>r;

		for(i=l;i<=r;i++)
		{
			if(mycount[i] > fcount)
			{
				fcount=mycount[i];
				num=i;
			}
		}

		cout<<num<<endl;
	}

	return 0;
}