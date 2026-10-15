# Question 130: File Handling: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

**Original question wording:**

> File Handling: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

**Day:** 80
**Date:** 28 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Write student records to a text file with fprintf, then reread and display them with fscanf.

## C Program

Source: [Question_130.c](Question_130.c).

## Sample Input and Output

```text
Input:
2
Asha 101 85
Ravi 102 92

Output:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
```



## Explanation

Records are stored as simple text rows; names are read as single words.

**File warning:** the output file is created or overwritten; back up an existing file first.

## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  2
Asha 101 85
Ravi 102 92


  Output:
  Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  1
Uma 7 0


  Output:
  Name: Uma | Roll: 7 | Marks: 0
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
