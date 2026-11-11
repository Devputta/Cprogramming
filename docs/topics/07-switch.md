# 07. `switch` Statement

`switch` selects a branch by comparing one integral or enumeration expression with constant case labels.

```c
#include <stdio.h>

int main(void)
{
    int choice = 2;

    switch (choice) {
        case 1:
            puts("Add");
            break;
        case 2:
            puts("Subtract");
            break;
        case 3:
            puts("Multiply");
            break;
        default:
            puts("Invalid choice");
    }

    return 0;
}
```

**Output**
```text
Subtract
```

## `break` and fall-through
`break` exits the switch. Without it, execution continues into the next case (fall-through). Sometimes fall-through is intentional, but document it clearly.

## `default`
The `default` branch runs when no case matches. It is optional but useful for handling unexpected values.

## When to use
Use `switch` for a menu or a selection among discrete constant values. Use `if-else` for ranges and complex Boolean expressions.

## Practice
1. Build a calculator menu for `+`, `-`, `*` and `/`.
2. Print the number of days for a month (handle February separately if you want leap-year support).
3. Make a menu for area calculations.
