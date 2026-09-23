# Question 90: Toggle case of each character in a string.

**Original question wording:**

> Toggle case of each character in a string.

**Day:** 45

**Date:** 23 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Convert lowercase letters to uppercase and uppercase letters to lowercase.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_90.c](Question_90.c).

```c
/* Original question from the reference website:
Toggle case of each character in a string.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000];
    if (!fgets(text, sizeof text, stdin)) return 1;
    for (size_t i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') text[i] = (char)(text[i] - 'a' + 'A');
        else if (text[i] >= 'A' && text[i] <= 'Z') text[i] = (char)(text[i] - 'A' + 'a');
    }
    printf("%s", text);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
Hello World!

Output:
hELLO wORLD!
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  Hello World!

  Output:
  hELLO wORLD!
```
- **Boundary/special case — executed**:

  ```text
  Input:


  Output:

  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.