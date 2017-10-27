#include<stdio.h>
int main()
{
    int n,a[100];
    int i,c=1,num;
    printf("ENter number of elements in array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter number to be searched\n");
    scanf("%d",&num);
    for(i=0;i<n;i++)
        if(a[i]==num)
            {
            c=0;
            printf("Number found at position %d\n",i+1);
            break;
            }
    if(c==1)printf("Number not found\n");
    return 0;

}
