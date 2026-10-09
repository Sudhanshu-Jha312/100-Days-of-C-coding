# Question 111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

**Original question wording:**

> Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

**Day:** 61

**Date:** 09 October 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Scan each size-k window from left to right and print its first negative value, or zero.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_111.c](Question_111.c).

```c
/* Original question from the reference website:
Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000], k;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) if (scanf("%d", &values[i]) != 1) return 1;
    if (scanf("%d", &k) != 1 || k < 1 || k > n) return 1;
    for (int start = 0; start <= n - k; start++) {
        int first_negative = 0;
        for (int j = start; j < start + k; j++) if (values[j] < 0) { first_negative = values[j]; break; }
        printf("%d%c", first_negative, start == n - k ? '\n' : ' ');
    }
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
8
12 -1 -7 8 -15 30 16 28
3

Output:
-1 -1 -7 -15 -15 0
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  8
  12 -1 -7 8 -15 30 16 28
  3

  Output:
  -1 -1 -7 -15 -15 0
```
- **Boundary/special case — executed**:

  ```text
  Input:
  3
  1 2 3
  2

  Output:
  0 0
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.