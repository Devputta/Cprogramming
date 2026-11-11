# 11. Recursion

Recursion occurs when a function calls itself to solve a smaller version of the same problem.

Every correct recursive solution needs:
1. **Base case** — stops further calls.
2. **Recursive case** — makes progress toward the base case.

## Factorial example

```c
#include <stdio.h>

unsigned long long factorial(unsigned int n)
{
    if (n <= 1) {
        return 1;                 // base case
    }
    return n * factorial(n - 1); // recursive case
}

int main(void)
{
    printf("%llu\n", factorial(5));
    return 0;
}
```

Output: `120`

## Call trace for factorial(4)

| Call | Waiting operation | Next call |
|---|---|---|
| `factorial(4)` | `4 * ...` | `factorial(3)` |
| `factorial(3)` | `3 * ...` | `factorial(2)` |
| `factorial(2)` | `2 * ...` | `factorial(1)` |
| `factorial(1)` | returns 1 | base case |

Unwinding: `factorial(2)=2`, `factorial(3)=6`, `factorial(4)=24`.

## Sum from 1 to N

```c
int sum_n(int n)
{
    if (n <= 0) return 0;
    return n + sum_n(n - 1);
}
```

## Fibonacci
A simple recursive Fibonacci implementation is easy to understand but repeats work and becomes slow for larger `n`. Iteration or memoization is usually better.

```c
unsigned long long fib(unsigned int n)
{
    if (n < 2) return n;
    return fib(n - 1) + fib(n - 2);
}
```

## Recursion versus loops
| Recursion | Iteration |
|---|---|
| Uses function calls and call stack | Repeats with loop constructs |
| Often clear for tree/divide-and-conquer problems | Often uses less call overhead |
| Needs a valid base case | Needs a terminating loop condition |
| Deep calls can exhaust stack | Can avoid deep call stacks |

## Common mistakes
- Missing or unreachable base case.
- Recursive call does not move toward the base case.
- Using recursion for huge input without considering stack depth.
- Integer overflow in factorial or Fibonacci.

## Practice
1. Print numbers from N down to 1 using recursion.
2. Find the sum of digits recursively.
3. Reverse a string recursively.
4. Find the greatest common divisor using Euclid's algorithm.
