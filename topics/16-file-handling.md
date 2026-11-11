# 16. File Handling

C uses `FILE *` streams and functions from `<stdio.h>` to work with files.

## Open and close a file

```c
#include <stdio.h>

int main(void)
{
    FILE *file = fopen("notes.txt", "w");
    if (file == NULL) {
        perror("notes.txt");
        return 1;
    }

    if (fprintf(file, "Learning C file handling\n") < 0) {
        perror("write");
        fclose(file);
        return 1;
    }

    if (fclose(file) == EOF) {
        perror("close");
        return 1;
    }
    return 0;
}
```

## Common modes

| Mode | Meaning |
|---|---|
| `"r"` | read existing file |
| `"w"` | write; create or truncate |
| `"a"` | append; create if needed |
| `"r+"` | read and write existing file |
| `"w+"` | read and write; create or truncate |
| `"a+"` | read and append; create if needed |
| Add `b` | binary mode, e.g. `"rb"` |

## Reading text
```c
FILE *file = fopen("notes.txt", "r");
if (file == NULL) {
    perror("notes.txt");
    return 1;
}

char line[128];
while (fgets(line, sizeof line, file) != NULL) {
    fputs(line, stdout);
}
if (ferror(file)) {
    perror("read");
}
fclose(file);
```

## Important functions
- `fopen`, `fclose`
- `fprintf`, `fscanf`
- `fputs`, `fgets`
- `fputc`, `fgetc`
- `fread`, `fwrite` for binary data
- `fseek`, `ftell`, `rewind`

## Common mistakes
- Not checking whether `fopen` returned `NULL`.
- Forgetting to close a file.
- Using `"w"` when you meant to append (it truncates existing content).
- Assuming `fscanf("%s")` reads spaces.
- Not checking for read/write errors.

## Practice
1. Write five lines to a file and read them back.
2. Append a new record without deleting old content.
3. Count characters and lines in a text file.
