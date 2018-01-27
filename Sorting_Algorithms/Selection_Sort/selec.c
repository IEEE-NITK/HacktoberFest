#include<stdio.h>
#include<stlib.h>

void selsort(int a[], int n)
{
 int i,j,pos,small,temp;

 for(i=0;i<n;i++)
 {
   small=a[i];
   pos=i;
   
   for(j=i+1;j<n;j++)
   {
     if(a[j]<small)
     {
      small=a[j];
      pos=j;
     }
   }
 temp=a[i];
 a[i]=a[pos];
 a[pos]=temp;

}

void main()
{
  int *a,n,i;

  printf("\nEnter size of array:");
  scanf("%d",&n);

  printf("\nEnter %d elements:",n);
  
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  selsort(a,n);

  printf("\nSorted array is:");

  for(i=0;i<n;i++)
  printf(" %d ",a[i]);

}
