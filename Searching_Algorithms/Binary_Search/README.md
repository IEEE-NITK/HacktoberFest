binary search is a method to search a perticular element of the given data.
first we sort this and then use the given algorithm to search perticular value.


binary_search(A, target):
lo = 1, hi = size(A)
   while lo <= hi:
      mid = lo + (hi-lo)/2
      if A[mid] == target:
         return mid            
      else if A[mid] < target: 
         lo = mid+1
      else
	    hi = mid-1
            
   // target was not found