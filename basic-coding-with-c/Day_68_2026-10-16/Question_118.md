# Question 118: Logic Enhancers: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number.

**Original question wording:**

> Logic Enhancers: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number.

**Day:** 68
**Date:** 16 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

XOR the full 0..n range and every input value; only the missing number remains.

## C Program

Source: [Question_118.c](Question_118.c).

## Sample Input and Output

```text
Input:
4
0 3 2 4

Output:
1
```



## Explanation

XOR cancels values appearing twice, leaving the sole missing value.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  4
0 3 2 4


  Output:
  1
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  0


  Output:
  0
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
