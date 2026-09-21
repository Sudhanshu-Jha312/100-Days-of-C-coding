# Question 85: Reverse a string.

**Original question wording:**

> Reverse a string.

**Day:** 43

**Date:** 21 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Swap characters from the two ends of the string until reaching its middle.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_85.c](Question_85.c).

```c
/* Original question from the reference website:
Reverse a string.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000];
    if (!fgets(text, sizeof text, stdin)) return 1;
    size_t length = strcspn(text, "\n");
    for (size_t i = 0; i < length / 2; i++) { char temporary = text[i]; text[i] = text[length - 1 - i]; text[length - 1 - i] = temporary; }
    text[length] = '\0';
    puts(text);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
hello

Output:
olleh
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  hello

  Output:
  olleh
```
- **Boundary/special case — executed**:

  ```text
  Input:


  Output:

  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.