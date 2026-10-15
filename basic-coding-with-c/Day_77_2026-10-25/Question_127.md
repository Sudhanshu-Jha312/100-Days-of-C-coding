# Question 127: File Handling: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

**Original question wording:**

> File Handling: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

**Day:** 77
**Date:** 25 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Read input.txt, convert every character with toupper, and write output.txt.

## C Program

Source: [Question_127.c](Question_127.c).

## Sample Input and Output

```text
Input:
No stdin; input.txt contains:
Hello World
C programming

Output:
Converted text written to output.txt
```

Before running, create `input.txt` containing `Hello World`, a newline, and `C programming`.
The resulting `output.txt` contains `HELLO WORLD` and `C PROGRAMMING` on separate lines.

## Explanation

Passing unsigned-char values to toupper avoids undefined behavior.

**File warning:** the output file is created or overwritten; back up an existing file first.

## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  No stdin; input.txt contains:
  Hello World
  C programming

  Output:
  Converted text written to output.txt
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  No stdin; input.txt is empty.

  Output:
  Converted text written to output.txt
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
