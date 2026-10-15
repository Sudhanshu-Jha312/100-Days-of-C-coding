# Question 133: Enum: Create an enum for months and print how many days each month has. Input month name; FEB->28 or 29 days. Account for leap years if asking year, otherwise state February normal year; preferably input month and year to resolve 28/29.

**Original question wording:**

> Enum: Create an enum for months and print how many days each month has. Input month name; FEB->28 or 29 days. Account for leap years if asking year, otherwise state February normal year; preferably input month and year to resolve 28/29.

**Day:** 83
**Date:** 31 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Map a month to an enum, look up its day count, and apply the leap-year rule to February.

## C Program

Source: [Question_133.c](Question_133.c).

## Sample Input and Output

```text
Input:
FEB 2024

Output:
FEB has 29 days.
```



## Explanation

Gregorian leap years are divisible by 4, except century years unless divisible by 400.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  FEB 2024

  Output:
  FEB has 29 days.
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  FEB 2023

  Output:
  FEB has 28 days.
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
