#include <bits/stdc++.h>
using namespace std ;

int main() {
 vector<int> a(50) ;
 int i, key, mid, beg, end;
 cout<<"Enter the elemnts" ;

 // enter array elements
 a.push_back(23) ;
 a.push_back(33) ;
 a.push_back(43) ;
 a.push_back(83) ;
 a.push_back(223) ;
 a.push_back(323) ;

 // enter key to be searched
 cout<<" Enter THe value to search" ;
 cin>>key ;

 //start of binary search
 beg = 0;
 last = a.size() - 1 ;
 mid = (beg + end)/2 ;
 while(beg <= end){
    if(key > a[mid]){
         beg = mid + 1 ;
    }
    else if(key == a[mid]){
         cout<<"Found @ "<<mid + 1 ;
         break ;
    }
    else {
        end = mid - 1 ;
    }
    mid = (beg + end)/2 ;
 }

 // if not found 
 if(beg > end)
  cout<<"Not found" ; 
 
 return 0 ;
}
