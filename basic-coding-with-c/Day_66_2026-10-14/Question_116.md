# Question 116: Logic Enhancers: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

**Original question wording:**

> Logic Enhancers: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

**Day:** 66
**Date:** 14 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Check distinct index pairs, printing the first pair whose values sum to target, or -1 -1.

## C Program

Source: [Question_116.c](Question_116.c).

## Sample Input and Output

```text
Input:
4
2 7 11 15
9

Output:
0 1
```



## Explanation

Each pair uses different indices; the fallback handles the case where no matching sum exists.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  4
2 7 11 15
9


  Output:
  0 1
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  3
1 2 3
100


  Output:
  -1 -1
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
