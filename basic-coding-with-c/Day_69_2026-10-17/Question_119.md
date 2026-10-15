# Question 119: Logic Enhancers: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

**Original question wording:**

> Logic Enhancers: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

**Day:** 69
**Date:** 17 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Scan once using a seen-value table; report the first value encountered twice.

## C Program

Source: [Question_119.c](Question_119.c).

## Sample Input and Output

```text
Input:
4
1 3 3 4

Output:
3
```



## Explanation

The dynamically allocated open-addressed table supports any signed int value and inspects each input once. The input count is limited to 1,000,000.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  4
1 3 3 4


  Output:
  3
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  3
5 4 4


  Output:
  4
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
