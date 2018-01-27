/*
To sort an unordered array using bubble sort
Written by: Joshua D'Cunha
Written on 25/10/2016
*/
#include <stdio.h>
main()
{
    int n; /*Number of elements in the array*/
    int i,j; /*Looping variables*/
    int temp;

    do /*Asks for input till input is correct*/
    {
        printf("Enter the number of elements\n");
        scanf("%d",&n);
    }
    while (n<1);

    int arr[n]; /*Array with 'n' elements*/

    for (i=0;i<n;i++) /*Asks for input for each element of the array*/
    {
        printf("\nEnter the element\n");
        scanf("%d",&arr[i]);
    }

    printf("\nArray is: {");
    for (i=0;i<n;i++)
        printf(" %d ",arr[i]);
    printf("}\n");

    for (i=0;i<n;i++)
    {
        for (j=0;j+1<n-i;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }

    printf("\nArray after bubble-sorting is: {");
    for (i=0;i<n;i++)
        printf(" %d ",arr[i]);
    printf("}\n");
}
