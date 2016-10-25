#include<stdio.h>
main()
{
int n,i,j,t;
printf("enter the no of array elements\n");
scanf("%d",&n);
int a[n];
printf("enter array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
for(j=0;j<n-i-1;j++)
if(a[i]>a[i+1])
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
printf("array after sorting\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
