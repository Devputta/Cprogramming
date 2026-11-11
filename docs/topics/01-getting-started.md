# 01. Getting Started with C

## What is C?
C is a general-purpose, procedural programming language. It gives programmers direct control over memory and is widely used in operating systems, embedded software, compilers and performance-sensitive applications.

## Basic program structure

```c
#include <stdio.h>

int main(void)
{
    printf("Hello, C!\n");
    return 0;
}
```

**Output**
```text
Hello, C!
```

### Line-by-line
- `#include <stdio.h>` makes standard input/output declarations available, including `printf`.
- `int main(void)` is the program entry point in this example. It returns an integer status.
- `{ ... }` defines the function body.
- `printf` writes formatted text to standard output.
- `\n` moves output to a new line.
- `return 0;` reports successful completion to the operating system.

## Compilation stages
A typical C build passes through preprocessing, compilation, assembly and linking. GCC runs these stages for you.

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic hello.c -o hello
```

## Comments
```c
// Single-line comment

/*
   Multi-line comment
*/
```

Comments explain intent; they are ignored by the compiler.

## Tokens
The smallest meaningful pieces of a C program include keywords (`int`, `return`), identifiers (`total`), constants (`42`), string literals (`"Hi"`), operators (`+`) and punctuators (`;`, `{`, `}`).

## Beginner rules
- C is case-sensitive: `total` and `Total` are different identifiers.
- Most statements end with a semicolon.
- String literals use double quotes; character constants use single quotes.
- Every opened brace must have a matching closing brace.
- Use meaningful variable and function names.

## Common mistakes
| Mistake | Correction |
|---|---|
| `Printf()` | Use lowercase `printf()` |
| Missing `;` | End declarations and statements with semicolons |
| `printf('Hello')` | Use `printf("Hello")` |
| Missing `return` in `main` | Use `return 0;` for clarity |

## Practice
1. Print your name, course and one learning goal on separate lines.
2. Print a three-line rectangle using `*`.
3. Remove the newline from a `printf` call and observe how the next output joins it.
