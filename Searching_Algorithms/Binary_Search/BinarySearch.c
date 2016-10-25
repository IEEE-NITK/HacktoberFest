/*
To search for an element in an array using binary search
Written by: Joshua D'Cunha
Written on: 10/25/2016
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

    printf("\nEnter the elements in ascending order...\n");

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

    int start=0, end=n-1, mid;

    while (start<=end)
    {
        mid=(start+end)/2;
        if (arr[mid]==item)
        {
            printf("\n%d found at position %d\n",item,mid+1);
            break;
        }
        else if (arr[mid]>item)
            end=mid-1;
        else
            start=mid+1;
    }

    if (start>end)
        printf("\n%d not found!\n",item);

}




