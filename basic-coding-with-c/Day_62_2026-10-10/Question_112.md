# Question 112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

**Original question wording:**

> Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

**Day:** 62

**Date:** 10 October 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Use Kadane's recurrence to track the best subarray ending here and the best overall sum.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_112.c](Question_112.c).

```c
/* Original question from the reference website:
Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, value, current, maximum;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000 || scanf("%d", &value) != 1) return 1;
    current = maximum = value;
    for (int i = 1; i < n; i++) { if (scanf("%d", &value) != 1) return 1; current = value > current + value ? value : current + value; if (current > maximum) maximum = current; }
    printf("%d\n", maximum);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
9
-2 1 -3 4 -1 2 1 -5 4

Output:
6
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  9
  -2 1 -3 4 -1 2 1 -5 4

  Output:
  6
```
- **Boundary/special case — executed**:

  ```text
  Input:
  3
  -8 -3 -5

  Output:
  -3
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.