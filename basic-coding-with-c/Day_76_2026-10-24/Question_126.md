# Question 126: File Handling: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

**Original question wording:**

> File Handling: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

**Day:** 76
**Date:** 24 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Attempt read-mode open; report missing file or display each line with fgets.

## C Program

Source: [Question_126.c](Question_126.c).

## Sample Input and Output

```text
Input:
exists.txt

Output:
File opened successfully.
Existing contents
```

Before running, create `exists.txt` containing `Existing contents`.

## Explanation

A failed fopen gives a NULL pointer; valid files are streamed to the console.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  exists.txt

  Output:
  File opened successfully.
Existing contents
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  missing.txt

  Output:
  Error: File does not exist!
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
