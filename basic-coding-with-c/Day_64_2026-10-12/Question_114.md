# Question 114: Logic Enhancers: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

**Original question wording:**

> Logic Enhancers: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

**Day:** 64
**Date:** 12 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Use a sliding window and last-seen positions to maintain unique characters; track its maximum length.

## C Program

Source: [Question_114.c](Question_114.c).

## Sample Input and Output

```text
Input:
abcabcbb

Output:
3
```



## Explanation

The window expands over new characters; when a duplicate appears, moving its start avoids rescanning old characters.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  abcabcbb


  Output:
  3
  ```
- **Edge/special case — executed:**

  ```text
  Input:



  Output:
  0
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
