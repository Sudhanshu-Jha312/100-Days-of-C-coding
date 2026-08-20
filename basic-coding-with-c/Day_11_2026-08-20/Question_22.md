# Question 22: Write a program to find profit or loss percentage given cost price and selling price.

**Original question wording:**

> Write a program to find profit or loss percentage given cost price and selling price.

**Day:** 11

**Date:** 20 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Compare selling price with cost price and divide the difference by cost price.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_22.c](Question_22.c).

```c
/* Original question from the reference website:
Write a program to find profit or loss percentage given cost price and selling price.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    double cost, selling;
    if (scanf("%lf %lf", &cost, &selling) != 2 || cost <= 0) return 1;
    if (selling > cost) printf("Profit = %.2f%%\n", (selling - cost) * 100 / cost);
    else if (selling < cost) printf("Loss = %.2f%%\n", (cost - selling) * 100 / cost);
    else puts("No profit, no loss");
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
100 120

Output:
Profit = 20.00%
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  100 120

  Output:
  Profit = 20.00%
```
- **Boundary/special case — executed**:

  ```text
  Input:
  100 100

  Output:
  No profit, no loss
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.