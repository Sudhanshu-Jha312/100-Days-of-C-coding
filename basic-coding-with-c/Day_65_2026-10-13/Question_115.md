# Question 115: Logic Enhancers: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

**Original question wording:**

> Logic Enhancers: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

**Day:** 65
**Date:** 13 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Count each lowercase letter in both strings and compare all 26 frequencies.

## C Program

Source: [Question_115.c](Question_115.c).

## Sample Input and Output

```text
Input:
anagram
nagaram

Output:
Anagram
```



## Explanation

Matching letter counts are exactly the condition for an anagram; differences reveal missing or extra letters.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  anagram
nagaram


  Output:
  Anagram
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  a
ab


  Output:
  Not Anagram
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
