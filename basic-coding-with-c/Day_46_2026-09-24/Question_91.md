# Question 91: Remove all vowels from a string.

**Original question wording:**

> Remove all vowels from a string.

**Day:** 46

**Date:** 24 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Copy only non-vowel characters into the front of the string.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_91.c](Question_91.c).

```c
/* Original question from the reference website:
Remove all vowels from a string.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000];
    size_t write = 0;
    if (!fgets(text, sizeof text, stdin)) return 1;
    for (size_t read = 0; text[read] != '\0'; read++) if (!strchr("aeiouAEIOU", text[read])) text[write++] = text[read];
    text[write] = '\0';
    printf("%s", text);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
education

Output:
dctn
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  education

  Output:
  dctn
```
- **Boundary/special case — executed**:

  ```text
  Input:


  Output:

  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.