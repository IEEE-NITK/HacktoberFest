#include<stdio.h>
int main()
{
	int i,n,m,c=0,j,t,num;
	printf("Enter the sizeof the array\n");
	scanf("%d",&n);
	int a[n],mid,first,last;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the number to be searched\n");
	scanf("%d",&num);
				for(i=0;i<n;i++)
				for(j=0;j<n-1;j++)
					if(a[j]>a[j+1])
						{t=a[j+1];a[j+1]=a[j];a[j]=t;}
			printf("Your array sorted	\n");
			for(i=0;i<n;i++)
				printf("%d  ",a[i]);
			first=0;last=n-1;
			while(first<=last)
			{
				mid=(first+last)/2;
				if(a[mid]==num)
				{  printf("\nNUmber found at %d Position\n",mid+1);c++;break;	 }
				else if(a[mid]<num)
					first=mid+1;
				else if(a[mid]>num)
					last=mid-1;
			}
			if(c==0)printf("\nNumber not found\n");
			
		return 0;
}
