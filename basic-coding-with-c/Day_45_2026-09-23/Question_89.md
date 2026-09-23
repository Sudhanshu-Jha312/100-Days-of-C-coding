# Question 89: Count frequency of a given character in a string.

**Original question wording:**

> Count frequency of a given character in a string.

**Day:** 45

**Date:** 23 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Compare every string character with the requested character and count matches.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_89.c](Question_89.c).

```c
/* Original question from the reference website:
Count frequency of a given character in a string.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000], target;
    int count = 0;
    if (!fgets(text, sizeof text, stdin)) return 1;
    if (scanf(" %c", &target) != 1) return 1;
    for (size_t i = 0; text[i] != '\0'; i++) if (text[i] == target) count++;
    printf("Frequency = %d\n", count);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
banana
a

Output:
Frequency = 3
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  banana
  a

  Output:
  Frequency = 3
```
- **Boundary/special case — executed**:

  ```text
  Input:
  abc
  z

  Output:
  Frequency = 0
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.