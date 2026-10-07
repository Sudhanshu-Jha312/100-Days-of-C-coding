# Question 109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

**Original question wording:**

> Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

**Day:** 59

**Date:** 07 October 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Calculate the first k-element sum, then slide the window by subtracting and adding one value.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_109.c](Question_109.c).

```c
/* Original question from the reference website:
Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
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
    long long sum = 0;
    for (int i = 0; i < k; i++) sum += values[i];
    long long maximum = sum;
    for (int i = k; i < n; i++) { sum += values[i] - values[i - k]; if (sum > maximum) maximum = sum; }
    printf("%lld\n", maximum);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
6
2 1 5 1 3 2
3

Output:
9
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  6
  2 1 5 1 3 2
  3

  Output:
  9
```
- **Boundary/special case — executed**:

  ```text
  Input:
  3
  1 2 3
  3

  Output:
  6
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.