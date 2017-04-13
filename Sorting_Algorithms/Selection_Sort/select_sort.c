main()
{
    int n;
    int i,j;
    int temp, min;

    do
    {
        printf("Enter the number of elements\n");
        scanf("%d",&n);
    }
    while (n<1);

    int arr[n]; 
    for (i=0;i<n;i++)  {
        printf("\nEnter the element\n");
        scanf("%d",&arr[i]);
    }

    printf("\nArray is: {");
    for (i=0;i<n;i++)
        printf(" %d ",arr[i]);
    printf("}\n");

    for (i=0;i<n;i++)
    {
        min=i;
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
