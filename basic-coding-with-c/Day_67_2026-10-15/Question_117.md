# Question 117: Logic Enhancers: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

**Original question wording:**

> Logic Enhancers: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

**Day:** 67
**Date:** 15 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Merge sorted inputs by repeatedly outputting the smaller current value.

## C Program

Source: [Question_117.c](Question_117.c).

## Sample Input and Output

```text
Input:
4 3
2 7 11 15
4 8 10

Output:
2 4 7 8 10 11 15
```



## Explanation

The input ordering means comparing the two front values is sufficient to choose the next merged item.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  4 3
2 7 11 15
4 8 10


  Output:
  2 4 7 8 10 11 15
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  0 2

-3 5


  Output:
  -3 5
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
