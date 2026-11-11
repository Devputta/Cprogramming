# 05. Type Conversion and Casting

## Implicit conversion
C may convert one arithmetic type to another automatically.

```c
int whole = 7;
double result = whole;  // int converted to double
```

## Explicit conversion (cast)
A cast requests a conversion:

```c
int a = 7, b = 2;
double answer = (double)a / b;
printf("%.2f\n", answer); // 3.50
```

Without the cast, `a / b` is integer division and produces `3`.

## Narrowing conversions
Converting a value to a type that cannot represent it may lose information. Floating-point to integer conversion discards the fractional part when the value is representable.

```c
double value = 9.8;
int rounded_down_by_conversion = (int)value; // 9
```

This is truncation, not mathematical rounding. Use `round` from `<math.h>` when rounding is required, and link the math library where the platform requires it (often `-lm`).

## Usual arithmetic conversions
When arithmetic operands have different types, C applies conversion rules to determine a common type. Be especially careful when mixing signed and unsigned integers.

## Practice
1. Explain why `5 / 2` and `5.0 / 2` differ.
2. Convert a `float` percentage into an integer and describe the lost fraction.
3. Calculate an average without accidentally performing integer division.
