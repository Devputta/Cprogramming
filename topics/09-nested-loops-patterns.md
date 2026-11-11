# 09. Nested Loops and Pattern Problems

A nested loop is a loop inside another loop. The inner loop completes its iterations for each iteration of the outer loop.

## Rectangle pattern

```c
#include <stdio.h>

int main(void)
{
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 4; col++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
```

Output:
```text
* * * *
* * * *
* * * *
```

## Trace the loop
- Outer loop chooses the row.
- Inner loop prints four stars in that row.
- `printf("\n")` moves to the next line after the inner loop finishes.
- Total star prints = rows × columns = 3 × 4 = 12.

## Right triangle

```c
for (int row = 1; row <= 4; row++) {
    for (int col = 1; col <= row; col++) {
        printf("* ");
    }
    printf("\n");
}
```

Output:
```text
*
* *
* * *
* * * *
```

## Number triangle

```c
for (int row = 1; row <= 4; row++) {
    for (int col = 1; col <= row; col++) {
        printf("%d ", col);
    }
    printf("\n");
}
```

## Problem-solving method
1. Decide how many rows are required.
2. Identify what changes on each row.
3. Decide how many inner-loop iterations each row needs.
4. Print spaces and symbols in the correct order.
5. Trace a small pattern on paper before coding.

## Practice
Create a solid square, right triangle, inverted triangle, number triangle, multiplication grid and hollow rectangle. Try each using both `for` and `while`.
