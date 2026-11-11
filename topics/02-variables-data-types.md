# 02. Variables, Constants and Data Types

## Variables
A variable is a named object whose value can be read or changed while a program runs.

```c
int age = 21;
float temperature = 28.5f;
char grade = 'A';
double distance = 12345.678;
```

Declaration creates a variable; initialization gives it an initial value.

## Common fundamental types

| Type | Typical use | Example format |
|---|---|---|
| `char` | character / small integer | `%c` for character |
| `int` | whole numbers | `%d` |
| `float` | single-precision real number | `%f` |
| `double` | double-precision real number | `%f` in `printf` |
| `short`, `long`, `long long` | integer ranges | use matching format specifiers |

Exact sizes are implementation-dependent. Use `sizeof(type)` to inspect the size on your system.

```c
#include <stdio.h>

int main(void)
{
    int count = 12;
    double price = 19.75;
    char section = 'B';

    printf("Count: %d\n", count);
    printf("Price: %.2f\n", price);
    printf("Section: %c\n", section);
    printf("int bytes: %zu\n", sizeof count);
    return 0;
}
```

## Identifiers
Names may contain letters, digits and underscores, but cannot begin with a digit. Keywords cannot be used as identifiers. Prefer `total_marks` over unclear names such as `tm`.

## Constants
`const` prevents modification through that identifier:

```c
const double PI = 3.141592653589793;
```

A macro constant is handled by the preprocessor:

```c
#define MAX_USERS 100
```

Use `const` for typed objects; use macros when a preprocessor constant is appropriate.

## Scope and lifetime
- Block scope: declared inside `{}` and visible in that block.
- File scope: declared outside functions.
- Automatic local variables normally exist while their block executes.
- `static` changes storage duration; a local static variable retains its value between function calls.

## Common mistakes
- Reading an uninitialized automatic variable.
- Assuming `int` is always 4 bytes.
- Using a format specifier that does not match the argument type.
- Writing `char initial = "M";` instead of `char initial = 'M';`.

## Practice
1. Declare variables for a student's roll number, percentage and grade.
2. Print the size of `char`, `int`, `float` and `double` using `%zu`.
3. Make a `const` tax rate and calculate tax on a given amount.
