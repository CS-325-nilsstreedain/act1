# Written: (5 pts) Submit in Gradescope
### Problem 1: Using theta notation determine the theoretical running times of the following algorithms.
1. Θ(nlogn)
2. Θ(logn)
3. Θ(n)

### Problem 2: The Mode
1. Describe an algorithm for finding the mode of a data set.

      First, the algorithm takes in the input from the user (length and numerical input). The array element with the highest value is stored as a variable. A new array is created with length equal to the maximum input. Each element in this array is initialized to 0. At each index, the number of times each number occurs is stored. The maximum elements from here make up the mode and are printed out.

3. Give pseudocode for your algorithm

```
Input size
Input values

Array[max_value] = { 0 }

For all values in array:
  Increment for every instance of index in input

Array_max = max(array)

Mode = array_max

Print(mode)
```

5. Analysis of the running time of your algorithm.

      The runtime complexity of this algorithm is Θ (n). There are several components to the algorithm, none of which have a complexity greater than Θ (n).
