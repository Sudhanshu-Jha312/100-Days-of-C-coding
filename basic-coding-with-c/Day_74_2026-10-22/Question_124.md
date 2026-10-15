# Question 124: File Handling: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

**Original question wording:**

> File Handling: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

**Day:** 74
**Date:** 22 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Copy bytes from the source to destination with fgetc and fputc; validate names and I/O.

## C Program

Source: [Question_124.c](Question_124.c).

## Sample Input and Output

```text
Input:
source.txt destination.txt

Output:
File copied successfully to destination.txt
```

Before running, create `source.txt` containing `Learning C File Handling`.

## Explanation

Binary modes preserve bytes and equal source/destination names are rejected to prevent truncation.

**File warning:** the output file is created or overwritten; back up an existing file first.

## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  source.txt destination.txt

  Output:
  File copied successfully to destination.txt
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  empty-src.txt empty-dst.txt

  Output:
  File copied successfully to empty-dst.txt
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
