# Question 113: Logic Enhancers: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

**Original question wording:**

> Logic Enhancers: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

**Day:** 63
**Date:** 11 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Sort the n values ascending and print the value at k-1.

## C Program

Source: [Question_113.c](Question_113.c).

## Sample Input and Output

```text
Input:
10
10 5 4 3 48 6 2 33 53 10
4

Output:
5
```



## Explanation

After sorting, position k-1 represents the kth item because C arrays start at index zero.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  10
10 5 4 3 48 6 2 33 53 10
4


  Output:
  5
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  1
-7
1


  Output:
  -7
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
