# Question 120: File Handling: Write a program to take a string input. Change it to sentence case.

**Original question wording:**

> File Handling: Write a program to take a string input. Change it to sentence case.

**Day:** 70
**Date:** 18 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Capitalize each word and lowercase its other letters while retaining spacing and punctuation.

## C Program

Source: [Question_120.c](Question_120.c).

## Sample Input and Output

```text
Input:
I am trying to build logic.

Output:
I Am Trying To Build Logic.
```



## Explanation

The prompt says sentence case, but its examples capitalize every word, so the program follows that demonstrated title-style behavior and preserves punctuation. The website's first sample omits the input's final period in its expected output, unlike its other examples; this solution keeps the period.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  I am trying to build logic.


  Output:
  I Am Trying To Build Logic.
  ```
- **Edge/special case — executed:**

  ```text
  Input:



  Output:

  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
