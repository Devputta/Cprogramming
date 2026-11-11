# 13. Strings in C

C has no built-in string object type. A string is a sequence of `char` elements terminated by the null character `'\0'`.

## Declaration

```c
char word[] = "Hello";
```

The array contains `H e l l o \0`, so its size is 6 bytes.

## Reading strings
`scanf("%s", word)` reads only until whitespace. Use a field width to prevent overflow:

```c
char word[30];
scanf("%29s", word);
```

For a line that may contain spaces, use `fgets`:

```c
char line[100];
if (fgets(line, sizeof line, stdin) != NULL) {
    printf("%s", line);
}
```

## Common `<string.h>` functions

| Function | Purpose |
|---|---|
| `strlen(s)` | length before `'\0'` |
| `strcpy(dst, src)` | copy string; destination must be large enough |
| `strncpy(dst, src, n)` | copy up to n characters; may not null-terminate |
| `strcat(dst, src)` | append; destination must have enough space |
| `strcmp(a, b)` | lexicographic comparison; 0 means equal |
| `strchr(s, c)` | find first occurrence of character |
| `strstr(s, sub)` | find first substring occurrence |
| `strcspn(s, chars)` | length of initial segment containing none of chars |

## Manual string traversal

```c
char name[] = "DevPutta";
for (int i = 0; name[i] != '\0'; i++) {
    putchar(name[i]);
}
```

## Slice a string (inclusive end index)

```c
#include <stdio.h>
#include <string.h>

int slice(const char source[], size_t start, size_t end,
          char destination[], size_t capacity)
{
    size_t length = strlen(source);
    if (start > end || end >= length || capacity <= end - start) {
        return 0;
    }

    size_t j = 0;
    for (size_t i = start; i <= end; i++) {
        destination[j++] = source[i];
    }
    destination[j] = '\0';
    return 1;
}

int main(void)
{
    char source[] = "Helloworld";
    char result[20];

    if (slice(source, 3, 6, result, sizeof result)) {
        puts(result); // lowo
    }
    return 0;
}
```

The capacity check reserves one byte for the null terminator. The function returns 1 on success and 0 for invalid indexes or insufficient capacity.

## Count vowels

```c
int count = 0;
for (size_t i = 0; name[i] != '\0'; i++) {
    char c = name[i];
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        count++;
    }
}
```

## Common mistakes
- Forgetting space for `'\0'`.
- Comparing strings with `==`; use `strcmp`.
- Writing beyond the destination array.
- Assuming `%s` reads a full sentence.
- Modifying a string literal; use a writable character array instead.

## Practice
1. Count vowels, consonants, digits and spaces.
2. Reverse a string.
3. Check whether a string is a palindrome.
4. Copy one string into another without `strcpy`.
5. Count words in a line.
