# Question 23: Write a program to calculate library fine based on late days as follows:

**Original question wording:**

> Write a program to calculate library fine based on late days as follows:
> First 5 days late: â‚¹2/day
> Next 5 days late: â‚¹4/day
> Next 20 days days late: â‚¹6/day
> More than 30 days: Membership Cancelled.

**Day:** 12

**Date:** 21 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Add the progressive daily fine for each late-day tier; cancel membership after 30 days.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_23.c](Question_23.c).

```c
/* Original question from the reference website:
Write a program to calculate library fine based on late days as follows:
First 5 days late: â‚¹2/day
Next 5 days late: â‚¹4/day
Next 20 days days late: â‚¹6/day
More than 30 days: Membership Cancelled.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int late;
    if (scanf("%d", &late) != 1 || late < 0) return 1;
    if (late > 30) puts("Membership Cancelled");
    else {
        int fine = (late < 5 ? late : 5) * 2;
        if (late > 5) fine += (late < 10 ? late - 5 : 5) * 4;
        if (late > 10) fine += (late - 10) * 6;
        printf("Fine = Rs.%d\n", fine);
    }
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
12

Output:
Fine = Rs.42
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  12

  Output:
  Fine = Rs.42
```
- **Boundary/special case — executed**:

  ```text
  Input:
  31

  Output:
  Membership Cancelled
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.