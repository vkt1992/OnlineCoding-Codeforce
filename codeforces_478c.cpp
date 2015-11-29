#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	long long int arr[4],ans=0,i;

	for(i=0;i<3;i++) cin>>arr[i];

	while((arr[0]!=0 && arr[1]!=0) || (arr[1]!=0 && arr[2]!=0) || (arr[0]!=0 && arr[2]!=0) || (arr[1]!=0 && arr[2]!=0 && arr[0]!=0))
	{
		sort(arr,arr+3);

		if(arr[0]!=0)
		{
			ans=ans+arr[0];
			arr[1]=arr[1]-arr[0];
			arr[2]=arr[2]-arr[0];
			arr[0]=0;
		}
		else
		{
			int mymin; 
			mymin=min(arr[1],arr[2]/2);
			ans=ans+mymin;
			arr[1]=arr[1]-mymin;
			arr[2]=arr[2]-mymin*2;
		}

	}

	cout<<ans;

	return 0;
}