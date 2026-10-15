# Question 142: Store details of 5 students in an array of structures and print all.

**Original question wording:**

> Store details of 5 students in an array of structures and print all.

**Day:** 92
**Date:** 09 November 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Fill five Student structures in an array, then loop over and print them.

## C Program

Source: [Question_142.c](Question_142.c).

## Sample Input and Output

```text
Input:
Asha 101 85
Ravi 102 92
Mina 103 74
Dev 104 68
Tara 105 99

Output:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
Name: Mina | Roll: 103 | Marks: 74
Name: Dev | Roll: 104 | Marks: 68
Name: Tara | Roll: 105 | Marks: 99
```



## Explanation

An array stores multiple objects of the same structure type.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  Asha 101 85
Ravi 102 92
Mina 103 74
Dev 104 68
Tara 105 99

  Output:
  Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
Name: Mina | Roll: 103 | Marks: 74
Name: Dev | Roll: 104 | Marks: 68
Name: Tara | Roll: 105 | Marks: 99
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  A 1 0
B 2 0
C 3 0
D 4 0
E 5 0

  Output:
  Name: A | Roll: 1 | Marks: 0
Name: B | Roll: 2 | Marks: 0
Name: C | Roll: 3 | Marks: 0
Name: D | Roll: 4 | Marks: 0
Name: E | Roll: 5 | Marks: 0
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
