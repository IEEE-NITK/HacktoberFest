/*
To sort an unsorted array using selection sort
Written by: Joshua D'Cunha
Written on 25/10/2016
*/

main()
{
    int n; /*Number of elements in the array*/
    int i,j; /*Looping variables*/
    int temp, min;

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
        min=i; /*Arbitrarily assigns (i+1)th element as minimum*/
        for (j=i+1;j<n;j++)
        {
            if (arr[j]<arr[min])
                min=j;
        }
        temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

    printf("\nArray after selection-sorting is: {");
    for (i=0;i<n;i++)
        printf(" %d ",arr[i]);
    printf("}\n");
}
