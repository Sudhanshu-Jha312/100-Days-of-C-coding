# Question 94: Find the longest word in a sentence.

**Original question wording:**

> Find the longest word in a sentence.

**Day:** 47

**Date:** 25 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Split the sentence at whitespace and retain the longest resulting word.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_94.c](Question_94.c).

```c
/* Original question from the reference website:
Find the longest word in a sentence.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char sentence[1000], longest[1000] = "";
    if (!fgets(sentence, sizeof sentence, stdin)) return 1;
    char *word = strtok(sentence, " \t\r\n");
    while (word) { if (strlen(word) > strlen(longest)) strcpy(longest, word); word = strtok(NULL, " \t\r\n"); }
    printf("Longest word = %s\n", longest);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
C programming is useful

Output:
Longest word = programming
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  C programming is useful

  Output:
  Longest word = programming
```
- **Boundary/special case — executed**:

  ```text
  Input:
  one

  Output:
  Longest word = one
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.