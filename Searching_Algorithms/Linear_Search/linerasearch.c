#include<stdio.h>
int main()
{
	int i,n,m,c=0,j,temp,num;
	printf("Enter the sizeof the array\n");
	scanf("%d",&n);
	int a[n],mid,start,end;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the number to be searched\n");
	scanf("%d",&num);
			for(i=0;i<n;i++)
				if(a[i]==num)
					{printf("Number found at %d position\n",i+1);c++;}
			if(c==0)printf("Number not found\n");
				return 0;
}
