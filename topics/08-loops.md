# 08. Loops: `for`, `while` and `do while`

Loops repeat a block while a condition permits it.

## `for` loop
Best when initialization, condition and update are naturally grouped.

```c
for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
}
```
Output: `1 2 3 4 5`

Execution order: initialize once → test condition → execute body → update → test again.

## `while` loop
Best when the number of repetitions is not known in advance.

```c
int i = 1;
while (i <= 5) {
    printf("%d ", i);
    i++;
}
```

The condition is checked before the body. It may execute zero times.

## `do while` loop
The body executes at least once because the condition is checked after the body.

```c
int i = 1;
do {
    printf("%d ", i);
    i++;
} while (i <= 5);
```
Notice the semicolon after the `while` condition.

## Trace example
For `for (int i = 1; i <= 3; i++)`, the loop values are:

| Pass | Test | Printed | Update |
|---|---|---|---|
| 1 | `1 <= 3` true | 1 | i becomes 2 |
| 2 | `2 <= 3` true | 2 | i becomes 3 |
| 3 | `3 <= 3` true | 3 | i becomes 4 |
| End | `4 <= 3` false | — | stop |

## `break` and `continue`
- `break` exits the nearest loop or switch.
- `continue` skips the rest of the current loop body and proceeds to the next iteration (the update expression in a `for` loop still runs).

## Infinite loops
A loop may never stop if its condition never becomes false. Check that the loop variable is updated and that the condition is correct.

## Which loop should I choose?
| Need | Suitable loop |
|---|---|
| Known count / counter | `for` |
| Repeat while a condition is true | `while` |
| Body must execute at least once | `do while` |

## Practice
1. Print 1 to N and N to 1.
2. Find the sum of the first N natural numbers.
3. Print a multiplication table.
4. Count digits of an integer.
5. Reverse an integer and check whether it is a palindrome.
6. Find the factorial using a loop.
