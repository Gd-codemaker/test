#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,count=2,j,set[100]={0};
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		for(j=i;j<=n;j=j+count)
		{
                     if(set[j]==0)
		     {
			     set[j]=1;
		     }
		}
		count=count+2;
	}
for(i=1;i<=n;i++)
{
	if(set[i]!=1)
	{
		printf("%d",i);
		break;
	}
}

}
