# 17. Problem Solving, Debugging and Good Habits

## A repeatable approach
1. Restate the problem in your own words.
2. Identify inputs, outputs and constraints.
3. Work through a small example manually.
4. Write pseudocode or a flowchart.
5. Implement the smallest working solution.
6. Compile with warnings.
7. Test normal, boundary and invalid inputs.
8. Refactor names and remove duplicated logic.

## Compiler warnings
Use:

```bash
gcc -std=c11 -Wall -Wextra -Wpedantic program.c -o program
```

Warnings often reveal mistakes even when compilation succeeds. Read the first diagnostic carefully; later errors may be consequences of an earlier one.

## Debugging with trace tables
For loops, write down the loop counter, condition, important variables and output for each pass.

| Iteration | `i` | `sum` before | `sum` after |
|---|---:|---:|---:|
| 1 | 1 | 0 | 1 |
| 2 | 2 | 1 | 3 |
| 3 | 3 | 3 | 6 |

This trace corresponds to summing 1 through 3.

## Test categories
- Typical input.
- Minimum and maximum allowed values.
- Zero and negative values where relevant.
- Empty string or one-character string.
- Invalid input.
- Cases that could cause overflow or out-of-bounds access.

## Undefined behavior
C does not promise a particular result for undefined behavior. Examples include out-of-bounds array access, dereferencing invalid pointers, using uninitialized automatic variables, and signed integer overflow. Do not explain such examples by claiming a specific output.

## Style checklist
- Use meaningful names.
- Keep functions focused.
- Initialize variables before use.
- Check input and file operations.
- Use braces consistently.
- Avoid magic numbers; name important constants.
- Comment why a decision is made, not every obvious line.

## Practice
Take one old program from the repository, add input validation, compile with warnings and document three test cases.
