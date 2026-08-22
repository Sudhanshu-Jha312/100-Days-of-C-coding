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
