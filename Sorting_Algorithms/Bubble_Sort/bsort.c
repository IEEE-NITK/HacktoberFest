#include<stdio.h>
#include<stdlib.h>
void bsort(int a[], int n)
{
 int i,j,flag=0,temp;

  for(i=0;i<n;i++)
   {
    flag=0;
    for(j=0;j<n-1-i;j++)
    {
      if(a[j]>a[j+1])
      {
        flag=1;
        temp=a[j];
        a[j]=a[j+1]; 
        a[j+1]=temp;
      }
     }
    if(!flag)
    return ;
   }

  }

void main()
{
  int *a,n,i;

  printf("\nEnter size of array:");
  scanf("%d",&n);

  a=malloc(n*sizeof(int));
  printf("\nEnter %d elements:",n);
  
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  bsort(a,n);

  printf("\nSorted array is:");

  for(i=0;i<n;i++)
  printf(" %d ",a[i]);

}


