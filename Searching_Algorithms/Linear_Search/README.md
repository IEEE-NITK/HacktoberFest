#include<stdio.h>
main()
{
  int flag=0,n,i,k;
  printf("enter size of array ");
  scanf("%d",&n);
  int a[n];
  printf("enter array elements ");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  printf("enter element to be searched ");
  scanf("%d",&k);
  for(i=0;i<n;i++)
    if(a[i]==k)
    {
      printf("element found at index %d\n",i)
      flag=1;
    }
  if(flag==0)
    printf("element not found\n");
}
