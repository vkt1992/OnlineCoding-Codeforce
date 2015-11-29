#include "iostream"
using namespace std;

int main(){
	int n, s,x,y,i,res=-1,flag=0;

	cin>>n>>s;

	for(i=0;i<n;i++)
	{
		cin>>x>>y;

		if(x<s){

				if(y!=0)
				{
					if(100-y >= res)	res=100-y;
				}
				else	flag=1;
		
		}

		else if(x==s)
		{
			if(y==0)	flag=1;
		}
	}
	

	if(res!=-1)	cout<<res;

	else{

		if(flag==1)	cout<<"0";

		else	cout<<res;
	}
	

	return 0;

}