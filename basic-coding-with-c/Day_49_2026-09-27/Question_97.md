# Question 97: Print the initials of a name.

**Original question wording:**

> Print the initials of a name.

**Day:** 49

**Date:** 27 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Find the first non-space character of each name word and print its initial.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_97.c](Question_97.c).

```c
/* Original question from the reference website:
Print the initials of a name.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char name[500];
    if (!fgets(name, sizeof name, stdin)) return 1;
    int at_word_start = 1;
    for (size_t i = 0; name[i] != '\0'; i++) {
        if (isspace((unsigned char)name[i])) at_word_start = 1;
        else { if (at_word_start) printf("%c.", (char)toupper((unsigned char)name[i])); at_word_start = 0; }
    }
    putchar('\n');
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
Ada Byron Lovelace

Output:
A.B.L.
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  Ada Byron Lovelace

  Output:
  A.B.L.
```
- **Boundary/special case — executed**:

  ```text
  Input:
  A

  Output:
  A.
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.