# Question 62: Reverse an array without taking extra space.

**Original question wording:**

> Reverse an array without taking extra space.

**Day:** 31

**Date:** 09 September 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Swap matching elements at the two ends while moving inward, using no second array.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_62.c](Question_62.c).

```c
/* Original question from the reference website:
Reverse an array without taking extra space.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000];
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    for (int left = 0, right = n - 1; left < right; left++, right--) {
        int temporary = values[left]; values[left] = values[right]; values[right] = temporary;
    }
    for (int i = 0; i < n; i++) printf("%d%c", values[i], i + 1 == n ? '\n' : ' ');
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
5
1 2 3 4 5

Output:
5 4 3 2 1
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  5
  1 2 3 4 5

  Output:
  5 4 3 2 1
```
- **Boundary/special case — executed**:

  ```text
  Input:
  1
  5

  Output:
  5
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.