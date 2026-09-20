# Question 83: Count vowels and consonants in a string.

**Original question wording:**

> Count vowels and consonants in a string.

**Day:** 42

**Date:** 20 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Examine alphabetic characters only, then count vowels separately from consonants.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_83.c](Question_83.c).

```c
/* Original question from the reference website:
Count vowels and consonants in a string.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000];
    int vowels = 0, consonants = 0;
    if (!fgets(text, sizeof text, stdin)) return 1;
    for (size_t i = 0; text[i] != '\0'; i++) if (isalpha((unsigned char)text[i])) {
        char ch = (char)tolower((unsigned char)text[i]);
        if (strchr("aeiou", ch)) vowels++; else consonants++;
    }
    printf("Vowels = %d\nConsonants = %d\n", vowels, consonants);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
Hello, C!

Output:
Vowels = 2
Consonants = 4
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  Hello, C!

  Output:
  Vowels = 2
  Consonants = 4
```
- **Boundary/special case — executed**:

  ```text
  Input:


  Output:
  Vowels = 0
  Consonants = 0
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.