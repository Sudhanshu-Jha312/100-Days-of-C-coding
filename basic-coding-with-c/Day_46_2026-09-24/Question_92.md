# Question 92: Find the first repeating lowercase alphabet in a string.

**Original question wording:**

> Find the first repeating lowercase alphabet in a string.

**Day:** 46

**Date:** 24 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Count lowercase-letter frequencies, then scan left to right for the earliest repeated letter.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_92.c](Question_92.c).

```c
/* Original question from the reference website:
Find the first repeating lowercase alphabet in a string.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000];
    int frequency[26] = {0};
    if (!fgets(text, sizeof text, stdin)) return 1;
    for (size_t i = 0; text[i] != '\0'; i++) if (text[i] >= 'a' && text[i] <= 'z') frequency[text[i] - 'a']++;
    for (size_t i = 0; text[i] != '\0'; i++) if (text[i] >= 'a' && text[i] <= 'z' && frequency[text[i] - 'a'] > 1) { printf("%c\n", text[i]); return 0; }
    puts("No repeating lowercase letter");
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
swiss

Output:
s
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  swiss

  Output:
  s
```
- **Boundary/special case — executed**:

  ```text
  Input:
  abc

  Output:
  No repeating lowercase letter
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.