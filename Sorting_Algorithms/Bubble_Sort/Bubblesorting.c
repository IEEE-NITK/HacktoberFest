#include <stdio.h>
main()
{
    int n,i,j,temp;

    do{
        printf("Enter the number of elements in array\n");
        scanf("%d",&n);
    }while (n<1);

    int a[n];
    printf("\nEnter the elements in array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("\nYour array is: ");
    
    for (i=0;i<n;i++)
        printf("%d ",a[i]);

    for (i=0;i<n;i++)
    {
        for (j=0;j+1<n-i;j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }

    printf("\nSorted Array using Bubblr Sort is: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
