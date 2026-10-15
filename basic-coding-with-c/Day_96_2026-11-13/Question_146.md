# Question 146: Create Employee structure with nested Date structure for joining date and print details.

**Original question wording:**

> Create Employee structure with nested Date structure for joining date and print details.

**Day:** 96
**Date:** 13 November 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Store the joining date as a nested Date structure and print the Employee details.

## C Program

Source: [Question_146.c](Question_146.c).

## Sample Input and Output

```text
Input:
Raj 11 12 5 2020

Output:
Name: Raj | ID: 11 | Joining Date: 12/05/2020
```



## Explanation

Nested structures group related date fields inside an employee record.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  Raj 11 12 5 2020

  Output:
  Name: Raj | ID: 11 | Joining Date: 12/05/2020
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  Uma 3 1 1 2000

  Output:
  Name: Uma | ID: 3 | Joining Date: 01/01/2000
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
