# 14. Pointers

A pointer is an object that stores the address of another object or function.

## Address and dereference operators

```c
int number = 25;
int *ptr = &number;

printf("%d\n", number);  // 25
printf("%p\n", (void *)ptr); // address
printf("%d\n", *ptr);    // 25
```

- `&number` obtains the address of `number`.
- `int *ptr` declares a pointer to `int`.
- `*ptr` dereferences the pointer to access the pointed-to object.

## Modify a value through a pointer

```c
int number = 25;
int *ptr = &number;
*ptr = 50;
printf("%d\n", number); // 50
```

## Swap two integers

```c
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* call: swap(&x, &y); */
```

## Null pointer
A null pointer points to no object. Initialize pointers when no valid target is available:

```c
int *ptr = NULL;
if (ptr != NULL) {
    printf("%d\n", *ptr);
}
```

Never dereference a null, uninitialized, dangling or otherwise invalid pointer.

## Arrays and pointers
In many expressions, an array name converts to a pointer to its first element. This does not mean arrays and pointers are identical types.

```c
int values[] = {4, 8, 12};
int *p = values;
printf("%d\n", *(p + 1)); // 8
```

Pointer arithmetic is only defined within the same array object (or one position past its end); the one-past pointer must not be dereferenced.

## Common mistakes
- Using `*ptr` before assigning a valid address.
- Returning the address of a local automatic variable.
- Dereferencing after the pointed-to object's lifetime ends.
- Confusing `int *p` (pointer declaration) with `*p` (dereference in an expression).

## Practice
1. Swap two numbers using pointers.
2. Find the sum of an array using pointer traversal.
3. Explain the difference between `p`, `&p` and `*p`.
