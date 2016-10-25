#include<stdio.h>
main()
{
int a[1000],i,n,key,f=0;
printf("enter the no of array elements\n");
scanf("%d",&n);
printf("enter the elements\n");
for (i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the key element\n");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
printf("element found at position %d\n",i+1);
f=1;
break;
}
}
if(f==0)
printf("key is not in the list\n");
}
