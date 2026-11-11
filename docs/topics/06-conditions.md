# 06. Conditional Statements

Conditions let a program choose which statements to execute.

## `if`
```c
if (temperature > 30) {
    puts("Hot day");
}
```

## `if-else`
```c
if (number % 2 == 0) {
    puts("Even");
} else {
    puts("Odd");
}
```

## `else if` ladder
```c
if (marks >= 90) {
    puts("A");
} else if (marks >= 75) {
    puts("B");
} else if (marks >= 50) {
    puts("C");
} else {
    puts("Needs improvement");
}
```

Conditions are tested from top to bottom. The first true branch runs; the remaining branches are skipped.

## Nested `if`
An `if` inside another `if` is a nested conditional. Use braces to make the relationship clear.

## Truth in C
Zero is false; any nonzero scalar value used as a condition is true. Comparisons normally produce `0` or `1`.

## Common mistakes
- Using `=` instead of `==` in a comparison.
- Forgetting braces and creating a dangling-`else` misunderstanding.
- Writing overlapping ranges in the wrong order.
- Not considering boundary values such as 0, 50, 75 and 90.

## Practice
1. Check whether a year is a leap year.
2. Find the largest of three numbers.
3. Classify marks into grades with clearly defined boundaries.
4. Check whether a character is a vowel (both uppercase and lowercase).
