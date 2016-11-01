#include <stdio.h>
 
int main()
{
   int array[50], key, i, size;
 
   printf("Enter the number of elements in array\n");
   scanf("%d",&size);
 
   printf("Enter array elemnts");
 
   for (i = 0; i < size; i++)
      scanf("%d", &array[i]);
 
   printf("Enter the value to search\n");
   scanf("%d", &key);
 
   for (i = 0; i < size; i++)
   {
       //if found
      if (array[i] == key)  
      {
         printf("%d found @ location %d.\n",key, i+1);
         break;
      }
   }
   // if not found
   if (i == size)
      printf("%d is not present in array.\n", key);
 
   return 0;
}
