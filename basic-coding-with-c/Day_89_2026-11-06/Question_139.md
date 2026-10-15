# Question 139: Enum: Show that enums store integers by printing assigned values. No input.

**Original question wording:**

> Enum: Show that enums store integers by printing assigned values. No input.

**Day:** 89
**Date:** 06 November 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Print the default enum integers for SUCCESS, FAILURE, and TIMEOUT.

## C Program

Source: [Question_139.c](Question_139.c).

## Sample Input and Output

```text
Input:
(no input; see setup)

Output:
SUCCESS=0
FAILURE=1
TIMEOUT=2
```



## Explanation

Default enum constants demonstrate integer storage.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  (no input; see setup)

  Output:
  SUCCESS=0
FAILURE=1
TIMEOUT=2
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  (no input)

  Output:
  same output
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
