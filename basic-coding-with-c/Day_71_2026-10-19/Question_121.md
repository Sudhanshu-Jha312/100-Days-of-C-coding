# Question 121: File Handling: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

**Original question wording:**

> File Handling: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

**Day:** 71
**Date:** 19 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Read name and age, write formatted fields to info.txt with fprintf, and check I/O errors.

## C Program

Source: [Question_121.c](Question_121.c).

## Sample Input and Output

```text
Input:
Rahul 23

Output:
File created successfully! Data written to info.txt
```

The run creates `info.txt` with `Name: Rahul` and `Age: 23`.

## Explanation

The program closes the file and reports success only if writing completed.

**File warning:** the output file is created or overwritten; back up an existing file first.

## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  Rahul 23


  Output:
  File created successfully! Data written to info.txt
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  Mina 0


  Output:
  File created successfully! Data written to info.txt
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
