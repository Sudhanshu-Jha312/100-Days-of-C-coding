# Question 95: Check if one string is a rotation of another.

**Original question wording:**

> Check if one string is a rotation of another.

**Day:** 48

**Date:** 26 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Join the first string to itself and check whether the second string occurs in it.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_95.c](Question_95.c).

```c
/* Original question from the reference website:
Check if one string is a rotation of another.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char first[500], second[500], doubled[1001];
    if (!fgets(first, sizeof first, stdin) || !fgets(second, sizeof second, stdin)) return 1;
    first[strcspn(first, "\n")] = '\0'; second[strcspn(second, "\n")] = '\0';
    if (strlen(first) != strlen(second)) { puts("Not a rotation"); return 0; }
    snprintf(doubled, sizeof doubled, "%s%s", first, first);
    puts(strstr(doubled, second) ? "Rotation" : "Not a rotation");
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
waterbottle
erbottlewat

Output:
Rotation
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  waterbottle
  erbottlewat

  Output:
  Rotation
```
- **Boundary/special case — executed**:

  ```text
  Input:
  abc
  bca

  Output:
  Rotation
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.