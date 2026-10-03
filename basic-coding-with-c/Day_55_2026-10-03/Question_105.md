# Question 105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than âŒŠn / 2âŒ‹ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

**Original question wording:**

> Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than âŒŠn / 2âŒ‹ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

**Day:** 55

**Date:** 03 October 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Find a candidate with Boyer-Moore voting, then count it again to verify the majority.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_105.c](Question_105.c).

```c
/* Original question from the reference website:
Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than âŒŠn / 2âŒ‹ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int n, values[1000], candidate = 0, count = 0;
    if (scanf("%d", &n) != 1 || n < 1 || n > 1000) return 1;
    for (int i = 0; i < n; i++) { if (scanf("%d", &values[i]) != 1) return 1; if (count == 0) candidate = values[i]; count += values[i] == candidate ? 1 : -1; }
    count = 0;
    for (int i = 0; i < n; i++) if (values[i] == candidate) count++;
    printf("%d\n", count > n / 2 ? candidate : -1);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
7
2 2 1 1 1 2 2

Output:
2
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  7
  2 2 1 1 1 2 2

  Output:
  2
```
- **Boundary/special case — executed**:

  ```text
  Input:
  4
  1 2 3 4

  Output:
  -1
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.