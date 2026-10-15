# Question 138: Enum: Print all enum names and integer values using a loop. No input.

**Original question wording:**

> Enum: Print all enum names and integer values using a loop. No input.

**Day:** 88
**Date:** 05 November 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Loop through RED to GREEN and use enum values to print each name and integer.

## C Program

Source: [Question_138.c](Question_138.c).

## Sample Input and Output

```text
Input:
(no input; see setup)

Output:
RED=0
YELLOW=1
GREEN=2
```



## Explanation

The enum value indexes the matching name in a parallel array.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  (no input; see setup)

  Output:
  RED=0
YELLOW=1
GREEN=2
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  (no input)

  Output:
  same output
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
