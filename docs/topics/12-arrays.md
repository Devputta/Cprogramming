# 12. Arrays

An array stores a fixed number of elements of the same type in contiguous memory.

## Declaration and initialization

```c
int marks[5] = {78, 85, 91, 67, 88};
```

Array indexes begin at zero. For an array of length 5, valid indexes are `0` through `4`.

## Traversing an array

```c
#include <stdio.h>

int main(void)
{
    int values[] = {10, 20, 30, 40};
    int length = (int)(sizeof values / sizeof values[0]);

    for (int i = 0; i < length; i++) {
        printf("%d ", values[i]);
    }
    return 0;
}
```

Output: `10 20 30 40`

`sizeof values / sizeof values[0]` works here because `values` is an array in this scope. When passed to a function as a parameter, an array parameter is adjusted to a pointer; pass the length separately.

## Sum and average
```c
int sum = 0;
for (int i = 0; i < length; i++) {
    sum += values[i];
}
double average = (double)sum / length;
```

## Two-dimensional arrays

```c
int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};
printf("%d\n", matrix[1][2]); // 6
```

C stores multidimensional arrays in row-major order.

## Passing an array to a function
```c
void print_array(const int a[], size_t length)
{
    for (size_t i = 0; i < length; i++) {
        printf("%d ", a[i]);
    }
}
```
The length is a separate parameter. `const` indicates the function will not modify elements through this parameter.

## Common mistakes
- Accessing `a[length]` or a negative index.
- Assuming an array automatically grows.
- Forgetting that array indexes start at zero.
- Trying to calculate array length with `sizeof` after it has decayed to a pointer.

## Practice
1. Find minimum, maximum and sum.
2. Search for an element using linear search.
3. Reverse an array in place.
4. Merge two arrays.
5. Add two matrices.
