# Question 86: Check if a string is a palindrome.

**Original question wording:**

> Check if a string is a palindrome.

**Day:** 43

**Date:** 21 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Compare characters from opposite ends moving inward.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_86.c](Question_86.c).

```c
/* Original question from the reference website:
Check if a string is a palindrome.
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
    int palindrome = 1;
    for (size_t i = 0; i < length / 2; i++) if (text[i] != text[length - 1 - i]) palindrome = 0;
    puts(palindrome ? "Palindrome" : "Not palindrome");
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
level

Output:
Palindrome
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  level

  Output:
  Palindrome
```
- **Boundary/special case — executed**:

  ```text
  Input:
  abc

  Output:
  Not palindrome
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.