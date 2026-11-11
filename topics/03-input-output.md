# 03. Input and Output

Include `<stdio.h>` for standard input/output functions.

## `printf`
`printf` displays formatted output.

```c
int age = 20;
printf("Age = %d\n", age);
printf("Percentage = %.2f%%\n", 87.50);
```

The `%%` prints a literal percent sign.

## `scanf`
`scanf` reads formatted input. For ordinary scalar variables, pass their addresses with `&`.

```c
#include <stdio.h>

int main(void)
{
    int age;
    float height;

    printf("Enter age and height: ");
    if (scanf("%d %f", &age, &height) != 2) {
        printf("Invalid input\n");
        return 1;
    }

    printf("Age: %d, height: %.2f\n", age, height);
    return 0;
}
```

## Common format specifiers

| Specifier | Meaning |
|---|---|
| `%d` | `int` |
| `%u` | `unsigned int` |
| `%ld` | `long` |
| `%lld` | `long long` |
| `%f` | `float` in `printf`; `float *` target in `scanf` |
| `%lf` | `double *` target in `scanf` |
| `%c` | character |
| `%s` | character array/string up to whitespace |
| `%zu` | `size_t` |

For `printf`, a `float` argument is promoted to `double`, so `%f` is used for both `float` and `double`.

## Reading a character
Whitespace left in the input stream can be consumed by `%c`. A leading space in the format string skips whitespace:

```c
char choice;
scanf(" %c", &choice);
```

## Reading a line with `fgets`
`%s` stops at whitespace and can overflow if the width is not limited. For a whole line, use `fgets`:

```c
char name[80];
if (fgets(name, sizeof name, stdin) != NULL) {
    printf("%s", name);
}
```

If needed, remove the trailing newline with `strcspn` from `<string.h>`.

## Input validation
Always check the return value of `scanf` or `fgets`. It tells you whether input was successfully read.

## Practice
1. Read two integers and print their sum, difference and product.
2. Read a character using `scanf(" %c", &ch)`.
3. Read a full name containing spaces using `fgets`.
