# Question 136: Enum: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

**Original question wording:**

> Enum: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

**Day:** 86
**Date:** 03 November 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Map the operation name to an enum and switch to perform the selected arithmetic.

## C Program

Source: [Question_136.c](Question_136.c).

## Sample Input and Output

```text
Input:
ADD 10 20

Output:
30
```



## Explanation

Each switch branch performs the operation indicated by the user's choice.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  ADD 10 20

  Output:
  30
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  MULTIPLY 6 7

  Output:
  42
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
