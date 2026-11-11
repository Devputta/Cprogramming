# 10. Functions

A function is a named block of code that performs a task. Functions help divide a program into smaller, reusable units.

## Declaration, call and definition

```c
#include <stdio.h>

int add(int a, int b);  // declaration / prototype

int main(void)
{
    int result = add(4, 6); // call
    printf("%d\n", result);
    return 0;
}

int add(int a, int b)       // definition
{
    return a + b;
}
```

Output: `10`

## Function components
- Return type: the type of value returned (`int` here).
- Function name: `add`.
- Parameters: `a` and `b`.
- Arguments: `4` and `6` supplied by the call.
- `return`: sends a value back to the caller.

Use `void` when a function returns no value. In a function declaration, `void` inside the parameter list means it takes no parameters: `int show(void);`.

## Call by value
C passes arguments by value. The function receives copies of the argument values.

```c
void change(int x)
{
    x = 99;
}
```
Calling `change(number)` does not change the caller's `number`.

## Modifying caller data through pointers
Pass an address when the function needs to modify an object owned by the caller:

```c
void set_to_99(int *x)
{
    if (x != NULL) {
        *x = 99;
    }
}
```
Call it with `set_to_99(&number);`.

This is often informally called “call by reference” in beginner lessons, but technically C still passes the pointer value by value.

## Recursion versus iteration
A function can call itself; this is recursion. See [Recursion](11-recursion.md).

## Common mistakes
- Calling a function before a declaration is visible.
- Returning a value that does not match the return type.
- Forgetting to return a value from a non-`void` function.
- Confusing a parameter with an argument.
- Returning the address of a local automatic variable.

## Practice
1. Write functions for square, cube and maximum of two numbers.
2. Write a function that checks whether a number is prime.
3. Write a function that swaps two integers using pointers.
