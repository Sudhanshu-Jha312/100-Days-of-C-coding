# Question 131: Enum: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value. No input.

**Original question wording:**

> Enum: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value. No input.

**Day:** 81
**Date:** 29 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Declare ordered day constants and loop across them, printing names and integer values.

## C Program

Source: [Question_131.c](Question_131.c).

## Sample Input and Output

```text
Input:
(no input; see setup)

Output:
Sunday=0
Monday=1
Tuesday=2
Wednesday=3
Thursday=4
Friday=5
Saturday=6
```



## Explanation

C enum values start at zero by default and increase by one.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  (no input; see setup)

  Output:
  Sunday=0
Monday=1
Tuesday=2
Wednesday=3
Thursday=4
Friday=5
Saturday=6
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  (no input)

  Output:
  same output
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
