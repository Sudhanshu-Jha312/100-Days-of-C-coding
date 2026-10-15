# Question 140: Enum: Define a struct with enum Gender and print person's gender.

**Original question wording:**

> Enum: Define a struct with enum Gender and print person's gender.

**Day:** 90
**Date:** 07 November 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Store the input enum gender in a Person structure and print its display name.

## C Program

Source: [Question_140.c](Question_140.c).

## Sample Input and Output

```text
Input:
MALE

Output:
Male
```



## Explanation

The Person struct contains an enum field, combining two C types.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  MALE

  Output:
  Male
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  OTHER

  Output:
  Other
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
