# 04. Operators and Expressions

Operators perform operations on values.

## Main categories

| Category | Operators |
|---|---|
| Arithmetic | `+ - * / %` |
| Relational | `< <= > >= == !=` |
| Logical | `&& || !` |
| Assignment | `= += -= *= /= %=` |
| Increment/decrement | `++ --` |
| Bitwise | `& | ^ ~ << >>` |
| Conditional | `condition ? a : b` |
| Other | `sizeof`, comma, address `&`, dereference `*` |

## Arithmetic example
```c
int a = 17, b = 5;
printf("%d\n", a / b); // 3: integer division
printf("%d\n", a % b); // 2: remainder
printf("%.1f\n", (double)a / b); // 3.4
```

When both operands of `/` are integers, the fractional part is discarded (truncation toward zero).

## Relational and logical operators
Relational expressions produce `1` for true and `0` for false.

```c
int age = 22;
int has_id = 1;
if (age >= 18 && has_id) {
    puts("Condition satisfied");
}
```

`&&` and `||` short-circuit: the right operand may not be evaluated when the result is already known.

## Increment and decrement
- `i++` yields the old value, then increments `i`.
- `++i` increments first, then yields the new value.

Avoid expressions that modify the same scalar more than once without a clear sequencing rule. For example, `i = i++ + ++i;` has undefined behavior in C.

## Precedence
Parentheses make intent clearer. For example, write `(a + b) * c` rather than relying on readers to remember precedence.

## Assignment versus equality
- `x = 5` assigns.
- `x == 5` compares.

## Practice
1. Predict the results of `17 / 5`, `17 % 5` and `(float)17 / 5`.
2. Check whether a number is both positive and even.
3. Use the conditional operator to find the larger of two values.
