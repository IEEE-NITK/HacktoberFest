In computer science, linear search or sequential search is a method for finding a target value within a list.
It sequentially checks each element of the list for the target value until a match is found or until all the elements have been searched.
Linear search runs in at worst linear time and makes at most n comparisons, where n is the length of the list.
If each element is equally likely to be searched, then linear search has an average case of n/2 comparisons, but the average case can be affected if the search probabilities for each element vary.
Linear search is rarely practical because other search algorithms and schemes, such as the binary search algorithm and hash tables, allow significantly faster searching for all but short lists.

Step 1: Set i to 1
Step 2: if i > n then go to step 7
Step 3: if A[i] = x then go to step 6
Step 4: Set i to i + 1
Step 5: Go to Step 2
Step 6: Print Element x Found at index i and go to step 8
Step 7: Print element not found
Step 8: Exit