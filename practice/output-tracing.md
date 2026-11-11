# Output Tracing Worksheet

Write your predicted output in a notebook before compiling. Then explain each line using variable values.

## Exercise 1 — while loop
```c
int i = 2;
while (i <= 8) {
    printf("%d ", i);
    i += 2;
}
```
Your trace: record `i` before the test, printed value and updated value.

## Exercise 2 — continue
```c
for (int i = 1; i <= 6; i++) {
    if (i == 3) continue;
    printf("%d ", i);
}
```

## Exercise 3 — nested loops
```c
for (int row = 1; row <= 3; row++) {
    for (int col = 1; col <= 2; col++) {
        printf("%d%d ", row, col);
    }
}
```

## Exercise 4 — function call
```c
int twice(int x) {
    return x * 2;
}
int main(void) {
    int n = 5;
    printf("%d %d\n", twice(n), n);
}
```

## Exercise 5 — array update
```c
int a[] = {2, 4, 6};
a[1] = a[0] + a[2];
printf("%d %d %d\n", a[0], a[1], a[2]);
```

## Exercise 6 — string characters
```c
char word[] = "cat";
for (int i = 0; word[i] != '\\0'; i++) {
    printf("%c-", word[i]);
}
```

## Exercise 7 — pointer
```c
int x = 10;
int y = 20;
int *p = &x;
*p = y + 1;
printf("%d %d\n", x, y);
```

## Answer key

<details>
<summary>Show answers</summary>

1. `2 4 6 8`
2. `1 2 4 5 6`
3. `11 12 21 22 31 32`
4. `10 5`
5. `2 8 6`
6. `c-a-t-`
7. `21 20`

</details>

## Trace table template

| Step | Condition / expression | Variable values | Output |
|---:|---|---|---|
| 1 | | | |
| 2 | | | |
| 3 | | | |
| 4 | | | |
