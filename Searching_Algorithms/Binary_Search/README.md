The idea behind the Binary Search is to split this array in half multiple times to "zero-in" on the value we're looking for.
Consider array [5,12,17,23,38,44,77,84,90].
Assume we are looking for the value 44 in the array, and we want to know the index of the element that this value is located in, if, in fact, it is in the array at all (remember that we always have to prepare for the case where the element is not found at all).
In this example, the value 44 is located in the 6th element of the array.
In the linear search shown above, it would require six comparisons between array elements and the search key to find out that the 6th element of the array contained the value that we are looking for.

1.Let min=1 and max=n.
2.Guess the average of max and min, rounded down so that it is an integer.
3.If you guessed the number, stop. You found it!
4.If the guess was too low, set min to be one larger than the guess.
5.If the guess was too high, set max to be one smaller than the guess.
6.Go back to step two.