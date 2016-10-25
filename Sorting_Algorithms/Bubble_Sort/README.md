#include <stdio.h>
 
int main()
{
  int array[100], n, x, d, swap;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (x = 0;x< n;x++)
    scanf("%d", &array[x]);
 
  for (x = 0;x<( n - 1 );x++)
  {
    for (d = 0 ; d < n - x - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        swap       = array[d];
        array[d]   = array[d+1];
        array[d+1] = swap;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (x = 0;x < n;x++)
     printf("%d\n", array[x]);
 
  return 0;
}