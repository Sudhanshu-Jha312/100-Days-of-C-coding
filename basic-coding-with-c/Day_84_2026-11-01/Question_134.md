# Question 134: Enum: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

**Original question wording:**

> Enum: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

**Day:** 84
**Date:** 01 November 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Map input status to an enum and use switch to choose the message.

## C Program

Source: [Question_134.c](Question_134.c).

## Sample Input and Output

```text
Input:
FAILURE

Output:
Operation failed.
```



## Explanation

Enums use integer values while named choices make the code clearer.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  FAILURE

  Output:
  Operation failed.
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  TIMEOUT

  Output:
  Operation timed out.
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
