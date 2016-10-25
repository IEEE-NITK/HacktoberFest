#include <stdio.h>
  main()
{
   int a[1000],n,i,j, min,t;
 
   printf("Enter number of elements\n");
   scanf("%d", &n);
 
   printf("Enter array elements\n");
 
   for ( i= 0 ; i< n ;i++ )
      scanf("%d", &a[i]);
 
   for ( i= 0 ; i < ( n - 1 ) ; i++ )
   {
      min = i;
 
      for ( j = i + 1 ; j < n ; j++ )
      {
         if ( a[min] > a[j] )
            min = j;
      }
      if ( min != i )
      {
         t = a[i];
         a[i] = a[min];
         a[min] = t;
      }
   }
   printf("Sorted list in ascending order\n");
   for ( i = 0 ; i < n ; i++ )
      printf("%d\n", a[i]);
}
