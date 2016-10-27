#include<bits/stdc++.h>
using namespace std;

void bsort(vector<int> &v, int n)
{
 int i,j,flag=0,temp;

  for(i=0;i<n;i++)
   {
    flag=0;
    for(j=0;j<n-1-i;j++)
    {
      if(v[j]>v[j+1])
      {
        flag=1;
        temp=v[j];
        v[j]=v[j+1];
        v[j+1]=temp;
      }
     }
    if(!flag)
    return ;
   }

  }

int main()
{
  vector<int> v;
  int n,i,x;

  printf("\nEnter no of elements:");
  scanf("%d",&n);

  printf("\nEnter %d elements:",n);

  for(i=0;i<n;i++){
   cin>>x;
   v.push_back(x);
  }
  bsort(v,n);

  printf("\nSorted elements are:");

  for(i=0;i<n;i++)
  printf(" %d ",v[i]);

}
