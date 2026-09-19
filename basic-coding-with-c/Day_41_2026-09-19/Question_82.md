# Question 82: Print each character of a string on a new line.
[space character]
**Original question wording:**
[space character]
> Print each character of a string on a new line.
[space character]
**Day:** 41
[space character]
**Date:** 19 September 2026
[space character]
## Aim
[space character]
To complete the requested task using a correct, standalone C program.
[space character]
## Algorithm
[space character]
1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Visit the string one character at a time and print each on its own line.
3. **Output:** Display the requested value, classification, sequence, or file result.
[space character]
## C Program
[space character]
Complete standalone source: [Question_82.c](Question_82.c).
[space character]
```c
/* Original question from the reference website:
Print each character of a string on a new line.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char text[1000];
    if (!fgets(text, sizeof text, stdin)) return 1;
    for (size_t i = 0; text[i] != '\0' && text[i] != '\n'; i++) printf("%c\n", text[i]);
    return 0;
}
```
[space character]
## Sample Output
[space character]
Observed from running the sample input below:
[space character]
```text
Input:
C language

Output:
C
[space character]
l
a
n
g
u
a
g
e
```
[space character]
For readability, [space character] marks an output line containing one space.

## Explanation
[space character]
`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.
[space character]
## Result
[space character]
The program implements the requested operation and produces the result for the supplied input.
[space character]
## Test Cases
[space character]
- **Normal case — executed:**
[space character]
  ```text
    Input:
  C language

  Output:
  C
[space character]
  l
  a
  n
  g
  u
  a
  g
  e
```
- **Boundary/special case — executed**:

  ```text
  Input:
[space character]
  Output:
  (no standard output)
  ```
[space character]
**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.