# Question 123: File Handling: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

**Original question wording:**

> File Handling: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

**Day:** 73
**Date:** 21 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Count bytes, whitespace-separated words, and lines while reading the file one character at a time.

## C Program

Source: [Question_123.c](Question_123.c).

## Sample Input and Output

```text
Input:
sample.txt

Output:
Characters: 33
Words: 6
Lines: 2
```

Before running, create `sample.txt` with exactly `Hello world`, a newline, then `This is C programming` (no final newline).

## Explanation

Words are non-whitespace sequences; the output counts line breaks and also a final line lacking one.

**Website sample discrepancy:** the supplied sample contains 33 characters and 6 whitespace-separated words when counting its embedded newline. The listed expected values (31 and 5) conflict with the stated count rules; the program reports literal counts.

## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  sample.txt

  Output:
  Characters: 33
Words: 6
Lines: 2
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  empty.txt

  Output:
  Characters: 0
Words: 0
Lines: 0
  ```

**Validation status:** C11 compile PASS; normal run PASS for literal file counts (website expected-count discrepancy noted above); empty-file edge run PASS.
