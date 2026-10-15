# Question 141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

**Original question wording:**

> Define a structure Student with name, roll_no, and marks, then read and print one student's data.

**Day:** 91
**Date:** 08 November 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Read the fields into a Student structure and print each member.

## C Program

Source: [Question_141.c](Question_141.c).

## Sample Input and Output

```text
Input:
Asha 101 90

Output:
Name: Asha | Roll: 101 | Marks: 90
```



## Explanation

A structure groups related student fields into one named object.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  Asha 101 90

  Output:
  Name: Asha | Roll: 101 | Marks: 90
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  Uma 1 0

  Output:
  Name: Uma | Roll: 1 | Marks: 0
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
