# Question 125: File Handling: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

**Original question wording:**

> File Handling: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

**Day:** 75
**Date:** 23 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Inspect the existing file ending, add a separator newline if needed, then append the new line.

## C Program

Source: [Question_125.c](Question_125.c).

## Sample Input and Output

```text
Input:
data.txt
This is appended text.

Output:
Text appended successfully.
```

Before running, create `data.txt` containing `Hello world` without a final newline.

## Explanation

Append mode keeps existing text intact. The program expects the target file to exist.

The named file must already exist; the program preserves its content and appends the new line.

## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  data.txt
This is appended text.


  Output:
  Text appended successfully.
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  data.txt
(blank line)

  Output:
  Text appended successfully.
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
