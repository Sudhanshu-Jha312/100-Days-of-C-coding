# Question 96: Reverse each word in a sentence without changing the word order.

**Original question wording:**

> Reverse each word in a sentence without changing the word order.

**Day:** 48

**Date:** 26 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Find each word's boundaries and reverse the characters within those boundaries.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_96.c](Question_96.c).

```c
/* Original question from the reference website:
Reverse each word in a sentence without changing the word order.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char sentence[1000];
    if (!fgets(sentence, sizeof sentence, stdin)) return 1;
    size_t length = strcspn(sentence, "\n");
    for (size_t start = 0; start < length;) {
        while (start < length && sentence[start] == ' ') start++;
        size_t end = start;
        while (end < length && sentence[end] != ' ') end++;
        for (size_t left = start, right = end; left < right && left < --right; left++) { char temporary = sentence[left]; sentence[left] = sentence[right]; sentence[right] = temporary; }
        start = end + 1;
    }
    sentence[length] = '\0';
    puts(sentence);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
Hello C world

Output:
olleH C dlrow
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  Hello C world

  Output:
  olleH C dlrow
```
- **Boundary/special case — executed**:

  ```text
  Input:
  one

  Output:
  eno
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.