# Question 143: Find and print the student with the highest marks.

**Original question wording:**

> Find and print the student with the highest marks.

**Day:** 93
**Date:** 10 November 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Find the index of the highest-mark student and print that record's name and marks.

## C Program

Source: [Question_143.c](Question_143.c).

## Sample Input and Output

```text
Input:
3
Ravi 101 95
Sita 102 85
Aman 103 88

Output:
Topper: Ravi (Marks: 95)
```



## Explanation

The first student initializes the current best; only a strictly greater mark replaces it.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  3
Ravi 101 95
Sita 102 85
Aman 103 88

  Output:
  Topper: Ravi (Marks: 95)
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  1
Mina 5 0

  Output:
  Topper: Mina (Marks: 0)
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
