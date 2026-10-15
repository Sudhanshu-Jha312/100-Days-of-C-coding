# Question 122: File Handling: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

**Original question wording:**

> File Handling: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

**Day:** 72
**Date:** 20 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Use fgets in a loop to print each info.txt line up to EOF.

## C Program

Source: [Question_122.c](Question_122.c).

## Sample Input and Output

```text
Input:
No stdin; info.txt contains:
Name: Rahul
Age: 23

Output:
Name: Rahul
Age: 23
```

Before running, create `info.txt` containing `Name: Rahul` and `Age: 23` on separate lines.

## Explanation

fgets reads bounded chunks and preserves each line for display.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  No stdin; info.txt contains:
  Name: Rahul
  Age: 23

  Output:
  Name: Rahul
  Age: 23
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  No stdin; info.txt is empty.

  Output:
  (no output)
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
