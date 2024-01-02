#include <stdio.h>
int main()
{
	int a[]={1,3,4,5,3,4,5,2};
	int b[]={3,5,4,1,3,6,7,2};
	
	int n1=sizeof(a) / sizeof(a[0]);
	int n2=sizeof(b) / sizeof(b[0]);
	
	int array[100],p=0;
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			if(a[i]==b[j]
			{	int c=0;
				for(int k=0;k<p;k++)
				{
					if(array[k]==array[i])
					{
						c++;
					}
				}
				if(c==0)
				{
					array[p]=array[i];
					p++;
				}
			}
		}
	}
	printf("INTERSECTION: ");
	for(int i=0;i<p;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
	int uni[100];
	int co=0;
	for(int i=0;i<n1;i++)
	{
		int h=0;
		for(int j=0;j<p;j++)
		{
			if(uni[j]==array[i])
			{	h++;
			 	break;
			}
		}
		if(h==0)
		{
			uni[co]==b[i];
			co++;
		}
	}
	printf("UNION : ");
	for(int i=0;i<co;i++)
	{
		printf("%d ",uni[i]);
	}
return 0;
}
	
