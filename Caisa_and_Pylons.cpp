#include<iostream>
using namespace std;

int main(){

	long long int n,h[100001],i,pcnt=0,res=0,cnt=0;

	cin>>n;

	h[0]=0;

	for(i=1;i<=n;i++){

		cin>>h[i];

	}

	for(i=0;i<n;i++){

		cnt= h[i]-h[i+1];

		if(cnt < 0){


			if(pcnt + cnt < 0 )
			{
				res=res+ (-1)*cnt;
			}
			else
			{
				pcnt=pcnt+cnt;
			}
		}
		else
		{
			pcnt=pcnt+cnt;
		}
	}

	cout<<res;

	return 0;

	
}