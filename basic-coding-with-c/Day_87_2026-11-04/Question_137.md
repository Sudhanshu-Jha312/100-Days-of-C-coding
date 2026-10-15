# Question 137: Enum: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

**Original question wording:**

> Enum: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

**Day:** 87
**Date:** 04 November 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Map role name to an enum and display the role-specific welcome message.

## C Program

Source: [Question_137.c](Question_137.c).

## Sample Input and Output

```text
Input:
GUEST

Output:
Welcome Guest!
```



## Explanation

The role enum keeps the three supported choices explicit.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  GUEST

  Output:
  Welcome Guest!
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  ADMIN

  Output:
  Welcome Admin!
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
