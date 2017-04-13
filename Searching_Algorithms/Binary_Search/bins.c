#include<stdio.h>
#include<stdlib.h>
int bins(int a[],int n,int num)
{
  int beg,mid,end;

  beg=0; end=n-1;

  while(beg<=end)
 {
   mid=(beg+end)/2;

   if(a[mid]==num)
   return mid;
   
   else if( num>a[mid])
   beg=mid+1;
   
   else
   end=mid-1;
 }

 return -1;

}

void main()
{
  int *a,n,num,i,pos;

  printf("\nEnter size of arrray:");
  scanf("%d",&n);

  a=(int *)malloc(n*sizeof(int));

  printf("\nEnter %d elements:", n);
  
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  printf("\nEnter number to be searched:");
  scanf("%d",&num);
  pos=bins(a,n,num);

  if(pos==-1)
  printf("\nNumber not found");
  else
  printf("\nNumber found at index %d and position %d",pos,pos+1);
}
  
