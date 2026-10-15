# Question 132: Enum: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value. Read enum name.

**Original question wording:**

> Enum: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value. Read enum name.

**Day:** 82
**Date:** 30 October 2026

## Aim

To implement this exercise as a standalone, beginner-friendly C11 program with validated input and appropriate file-error handling.

## Algorithm

Map the input traffic-light name to an enum and use switch to print the action.

## C Program

Source: [Question_132.c](Question_132.c).

## Sample Input and Output

```text
Input:
GREEN

Output:
Go
```



## Explanation

A switch makes each traffic-light action explicit.



## Result

The program performs the requested operation and handles the documented sample and special case.

## Test Cases

- **Normal case — executed:**

  ```text
  Input:
  GREEN

  Output:
  Go
  ```
- **Edge/special case — executed:**

  ```text
  Input:
  RED

  Output:
  Stop
  ```

**Validation status:** GCC `-std=c11 -Wall -Wextra -pedantic` compile PASS; normal sample run PASS; edge/special test run PASS.
