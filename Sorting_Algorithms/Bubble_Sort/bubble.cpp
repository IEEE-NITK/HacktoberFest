#include <iostream>
using namespace std;

int main() {
 int a[5] = {10, 8, 12, 13, 2} ;
 int i, j ,temp ;
 int size = 5 ;
 
 for( i = 0; i<size - 1 ; i++){
     for( j =0; j < size - i - 1; j++){
           if(a[j] > a[j+1]) {
                temp = a[j] ;
                a[j] = a[j+1] ;
                a[j+1] = temp ;
         }
      }
   }
  cout<<"Sorted array via bubble sort\n" ;
  for(i=0; i<size; i++){
  cout<<a[i]<<" " ;
  }
 return 0 ;
}
