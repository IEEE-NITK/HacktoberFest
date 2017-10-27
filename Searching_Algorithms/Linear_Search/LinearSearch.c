/*
To search for an item in an array using linear search
Written by: Joshua D'Cunha
Written on 25/10/2016
*/

main()
{
    int n; /*Number of elements in the array*/
    int i; /*Looping variable*/
    int item; /*Item to be searched*/

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

    printf("\nEnter the item to be searched\n");
    scanf("%d",&item);

    for (i=0;i<n;i++)
    {
        if (arr[i]==item)
        {
            printf("\n%d found at position %d\n",item,i+1);
            break;
        }
    }

    if (i==n)
        printf("\n%d not found!\n",item);
}

