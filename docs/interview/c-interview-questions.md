# C Programming Interview Questions and Answers

This is a curated beginner-to-intermediate preparation set, not a claim to contain every question that could be asked. Practise explaining the reasoning, writing code without an editor, and tracing values manually.

## A. Fundamentals (1–15)

1. **What is C?** A general-purpose procedural language known for portability, performance and low-level memory access.
2. **Who developed C?** Dennis Ritchie developed C at Bell Labs in the early 1970s.
3. **What is a compiler?** A toolchain component that translates source code into lower-level code; a complete build also assembles and links.
4. **What is a header file?** A file commonly containing declarations, macros and type definitions shared by source files.
5. **Why include `stdio.h`?** It declares standard I/O facilities such as `printf`, `scanf` and `fgets`.
6. **What is `main`?** The function where execution of a hosted C program begins.
7. **What does `return 0` mean in `main`?** It indicates successful program termination.
8. **Is C case-sensitive?** Yes. `value` and `Value` are different identifiers.
9. **What is a token?** A smallest lexical unit such as a keyword, identifier, constant, operator or punctuator.
10. **What is an identifier?** A programmer-defined name for an object, function or other entity.
11. **What is a keyword?** A reserved language word such as `int`, `if`, `while` or `return`.
12. **What is a comment?** Source documentation ignored by the compiler: `//` or `/* ... */`.
13. **What is the difference between syntax and logic errors?** Syntax errors violate language grammar; logic errors compile but produce unintended behavior.
14. **What is a linker?** It combines object files and libraries and resolves external references.
15. **What is the purpose of `-Wall -Wextra`?** They enable useful groups of compiler warnings.

## B. Variables, types and operators (16–30)

16. **What is a variable?** A named object that stores a value.
17. **Declaration versus initialization?** Declaration introduces an object; initialization gives it its initial value.
18. **What is a constant?** A value that is not intended to change; `const` prevents modification through that identifier.
19. **What is `sizeof`?** An operator that yields an object's or type's size in bytes as a `size_t`.
20. **Are type sizes fixed by C?** No. The standard specifies minimum ranges and relationships; implementations choose sizes.
21. **What is the difference between `float` and `double`?** Both are floating types; `double` typically provides greater precision and range.
22. **What is type casting?** Explicitly requesting a conversion, e.g. `(double)count`.
23. **What is implicit conversion?** A conversion performed automatically by C's conversion rules.
24. **What is integer division?** Division of integer operands discards the fractional part by truncating toward zero.
25. **What does `%` do?** It produces the remainder for integer operands.
26. **`=` versus `==`?** Assignment versus equality comparison.
27. **`&&` versus `&`?** `&&` is logical AND with short-circuiting; `&` is bitwise AND (or address-of in a unary expression).
28. **`i++` versus `++i`?** Post-increment yields the old value; pre-increment yields the incremented value.
29. **What is operator precedence?** Rules that determine grouping when parentheses are absent. Use parentheses for clarity.
30. **What is short-circuit evaluation?** The right operand of `&&` or `||` is skipped when the left operand determines the result.

## C. Conditions and loops (31–45)

31. **What is an `if` statement?** It conditionally executes a statement when its expression is nonzero.
32. **When use `else if`?** To test multiple mutually exclusive conditions in order.
33. **What is a nested `if`?** An `if` statement inside another control statement.
34. **What type can a `switch` expression have?** An integer type or enumeration type after the applicable integer promotions.
35. **Why use `break` in a switch?** To leave the switch instead of falling through to the next case.
36. **What is a loop?** A control structure that repeats a statement while a condition permits it.
37. **How many times can a `while` body execute?** Zero or more times.
38. **How many times can a `do while` body execute?** At least once.
39. **When is `for` useful?** When initialization, test and update naturally form a counter-controlled loop.
40. **What is an infinite loop?** A loop whose termination condition never becomes false or which otherwise never exits.
41. **What does `break` do in a loop?** Exits the nearest enclosing loop.
42. **What does `continue` do?** Skips the remainder of the current iteration and proceeds to the next iteration.
43. **What is a nested loop?** A loop inside another loop.
44. **How many times does a 3-by-4 nested loop body run?** 12 times, assuming the inner loop runs four times for each of three outer iterations.
45. **Can a `for` loop omit parts?** Yes; initialization, condition or iteration expression can be omitted, but the semicolons remain.

## D. Functions and recursion (46–58)

46. **What is a function?** A reusable named block that performs a task.
47. **What is a function prototype?** A declaration that specifies a function's name, return type and parameter types.
48. **Parameter versus argument?** A parameter appears in the function definition; an argument is supplied in a call.
49. **What is a return type?** The type of value a function returns.
50. **What does `void` mean as a return type?** The function does not return a value.
51. **Does C support call by reference?** C passes all arguments by value. Passing a pointer allows a function to modify the pointed-to object.
52. **What is recursion?** A function calling itself directly or indirectly.
53. **What is a base case?** A condition that stops recursive calls.
54. **What happens without a reachable base case?** Calls may continue until resources are exhausted; the program may fail.
55. **Recursion versus iteration?** Recursion uses function calls; iteration uses loops. Either may be clearer depending on the problem.
56. **What is function scope?** C has block scope for identifiers declared inside blocks; functions themselves have file scope.
57. **Can a function return an array directly?** No. It can return a pointer or a structure containing an array, with careful lifetime design.
58. **Why should a function not return a pointer to its local array?** The local array's lifetime ends when the function returns, leaving a dangling pointer.

## E. Arrays and strings (59–72)

59. **What is an array?** A contiguous sequence of elements of the same type.
60. **What is the first array index?** Zero.
61. **What is an out-of-bounds access?** Accessing an element outside the array's valid range; it causes undefined behavior.
62. **How can array length be calculated?** In the scope where it is an actual array: `sizeof a / sizeof a[0]`.
63. **Does an array parameter preserve its size?** No. An array parameter is adjusted to a pointer parameter; pass the length separately.
64. **What is a multidimensional array?** An array whose elements are themselves arrays.
65. **What is a C string?** A character sequence terminated by `'\0'`.
66. **What is the difference between `'\0'` and `'0'`?** `'\0'` is the null character; `'0'` is the digit character.
67. **What does `strlen` return?** The number of characters before the terminating null character.
68. **Why not compare strings with `==`?** That compares pointer values in typical string expressions, not string contents; use `strcmp`.
69. **What does `strcmp(a, b) == 0` mean?** The strings compare equal.
70. **What is the risk of `strcpy`?** The destination must have enough capacity for all source characters and the null terminator.
71. **`scanf("%s", s)` versus `fgets`?** `%s` stops at whitespace; `fgets` can read spaces and limits the number of characters read.
72. **Why reserve one extra character in a string array?** To store the terminating `'\0'`.

## F. Pointers and memory (73–85)

73. **What is a pointer?** An object that stores an address.
74. **What does `&` do?** In a unary expression, it obtains an object's address.
75. **What does `*` do with a pointer expression?** It dereferences the pointer to access the pointed-to object.
76. **What is a null pointer?** A pointer value guaranteed not to point to an object or function.
77. **What is a wild pointer?** An informal term for an uninitialized pointer.
78. **What is a dangling pointer?** A pointer whose target's lifetime has ended or is no longer valid.
79. **What is pointer arithmetic?** Operations such as incrementing a pointer within an array object; it is constrained by the array boundaries.
80. **What is a `void *`?** A generic object pointer that can hold a pointer to any object type; it must be converted to an appropriate pointer type before dereferencing.
81. **What is a pointer to pointer?** A pointer whose target is another pointer, e.g. `int **`.
82. **What is the difference between `const int *p` and `int *const p`?** The first prevents modification of the pointed-to int through `p`; the second prevents changing `p` itself.
83. **What is a memory leak?** Dynamically allocated memory that is no longer reachable and has not been freed.
84. **What do `malloc` and `free` do?** `malloc` requests dynamic storage; `free` releases storage previously allocated by a compatible allocation function.
85. **Why check `malloc`?** It can return `NULL` if allocation fails.

## G. Structures, files and advanced basics (86–100)

86. **What is a structure?** A user-defined type that groups members, potentially of different types.
87. **What is a union?** A type whose members share overlapping storage.
88. **Structure versus union?** A structure can hold values in all members at once; a union's members share storage.
89. **What is `typedef`?** It creates an alias for a type name.
90. **What is an enum?** A type consisting of named integer constants.
91. **What is file handling?** Reading from and writing to files using streams.
92. **What does `fopen` return?** A `FILE *` on success or `NULL` on failure.
93. **What does mode `"w"` do?** Opens for writing and truncates an existing file, or creates it.
94. **What does mode `"a"` do?** Opens for appending, creating the file if needed.
95. **Why call `fclose`?** To finish stream operations and release associated resources.
96. **What is a preprocessor directive?** An instruction handled before compilation, such as `#include` or `#define`.
97. **What is a macro?** A preprocessor replacement rule defined using `#define`.
98. **What is undefined behavior?** Behavior for which the C standard imposes no requirements; the program cannot rely on a particular result.
99. **What is a segmentation fault?** A common operating-system signal for an invalid memory access; not every invalid C operation necessarily produces one.
100. **How do you improve code quality?** Use clear names, small functions, input validation, compiler warnings, tests and careful memory/index handling.

---

## Output tracing questions

Predict the output before reading the answer. These examples use defined behavior.

### Trace 1 — post-increment

```c
#include <stdio.h>
int main(void)
{
    int i = 4;
    int x = i++;
    printf("%d %d\n", i, x);
}
```

**Output**
```text
5 4
```

**Trace:** `x` receives the old value 4; then `i` becomes 5.

### Trace 2 — pre-increment

```c
#include <stdio.h>
int main(void)
{
    int i = 4;
    int x = ++i;
    printf("%d %d\n", i, x);
}
```

**Output**
```text
5 5
```

**Trace:** `i` increments to 5 first; `x` receives 5.

### Trace 3 — loop accumulation

```c
#include <stdio.h>
int main(void)
{
    int sum = 0;
    for (int i = 1; i <= 4; i++) {
        sum += i;
    }
    printf("%d\n", sum);
}
```

**Output:** `10`

| `i` | `sum` after addition |
|---:|---:|
| 1 | 1 |
| 2 | 3 |
| 3 | 6 |
| 4 | 10 |

### Trace 4 — `do while`

```c
#include <stdio.h>
int main(void)
{
    int n = 8;
    do {
        printf("%d ", n);
        n++;
    } while (n < 8);
}
```

**Output:** `8 `

The body runs once before the condition is tested.

### Trace 5 — array indexes

```c
#include <stdio.h>
int main(void)
{
    int a[] = {3, 6, 9, 12};
    printf("%d\n", a[1] + a[3]);
}
```

**Output:** `18`

`a[1]` is 6 and `a[3]` is 12.

### Trace 6 — string length

```c
#include <stdio.h>
#include <string.h>
int main(void)
{
    char text[] = "C language";
    printf("%zu\n", strlen(text));
}
```

**Output:** `10`

The space counts as a character; the terminating null character does not.

### Trace 7 — recursion

```c
#include <stdio.h>
int total(int n)
{
    if (n == 0) return 0;
    return n + total(n - 1);
}
int main(void)
{
    printf("%d\n", total(3));
}
```

**Output:** `6`

**Unwinding:** `total(3) = 3 + total(2) = 3 + 2 + 1 + 0`.

### Trace 8 — pointer update

```c
#include <stdio.h>
int main(void)
{
    int value = 7;
    int *p = &value;
    *p += 5;
    printf("%d\n", value);
}
```

**Output:** `12`

The pointer refers to `value`; modifying `*p` modifies the original object.

### Trace 9 — switch fall-through

```c
#include <stdio.h>
int main(void)
{
    int choice = 1;
    switch (choice) {
        case 1: printf("A");
        case 2: printf("B"); break;
        default: printf("C");
    }
}
```

**Output:** `AB`

There is no `break` after case 1, so execution falls through to case 2.

### Trace 10 — integer division

```c
#include <stdio.h>
int main(void)
{
    printf("%d %.1f\n", 7 / 2, (double)7 / 2);
}
```

**Output:** `3 3.5`

The first expression uses integer division; the second converts an operand to `double`.

## Coding questions to implement

1. Reverse an integer.
2. Check whether a number is prime.
3. Print Fibonacci numbers iteratively and recursively.
4. Find factorial using a loop and recursion.
5. Find GCD and LCM.
6. Check palindrome number and palindrome string.
7. Count vowels, consonants, digits and spaces.
8. Find the second-largest array element.
9. Sort an array using bubble sort.
10. Search an array using linear search and binary search.
11. Transpose a matrix.
12. Swap two values using pointers.
13. Store and display student records using structures.
14. Copy a file and count its lines.
15. Implement a menu-driven calculator using functions and `switch`.

## Interview preparation advice

For each coding question, explain:
- the approach before coding;
- time and space complexity when relevant;
- boundary cases;
- why the chosen data type is sufficient;
- what happens for invalid input;
- how you tested the result.
