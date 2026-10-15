# Question 128: File Handling: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

**Original question wording:**

> File Handling: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

**Day:** 78
**Date:** 26 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Count alphabetic vowels and consonants; ignore every non-letter.

## C Program

Source: [Question_128.c](Question_128.c).

## Sample Input and Output

```text
Input:
sample.txt

Output:
Vowels: 8
Consonants: 10
```

Before running, create `sample.txt` containing `Welcome to C language`.

## Explanation

Only alphabetic bytes count; digits, spaces, and punctuation are ignored.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  sample.txt

  Output:
  Vowels: 8
Consonants: 10
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  empty.txt

  Output:
  Vowels: 0
Consonants: 0
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
