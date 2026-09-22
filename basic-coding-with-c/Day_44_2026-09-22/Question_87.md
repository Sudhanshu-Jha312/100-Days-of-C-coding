# Question 87: Count spaces, digits, and special characters in a string.

**Original question wording:**

> Count spaces, digits, and special characters in a string.

**Day:** 44

**Date:** 22 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Classify every character as a space, digit, or non-alphanumeric special character.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_87.c](Question_87.c).

```c
/* Original question from the reference website:
Count spaces, digits, and special characters in a string.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000];
    int spaces = 0, digits = 0, special = 0;
    if (!fgets(text, sizeof text, stdin)) return 1;
    for (size_t i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
        unsigned char ch = (unsigned char)text[i];
        if (ch == ' ') spaces++; else if (isdigit(ch)) digits++; else if (!isalnum(ch)) special++;
    }
    printf("Spaces = %d\nDigits = %d\nSpecial characters = %d\n", spaces, digits, special);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
Hi 42!

Output:
Spaces = 1
Digits = 2
Special characters = 1
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  Hi 42!

  Output:
  Spaces = 1
  Digits = 2
  Special characters = 1
```
- **Boundary/special case — executed**:

  ```text
  Input:


  Output:
  Spaces = 0
  Digits = 0
  Special characters = 0
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.