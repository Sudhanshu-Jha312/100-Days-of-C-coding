/* Original question from the reference website:
File Handling: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
*/
#include <ctype.h>
#include <stdio.h>

int main(void) {
    FILE *input = fopen("input.txt", "r");
    if (!input) {
        perror("Could not open input.txt");
        return 1;
    }
    FILE *output = fopen("output.txt", "w");
    if (!output) {
        perror("Could not open output.txt");
        fclose(input);
        return 1;
    }
    int ch, failed = 0;
    while ((ch = fgetc(input)) != EOF)
        if (fputc(toupper((unsigned char)ch), output) == EOF) {
            failed = 1;
            break;
        }
    if (ferror(input)) failed = 1;
    if (fclose(input) != 0) failed = 1;
    if (fclose(output) != 0) failed = 1;
    if (failed) {
        fputs("Error: conversion failed.\n", stderr);
        return 1;
    }
    puts("Converted text written to output.txt");
    return 0;
}
