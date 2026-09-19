# Question 81: Count characters in a string without using built-in length functions.

**Original question wording:**

> Count characters in a string without using built-in length functions.

**Day:** 41

**Date:** 19 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Walk through the input characters and count them until the null terminator.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_81.c](Question_81.c).

```c
/* Original question from the reference website:
Count characters in a string without using built-in length functions.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000];
    if (!fgets(text, sizeof text, stdin)) return 1;
    text[strcspn(text, "\n")] = '\0';
    size_t length = 0;
    while (text[length] != '\0') length++;
    printf("Length = %zu\n", length);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
hello

Output:
Length = 5
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
  Length = 5
```
- **Boundary/special case — executed**:

  ```text
  Input:


  Output:
  Length = 0
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.