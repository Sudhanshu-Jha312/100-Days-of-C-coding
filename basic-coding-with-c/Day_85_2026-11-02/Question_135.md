# Question 135: Enum: Assign explicit values starting from 10 and print them. No input.

**Original question wording:**

> Enum: Assign explicit values starting from 10 and print them. No input.

**Day:** 85
**Date:** 02 November 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Assign A=10 and let the following enum constants increment automatically.

## C Program

Source: [Question_135.c](Question_135.c).

## Sample Input and Output

```text
Input:
(no input; see setup)

Output:
A=10
B=11
C=12
```



## Explanation

Setting the first value explicitly assigns subsequent values 11 and 12.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  (no input; see setup)

  Output:
  A=10
B=11
C=12
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  (no input)

  Output:
  same output
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
