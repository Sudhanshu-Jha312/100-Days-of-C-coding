# Question 144: Write a function that accepts a structure as parameter and prints its members.

**Original question wording:**

> Write a function that accepts a structure as parameter and prints its members.

**Day:** 94
**Date:** 11 November 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Pass a Student structure by value to a function that prints its members.

## C Program

Source: [Question_144.c](Question_144.c).

## Sample Input and Output

```text
Input:
Neha 104 92

Output:
Name: Neha | Roll: 104 | Marks: 92
```



## Explanation

Passing a struct copies its fields into the function parameter for printing.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  Neha 104 92

  Output:
  Name: Neha | Roll: 104 | Marks: 92
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  Uma 1 0

  Output:
  Name: Uma | Roll: 1 | Marks: 0
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
