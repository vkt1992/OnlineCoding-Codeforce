#include <iostream>
#include <stdio.h>
#include <math.h>
#include <utility>
#include <algorithm>
#include <set>
#include <queue>
#include <vector>
#include <stack>
#include <map>
#include <stdlib.h>
#include <string.h>
using namespace std;

char str[11],mystr[12];
int len,i;

int palindrome(int pos1,int pos2)
{

	while(pos1 < pos2)
	{
		if(str[pos1]!=str[pos2])
		{
			return 0;
		}
		else
		{
			pos1++;
			pos2--;
		}
	}

	return 1;
}

int  main()
{	
	
	int len,done=0,flag=0,stpos,lstpos;
	scanf("%s",str);
	len=strlen(str);
	stpos=0;
	lstpos=len;

	if(len==2)
	{
		if(str[0]==str[1])
        {
            mystr[0]=str[0];
            mystr[1]='c';
            mystr[2]=str[1];
        }
        else
        {
            mystr[0]=str[0];
            mystr[1]=str[1];
            mystr[2]=str[0];
        }

        mystr[len+1]='\0';
        printf("%s\n",mystr);

	}
	else if(len==1)
	{
		mystr[0]=str[0];
        mystr[1]=str[0];
        mystr[2]='\0';
        printf("%s\n",mystr);
	}
	else
	{
		for(i=0;i<len/2;i++)
		{
			if(str[i]!=str[len-1-i])
			{
				if(flag==1)	
				{
					done=1;
					break;
				}

				if(palindrome(i+1,len-1-i)==1)
				{
					//cout<<"here\n";
					mystr[stpos++]=str[i];
					//cout<<"char: "<<str[i]<<endl;
					mystr[lstpos--]=str[i];

					int lst=len-1-i,init=i+1;

					for(i=init;i<=lst;i++)
					{
						mystr[stpos++]=str[i];
						//cout<<"inside char: "<<str[i]<<endl;
					}
					flag=1;
					break;

				}
				else if(palindrome(i,len-1-i-1)==1)
				{
					mystr[stpos++]=str[len-1-i];
					mystr[lstpos--]=str[len-1-i];

					int lst=len-1-i-1,init=i;
					for(i=init;i<=lst;i++)
					{
						mystr[stpos++]=str[i];
					}
					flag=1;
					break;
				}
				else
				{
					done=1;
					break;
				}

				flag=1;
			}
			else
			{
				mystr[stpos++]=str[i];
				mystr[lstpos--]=str[len-1-i];
			}
		}

		if(done==1)
		{
			printf("NA\n");
		}
		else
		{
			mystr[len+1]='\0';

			if(len%2!=0 && flag==0)
			{
				mystr[len/2]=str[len/2];
				mystr[(len/2)+1]=str[len/2];
			}
			else if(len%2==0 && flag==0)
			{
				mystr[len/2]='c';
			}

			printf("%s\n",mystr);
		}

	}

	return 0;
}