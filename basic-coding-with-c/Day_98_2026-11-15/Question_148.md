# Question 148: Take two structs as input and check if they are identical.

**Original question wording:**

> Take two structs as input and check if they are identical.

**Day:** 98
**Date:** 15 November 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Compare the two structures member-by-member, using strcmp for names.

## C Program

Source: [Question_148.c](Question_148.c).

## Sample Input and Output

```text
Input:
Asha 101 90
Asha 101 90

Output:
Same
```



## Explanation

Field-by-field comparison avoids comparing padding bytes in the structure.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  Asha 101 90
Asha 101 90

  Output:
  Same
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  Asha 101 90
Asha 101 91

  Output:
  Different
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
