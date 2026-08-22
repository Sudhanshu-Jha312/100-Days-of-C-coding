# Question 25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

**Original question wording:**

> Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

**Day:** 13

**Date:** 22 August 2026

## Aim

To complete the requested task using a correct, standalone C program.

## Algorithm

1. **Input:** Read the values required by the question; open the named file when the task is file-based.
2. **Process:** Select the requested arithmetic operation with a switch statement.
3. **Output:** Display the requested value, classification, sequence, or file result.

## C Program

Complete standalone source: [Question_25.c](Question_25.c).

```c
/* Original question from the reference website:
Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
*/
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    long long a, b;
    char op;
    if (scanf("%lld %c %lld", &a, &op, &b) != 3) return 1;
    switch (op) {
        case '+': printf("%lld\n", a + b); break;
        case '-': printf("%lld\n", a - b); break;
        case '*': printf("%lld\n", a * b); break;
        case '/': if (b == 0) puts("Cannot divide by zero"); else printf("%.2f\n", (double)a / b); break;
        case '%': if (b == 0) puts("Cannot divide by zero"); else printf("%lld\n", a % b); break;
        default: puts("Invalid operator");
    }
    return 0;
}
```

## Sample Output

Observed from running the sample input below:

```text
Input:
8 * 7

Output:
56
```


## Explanation

`main` is where execution begins. Read the input described in the algorithm, then carry out the processing step using the variables, arrays, loops, and conditions shown in the C program. If the task uses a file, the program checks that it opened and reports I/O errors. The final output statement displays or writes the result, and `return 0` indicates successful completion.

## Result

The program implements the requested operation and produces the result for the supplied input.

## Test Cases

- **Normal case — executed:**

  ```text
    Input:
  8 * 7

  Output:
  56
```
- **Boundary/special case — executed**:

  ```text
  Input:
  10 / 0

  Output:
  Cannot divide by zero
  ```

**Validation status:** Compilation PASS; sample run PASS; boundary run PASS. Manual review: not yet recorded.