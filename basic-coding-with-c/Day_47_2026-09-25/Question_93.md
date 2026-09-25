# Question 93: Check if two strings are anagrams of each other.

**Original question wording:**

> Check if two strings are anagrams of each other.

**Day:** 47

**Date:** 25 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Increment character counts for the first string and decrement them for the second.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_93.c](Question_93.c).

```c
/* Original question from the reference website:
Check if two strings are anagrams of each other.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char first[1000], second[1000];
    int frequency[256] = {0};
    if (!fgets(first, sizeof first, stdin) || !fgets(second, sizeof second, stdin)) return 1;
    for (size_t i = 0; first[i] != '\0' && first[i] != '\n'; i++) frequency[(unsigned char)first[i]]++;
    for (size_t i = 0; second[i] != '\0' && second[i] != '\n'; i++) frequency[(unsigned char)second[i]]--;
    int same = 1;
    for (int i = 0; i < 256; i++) if (frequency[i] != 0) same = 0;
    puts(same ? "Anagrams" : "Not anagrams");
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
listen
silent

Output:
Anagrams
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  listen
  silent

  Output:
  Anagrams
```
- **Boundary/special case — executed**:

  ```text
  Input:
  same
  same

  Output:
  Anagrams
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.