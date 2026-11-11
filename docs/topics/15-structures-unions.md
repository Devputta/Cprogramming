# 15. Structures and Unions

## Structure
A structure groups members that may have different types. Each member has its own storage within the structure (with possible padding between members).

```c
#include <stdio.h>

struct Student {
    int roll;
    char grade;
    float percentage;
};

int main(void)
{
    struct Student s = {101, 'A', 86.5f};
    printf("%d %c %.1f\n", s.roll, s.grade, s.percentage);
    return 0;
}
```

Use the dot operator (`.`) to access a member. Use `->` when accessing a member through a pointer to a structure.

## `typedef`
```c
typedef struct {
    int x;
    int y;
} Point;

Point p = {3, 4};
```

`typedef` creates a type alias; it does not create a new distinct underlying type.

## Array of structures
```c
struct Student students[2] = {
    {1, 'A', 80.0f},
    {2, 'B', 75.0f}
};
```

## Union
A union's members share the same storage. It can hold a value in one member at a time; reading a different member than the one most recently written has representation and portability considerations.

```c
union Data {
    int number;
    float decimal;
    char letter;
};
```

## Structure versus union

| Structure | Union |
|---|---|
| Members have separate storage | Members overlap in shared storage |
| Can store all members' values at once | Typically use one member's value at a time |
| Size includes all members plus padding | Size is enough for its largest member plus alignment |

## Practice
1. Create a `Book` structure with title, author and price.
2. Store and display three employee records.
3. Create a union and inspect `sizeof` on your compiler.
