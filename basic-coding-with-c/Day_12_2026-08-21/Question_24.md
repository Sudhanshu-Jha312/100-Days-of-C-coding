# Question 24: Write a program to calculate electricity bill based on units consumed with these rates:

**Original question wording:**

> Write a program to calculate electricity bill based on units consumed with these rates:
> First 100 units at â‚¹5/unit
> Next 100 units at â‚¹7/unit
> Next 100 units at â‚¹10/unit
> Above at â‚¹12/unit

**Day:** 12

**Date:** 21 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Apply the progressive per-unit electricity rates to each unit band.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_24.c](Question_24.c).

```c
/* Original question from the reference website:
Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at â‚¹5/unit
Next 100 units at â‚¹7/unit
Next 100 units at â‚¹10/unit
Above at â‚¹12/unit
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int units;
    if (scanf("%d", &units) != 1 || units < 0) return 1;
    int bill = (units < 100 ? units : 100) * 5;
    if (units > 100) bill += (units < 200 ? units - 100 : 100) * 7;
    if (units > 200) bill += (units < 300 ? units - 200 : 100) * 10;
    if (units > 300) bill += (units - 300) * 12;
    printf("Bill = Rs.%d\n", bill);
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
250

Output:
Bill = Rs.1700
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  250

  Output:
  Bill = Rs.1700
```
- **Boundary/special case — executed**:

  ```text
  Input:
  0

  Output:
  Bill = Rs.0
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.