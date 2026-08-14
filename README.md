*This project has been created as part of the 42 curriculum by hciftci.*

# Libft

## Description

Libft is the first custom C library project in the 42 curriculum. Its goal is to build a reusable static library by reimplementing selected standard C library functions and adding general-purpose utilities that are useful in later C projects.

The project produces `libft.a`, a static archive containing character checks and conversions, memory and string handling functions, allocation utilities, file-descriptor output helpers, and singly linked-list operations. All public declarations and the `t_list` type are available through `libft.h`.

## Library overview

### Character and conversion functions

| Functions | Purpose |
| --- | --- |
| `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` | Character classification |
| `ft_toupper`, `ft_tolower` | Character case conversion |
| `ft_atoi`, `ft_itoa` | Integer/string conversion |

### Memory and string functions

| Functions | Purpose |
| --- | --- |
| `ft_strlen`, `ft_memset`, `ft_bzero` | Length calculation and memory initialization |
| `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp` | Memory copy, search, and comparison |
| `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr` | String copy, concatenation, search, and comparison |
| `ft_calloc`, `ft_strdup` | Dynamic allocation and string duplication |
| `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split` | String creation and transformation |
| `ft_strmapi`, `ft_striteri` | String iteration with a callback function |

### File-descriptor output functions

`ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, and `ft_putnbr_fd` write characters, strings, lines, and numbers to a chosen file descriptor.

### Linked-list functions

The bonus part defines the `t_list` singly linked-list structure and provides `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, and `ft_lstmap`.

## Instructions

### Compilation

Run the following command from the repository root:

```sh
make
```

This compiles the sources with `-Wall -Wextra -Werror` and creates `libft.a`.

Available Makefile targets:

```sh
make clean   # Remove object files
make fclean  # Remove object files and libft.a
make re      # Rebuild the library from scratch
```

### Using the library

Include `libft.h` in your source file, then link the compiled archive:

```c
#include "libft.h"

int main(void)
{
    ft_putendl_fd("Hello, Libft!", 1);
    return (0);
}
```

```sh
cc -Wall -Wextra -Werror main.c -I. -L. -lft -o program
./program
```

Functions that allocate memory return memory owned by the caller and must be released with `free` when no longer needed. For linked-list deletion functions, provide an appropriate `del` callback to release each node's content when necessary.

## Resources

- [The C Standard Library reference](https://en.cppreference.com/w/c)
- [POSIX Programmer's Manual](https://man7.org/linux/man-pages/)
- [C Library Functions Manual — FreeBSD](https://man.freebsd.org/cgi/man.cgi)
- [42 Norm](https://github.com/42School/norminette)

### AI usage

AI assistance for this documentation was limited to this README: translating it to English, structuring the required sections, grouping the implemented functions, and writing the build and usage examples. No C source, header, or Makefile files were generated or modified by AI during this documentation task.

## License

This project was created for educational purposes as part of the 42 curriculum.
