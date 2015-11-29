#include<iostream>
#include<stdio.h>
using namespace std;
int tm1plr[100]={0},tm2plr[100]={0},ttime[91],team[91],player[91],pos=0;


int pivot(int arr[],int m,int n,int tm[],int plr[])
{
	int pivot_value=arr[m],temp,i=m,j=n+1,tm1=tm[m],plr1=plr[m];
	
	do	{
			do {	
				i++;
				
			   }while(arr[i] < pivot_value && i <=n);
		
			do {
				j--;	
			   }while(arr[j] > pivot_value);

			 if( i < j)
			  { 
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;

				temp=tm[j];
				tm[j]=tm[i];
				tm[i]=temp;

				temp=plr[j];
				plr[j]=plr[i];
				plr[i]=temp;


			   }
			   		
		}while( i < j);
	arr[m]=arr[j];
	arr[j]=pivot_value;

	tm[m]=tm[j];
	tm[j]=tm1;

	plr[m]=plr[j];
	plr[j]=plr1;

	return j;
}

void quicksort(int arr_element[],int first_indx,int last_indx,int tm[],int plr[])
{
	if(first_indx < last_indx) {
			int pivot_pos;
			pivot_pos=pivot(arr_element,first_indx,last_indx,tm,plr);
			quicksort(arr_element,first_indx,pivot_pos-1,tm,plr);
			quicksort(arr_element,pivot_pos+1,last_indx,tm,plr);
		}
}

int main()
{
	char tm1[21],tm2[21];
	int n;
	scanf("%s",tm1);
	scanf("%s",tm2);
	scanf("%d",&n);
	while(n--)
	{
		int tme,m;
		char tm,crd;

		cin>>tme>>tm>>m>>crd;
		//scanf("%d%c%d%c",tme,tm,m,crd);

		if(tm=='h')
		{
			if(crd=='r')
			{
				team[pos]=1;
				ttime[pos]=tme;
				player[pos]=m;
				pos++;
				//printf("%s %d %d\n",tm1,m,tme);
			}
			else
			{
				tm1plr[m]++;
				if(tm1plr[m]%2==0 && tm1plr[m]!=0)
				{
					team[pos]=1;
					ttime[pos]=tme;
					player[pos]=m;
					pos++;
					//printf("%s %d %d\n",tm1,m,tme);
				}
			}
		}
		else
		{

			if(crd=='r')
			{
				team[pos]=2;
				ttime[pos]=tme;
				player[pos]=m;
				pos++;
				//printf("%s %d %d\n",tm2,m,tme);
			}
			else
			{
				tm2plr[m]++;
				if(tm2plr[m]%2==0 && tm2plr[m]!=0)
				{
					team[pos]=2;
					ttime[pos]=tme;
					player[pos]=m;
					pos++;
					//printf("%s %d %d\n",tm2,m,tme);
				}
			}
		}
	}

	quicksort(ttime,0,pos-1,team,player);

	for(int i=0;i<pos;i++)
    {
        if(team[i]==1)
        {
            printf("%s %d %d\n",tm1,player[i],ttime[i]);
        }
        else
        {
            printf("%s %d %d\n",tm2,player[i],ttime[i]);
        }
        
    }

	return 0;

}