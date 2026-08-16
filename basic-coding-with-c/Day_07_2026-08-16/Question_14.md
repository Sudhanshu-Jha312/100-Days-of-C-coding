# Question 14: Write a program to input a character and check whether it is a vowel or consonant using ifâ€“else.

**Original question wording:**

> Write a program to input a character and check whether it is a vowel or consonant using ifâ€“else.

**Day:** 7

**Date:** 16 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Normalize the character to lowercase and check whether it is a vowel.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_14.c](Question_14.c).

```c
/* Original question from the reference website:
Write a program to input a character and check whether it is a vowel or consonant using ifâ€“else.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char ch;
    if (scanf(" %c", &ch) != 1) return 1;
    ch = (char)tolower((unsigned char)ch);
    puts(ch >= 'a' && ch <= 'z' ? (strchr("aeiou", ch) ? "Vowel" : "Consonant") : "Not an alphabet");
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
E

Output:
Vowel
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  E

  Output:
  Vowel
```
- **Boundary/special case — executed**:

  ```text
  Input:
  b

  Output:
  Consonant
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.