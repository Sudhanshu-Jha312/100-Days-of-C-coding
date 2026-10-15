# Question 149: Use malloc() to allocate structure memory dynamically and print details. Check malloc and free.

**Original question wording:**

> Use malloc() to allocate structure memory dynamically and print details. Check malloc and free.

**Day:** 99
**Date:** 16 November 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Allocate a Student with malloc, fill and print through ->, then release it with free.

## C Program

Source: [Question_149.c](Question_149.c).

## Sample Input and Output

```text
Input:
Tina 105 88

Output:
Name: Tina | Roll: 105 | Marks: 88
```



## Explanation

The NULL check prevents invalid memory access; free releases the allocation.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  Tina 105 88

  Output:
  Name: Tina | Roll: 105 | Marks: 88
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  Uma 1 0

  Output:
  Name: Uma | Roll: 1 | Marks: 0
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
