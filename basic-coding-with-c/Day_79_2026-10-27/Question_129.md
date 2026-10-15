# Question 129: File Handling: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

**Original question wording:**

> File Handling: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

**Day:** 79
**Date:** 27 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Sum integers read from numbers.txt, count them, and compute their average.

## C Program

Source: [Question_129.c](Question_129.c).

## Sample Input and Output

```text
Input:
No stdin; numbers.txt contains:
10 20 30 40 50

Output:
Sum = 150
Average = 30.00
```

Before running, create `numbers.txt` containing `10 20 30 40 50`.

## Explanation

An empty file has no meaningful average, so it is rejected with an error.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  No stdin; numbers.txt contains:
  10 20 30 40 50

  Output:
  Sum = 150
  Average = 30.00
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  No stdin; numbers.txt is empty.

  Output:
  Error: numbers.txt contains no integers. (stderr; exit status 1)
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
