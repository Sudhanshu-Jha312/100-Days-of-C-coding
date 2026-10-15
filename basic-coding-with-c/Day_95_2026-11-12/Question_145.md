# Question 145: Return a structure containing top student's details from a function.

**Original question wording:**

> Return a structure containing top student's details from a function.

**Day:** 95
**Date:** 12 November 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Find the top Student in a function, return the structure, and print all requested fields.

## C Program

Source: [Question_145.c](Question_145.c).

## Sample Input and Output

```text
Input:
3
Riya 101 89
Karan 102 96
Meena 103 92

Output:
Top Student: Karan | Roll: 102 | Marks: 96
```



## Explanation

Returning the structure preserves the top student's full record.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  3
Riya 101 89
Karan 102 96
Meena 103 92

  Output:
  Top Student: Karan | Roll: 102 | Marks: 96
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  1
Uma 7 0

  Output:
  Top Student: Uma | Roll: 7 | Marks: 0
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
