# Question 147: Store employee data in a binary file using fwrite() and read using fread(). Employee details entered and stored in file -> display employee data read from file. Ensure file error handling and explain binary file format.

**Original question wording:**

> Store employee data in a binary file using fwrite() and read using fread(). Employee details entered and stored in file -> display employee data read from file. Ensure file error handling and explain binary file format.

**Day:** 97
**Date:** 14 November 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Write a struct's raw bytes with fwrite, read them with fread, and display the recovered employee.

## C Program

Source: [Question_147.c](Question_147.c).

## Sample Input and Output

```text
Input:
Raj 11 50000.50

Output:
Name: Raj | ID: 11 | Salary: 50000.50
```

The run creates or overwrites `employee.dat`.

## Explanation

Binary struct files contain native object bytes and are not portable between arbitrary systems.

**File warning:** `employee.dat` is overwritten. The binary format includes native struct padding and numeric representation, so it is compiler/platform dependent.

## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  Raj 11 50000.50

  Output:
  Name: Raj | ID: 11 | Salary: 50000.50
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  Tina 7 0

  Output:
  Name: Tina | ID: 7 | Salary: 0.00
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
