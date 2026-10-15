/* Original question from the reference website:
Logic Enhancers: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
*/
#include <stdio.h>
#include <string.h>

int main(void) {
    char first[10005], second[10005];
    int frequency[26] = {0};
    if (!fgets(first, sizeof first, stdin) || !fgets(second, sizeof second, stdin))
        return 1;
    first[strcspn(first, "\r\n")] = '\0';
    second[strcspn(second, "\r\n")] = '\0';
    for (size_t i = 0; first[i]; ++i) {
        if (first[i] < 'a' || first[i] > 'z') return 1;
        ++frequency[first[i] - 'a'];
    }
    for (size_t i = 0; second[i]; ++i) {
        if (second[i] < 'a' || second[i] > 'z') return 1;
        --frequency[second[i] - 'a'];
    }
    for (int i = 0; i < 26; ++i)
        if (frequency[i] != 0) {
            puts("Not Anagram");
            return 0;
        }
    puts("Anagram");
    return 0;
}
