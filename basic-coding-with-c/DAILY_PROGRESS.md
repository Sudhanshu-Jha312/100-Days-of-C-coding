# Daily Progress and Validation

These checklists track generated files and machine validation only. They do not claim that a learner completed, understood, or personally reviewed a question. A manual-review checkbox is intentionally left unchecked until a person performs that review.

- Scope: Days 1–100 (Questions 1–150), matching the 150 questions currently listed on the reference website.
- Questions planned/generated: 150 / 150
- Programs compiled successfully: 150 / 150
- Normal sample runs completed for all questions; the reference has inconsistencies in the expected outputs for Q120 and Q123 (see below).
- Boundary/special runs completed successfully: 141 / 141 attempted
- Compiler invocations that emitted diagnostics: 13 (all in the original Days 1–62; the 38 new programs compile without warnings).

Status meanings: `generated` means files were created; `compile PASS` means GCC returned success; `sample PASS`/`edge PASS` mean the process exited successfully. These runs are not a substitute for manually comparing every result against an independent oracle. `manual review` remains unrecorded.

The 13 compiler diagnostics are MinGW GCC format-checker warnings on standard C11 `%lld` input conversions in the original Days 1–62. They were kept visible rather than suppressed; all affected programs compiled and their recorded runs exited successfully. The 38 programs in Days 63–100 were compiled again with `gcc -std=c11 -Wall -Wextra -pedantic -lm`; all compiled with no warnings. Q120's first website sample omits a final period despite the input containing it (the other examples preserve punctuation); the program preserves it. Q123's supplied input content produces 33 characters and 6 whitespace-separated words, while the website claims 31 and 5; the solution follows the problem's count definition. Both discrepancies are documented alongside the solutions.
## Day 1 — 10 August 2026
- [x] Q001: Write a program to input two numbers and display their sum. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q002: Write a program to input two numbers and display their sum, difference, product, and quotient. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 2 — 11 August 2026
- [x] Q003: Write a program to calculate the area and perimeter of a rectangle given its length and breadth. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q004: Write a program to calculate the area and circumference of a circle given its radius. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 3 — 12 August 2026
- [x] Q005: Write a program to convert temperature from Celsius to Fahrenheit. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q006: Write a program to swap two numbers using a third variable. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 4 — 13 August 2026
- [x] Q007: Write a program to swap two numbers without using a third variable. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q008: Write a program to find and display the sum of the first n natural numbers. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 5 — 14 August 2026
- [x] Q009: Write a program to calculate simple and compound interest for given principal, rate, and time. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q010: Write a program to input time in seconds and convert it to hours:minutes:seconds format. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 6 — 15 August 2026
- [x] Q011: Write a program to input an integer and check whether it is even or odd using ifâ€“else. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q012: Write a program to input an integer and check whether it is positive, negative or zero using nested ifâ€“else. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 7 — 16 August 2026
- [x] Q013: Write a program to input a year and check whether it is a leap year or not using conditional statements. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q014: Write a program to input a character and check whether it is a vowel or consonant using ifâ€“else. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 8 — 17 August 2026
- [x] Q015: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q016: Write a program to input three numbers and find the largest among them using ifâ€“else. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 9 — 18 August 2026
- [x] Q017: Write a program to find the roots of a quadratic equation and categorize them. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q018: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 10 — 19 August 2026
- [x] Q019: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q020: Write a program to display the day of the week based on a number (1â€“7) using switch-case. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 11 — 20 August 2026
- [x] Q021: Write a program to display the month name and number of days using switch-case for a given month number. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q022: Write a program to find profit or loss percentage given cost price and selling price. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 12 — 21 August 2026
- [x] Q023: Write a program to calculate library fine based on late days as follows: — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q024: Write a program to calculate electricity bill based on units consumed with these rates: — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 13 — 22 August 2026
- [x] Q025: Write a program to implement a basic calculator using switch-case for +, -, *, /, %. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q026: Write a program to print numbers from 1 to n. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 14 — 23 August 2026
- [x] Q027: Write a program to print the sum of the first n odd numbers. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q028: Write a program to print the product of even numbers from 1 to n. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 15 — 24 August 2026
- [x] Q029: Write a program to calculate the factorial of a number. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q030: Write a program to reverse a given number. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 16 — 25 August 2026
- [x] Q031: Write a program to take a number as input and print its equivalent binary representation. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q032: Write a program to check if a number is a palindrome. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 17 — 26 August 2026
- [x] Q033: Write a program to check if a number is an Armstrong number. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q034: Write a program to check if a number is prime. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 18 — 27 August 2026
- [x] Q035: Write a program to print all factors of a given number. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q036: Write a program to find the HCF (GCD) of two numbers. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 19 — 28 August 2026
- [x] Q037: Write a program to find the LCM of two numbers. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q038: Write a program to find the sum of digits of a number. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 20 — 29 August 2026
- [x] Q039: Write a program to find the product of odd digits of a number. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q040: Write a program to find the 1â€™s complement of a binary number and print it. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 21 — 30 August 2026
- [x] Q041: Write a program to swap the first and last digit of a number. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q042: Write a program to check if a number is a perfect number. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 22 — 31 August 2026
- [x] Q043: Write a program to check if a number is a strong number. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q044: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + â€¦ up to n terms. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 23 — 01 September 2026
- [x] Q045: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q046: Write a program to print the following pattern: — generated; compile PASS; sample PASS; edge Not run; manual review: not yet recorded.

## Day 24 — 02 September 2026
- [x] Q047: Write a program to print the following pattern: — generated; compile PASS; sample PASS; edge Not run; manual review: not yet recorded.
- [x] Q048: Write a program to print the following pattern: — generated; compile PASS; sample PASS; edge Not run; manual review: not yet recorded.

## Day 25 — 03 September 2026
- [x] Q049: Write a program to print the following pattern: — generated; compile PASS; sample PASS; edge Not run; manual review: not yet recorded.
- [x] Q050: Write a program to print the following pattern: — generated; compile PASS; sample PASS; edge Not run; manual review: not yet recorded.

## Day 26 — 04 September 2026
- [x] Q051: Write a program to print the following pattern: — generated; compile PASS; sample PASS; edge Not run; manual review: not yet recorded.
- [x] Q052: Write a program to print the following pattern: — generated; compile PASS; sample PASS; edge Not run; manual review: not yet recorded.

## Day 27 — 05 September 2026
- [x] Q053: Write a program to print the following pattern: — generated; compile PASS; sample PASS; edge Not run; manual review: not yet recorded.
- [x] Q054: Write a program to print the following pattern: — generated; compile PASS; sample PASS; edge Not run; manual review: not yet recorded.

## Day 28 — 06 September 2026
- [x] Q055: Write a program to print all the prime numbers from 1 to n. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q056: Read and print elements of a one-dimensional array. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 29 — 07 September 2026
- [x] Q057: Find the sum of array elements. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q058: Find the maximum and minimum element in an array. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 30 — 08 September 2026
- [x] Q059: Count even and odd numbers in an array. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q060: Count positive, negative, and zero elements in an array. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 31 — 09 September 2026
- [x] Q061: Search for an element in an array using linear search. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q062: Reverse an array without taking extra space. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 32 — 10 September 2026
- [x] Q063: Merge two arrays. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q064: Find the digit that occurs the most times in an integer number. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 33 — 11 September 2026
- [x] Q065: Search in a sorted array using binary search. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q066: Insert an element in a sorted array at the appropriate position. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 34 — 12 September 2026
- [x] Q067: Insert an element in an array at a given position. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q068: Delete an element from an array. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 35 — 13 September 2026
- [x] Q069: Find the second largest element in an array. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q070: Rotate an array to the right by k positions. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 36 — 14 September 2026
- [x] Q071: Read and print a matrix. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q072: Find the sum of all elements in a matrix. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 37 — 15 September 2026
- [x] Q073: Find the sum of each row of a matrix and store it in an array. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q074: Find the transpose of a matrix. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 38 — 16 September 2026
- [x] Q075: Add two matrices. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q076: Check if a matrix is symmetric. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 39 — 17 September 2026
- [x] Q077: Check if the elements on the diagonal of a matrix are distinct. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q078: Find the sum of main diagonal elements for a square matrix. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 40 — 18 September 2026
- [x] Q079: Perform diagonal traversal of a matrix. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q080: Multiply two matrices. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 41 — 19 September 2026
- [x] Q081: Count characters in a string without using built-in length functions. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q082: Print each character of a string on a new line. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 42 — 20 September 2026
- [x] Q083: Count vowels and consonants in a string. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q084: Convert a lowercase string to uppercase without using built-in functions. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 43 — 21 September 2026
- [x] Q085: Reverse a string. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q086: Check if a string is a palindrome. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 44 — 22 September 2026
- [x] Q087: Count spaces, digits, and special characters in a string. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q088: Replace spaces with hyphens in a string. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 45 — 23 September 2026
- [x] Q089: Count frequency of a given character in a string. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q090: Toggle case of each character in a string. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 46 — 24 September 2026
- [x] Q091: Remove all vowels from a string. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q092: Find the first repeating lowercase alphabet in a string. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 47 — 25 September 2026
- [x] Q093: Check if two strings are anagrams of each other. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q094: Find the longest word in a sentence. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 48 — 26 September 2026
- [x] Q095: Check if one string is a rotation of another. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q096: Reverse each word in a sentence without changing the word order. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 49 — 27 September 2026
- [x] Q097: Print the initials of a name. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q098: Print initials of a name with the surname displayed in full. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 50 — 28 September 2026
- [x] Q099: Change the date format from dd/04/yyyy to dd-Apr-yyyy. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
- [x] Q100: Print all sub-strings of a string. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 51 — 29 September 2026
- [x] Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 52 — 30 September 2026
- [x] Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 53 — 01 October 2026
- [x] Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 54 — 02 October 2026
- [x] Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 55 — 03 October 2026
- [x] Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than âŒŠn / 2âŒ‹ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 56 — 04 October 2026
- [x] Q106: Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 57 — 05 October 2026
- [x] Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 58 — 06 October 2026
- [x] Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 59 — 07 October 2026
- [x] Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 60 — 08 October 2026
- [x] Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 61 — 09 October 2026
- [x] Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 62 — 10 October 2026
- [x] Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Days 63–100 — Remaining website questions

The current website JSON lists 150 questions. Questions 113–150 continue one per day, matching its stated pace after Day 50. New solutions were generated, compiled, and run on sample and special cases; manual review is not claimed.

## Day 63 — 11 October 2026
- [x] Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 64 — 12 October 2026
- [x] Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 65 — 13 October 2026
- [x] Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram". — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 66 — 14 October 2026
- [x] Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1". — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 67 — 15 October 2026
- [x] Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 68 — 16 October 2026
- [x] Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 69 — 17 October 2026
- [x] Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 70 — 18 October 2026
- [x] Q120: Write a program to take a string input. Change it to sentence case. — generated; compile PASS; sample executed; reference punctuation mismatch documented; edge PASS; manual review: not yet recorded.

## Day 71 — 19 October 2026
- [x] Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 72 — 20 October 2026
- [x] Q122: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 73 — 21 October 2026
- [x] Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines. — generated; compile PASS; executed PASS; website expected-count mismatch documented; manual review: not yet recorded.

## Day 74 — 22 October 2026
- [x] Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc(). — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 75 — 23 October 2026
- [x] Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 76 — 24 October 2026
- [x] Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 77 — 25 October 2026
- [x] Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 78 — 26 October 2026
- [x] Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 79 — 27 October 2026
- [x] Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 80 — 28 October 2026
- [x] Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 81 — 29 October 2026
- [x] Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 82 — 30 October 2026
- [x] Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 83 — 31 October 2026
- [x] Q133: Create an enum for months and print how many days each month has. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 84 — 01 November 2026
- [x] Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 85 — 02 November 2026
- [x] Q135: Assign explicit values starting from 10 and print them. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 86 — 03 November 2026
- [x] Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 87 — 04 November 2026
- [x] Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 88 — 05 November 2026
- [x] Q138: Print all enum names and integer values using a loop. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 89 — 06 November 2026
- [x] Q139: Show that enums store integers by printing assigned values. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 90 — 07 November 2026
- [x] Q140: Define a struct with enum Gender and print person's gender. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 91 — 08 November 2026
- [x] Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 92 — 09 November 2026
- [x] Q142: Store details of 5 students in an array of structures and print all. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 93 — 10 November 2026
- [x] Q143: Find and print the student with the highest marks. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 94 — 11 November 2026
- [x] Q144: Write a function that accepts a structure as parameter and prints its members. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 95 — 12 November 2026
- [x] Q145: Return a structure containing top student's details from a function. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 96 — 13 November 2026
- [x] Q146: Create Employee structure with nested Date structure for joining date and print details. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 97 — 14 November 2026
- [x] Q147: Store employee data in a binary file using fwrite() and read using fread(). — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 98 — 15 November 2026
- [x] Q148: Take two structs as input and check if they are identical. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 99 — 16 November 2026
- [x] Q149: Use malloc() to allocate structure memory dynamically and print details. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.

## Day 100 — 17 November 2026
- [x] Q150: Use pointer to struct to modify and display data using -> operator. — generated; compile PASS; sample PASS; edge PASS; manual review: not yet recorded.
