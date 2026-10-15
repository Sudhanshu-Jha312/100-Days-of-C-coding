# Question 150: Use pointer to struct to modify and display data using -> operator.

**Original question wording:**

> Use pointer to struct to modify and display data using -> operator.

**Day:** 100
**Date:** 17 November 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Use a pointer's -> operator to assign input members and display the pointed-to structure.

## C Program

Source: [Question_150.c](Question_150.c).

## Sample Input and Output

```text
Input:
John 106 91

Output:
Modified Data: Name: John | Roll: 106 | Marks: 91
```



## Explanation

The arrow operator accesses members through a struct pointer.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  John 106 91

  Output:
  Modified Data: Name: John | Roll: 106 | Marks: 91
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  Uma 2 0

  Output:
  Modified Data: Name: Uma | Roll: 2 | Marks: 0
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
