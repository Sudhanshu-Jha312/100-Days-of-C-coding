# Question 98: Print initials of a name with the surname displayed in full.

**Original question wording:**

> Print initials of a name with the surname displayed in full.

**Day:** 49

**Date:** 27 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Print the first letter of each name word except the last, then print the surname in full.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_98.c](Question_98.c).

```c
/* Original question from the reference website:
Print initials of a name with the surname displayed in full.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char name[500], *words[100];
    int count = 0;
    if (!fgets(name, sizeof name, stdin)) return 1;
    char *word = strtok(name, " \t\r\n");
    while (word && count < 100) { words[count++] = word; word = strtok(NULL, " \t\r\n"); }
    if (count == 0) return 1;
    for (int i = 0; i < count - 1; i++) printf("%c. ", (char)toupper((unsigned char)words[i][0]));
    printf("%s\n", words[count - 1]);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
Ada Augusta Byron

Output:
A. A. Byron
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  Ada Augusta Byron

  Output:
  A. A. Byron
```
- **Boundary/special case — executed**:

  ```text
  Input:
  A B

  Output:
  A. B
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.