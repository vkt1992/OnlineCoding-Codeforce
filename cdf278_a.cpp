#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
using namespace std;

int check(int num)
{
	
	int len=0,resv;
	while(num!=0)
	{
		resv=num%10;
		num=num/10;
		if(resv==8 || resv==-8)	return 1;
	}

	return 0;
}

int main()
{
	int num,flag=0,res,i=1;
	scanf("%d",&num);

	while(1)
	{
		res=check(num+i);
		if(res==1)
		{
			printf("%d",i);
			break;
		}
		else
		{
			i=i+1;
		}

	}
	return 0;


}