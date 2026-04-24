*This project has been created as part of the 42 curriculum by jduque-n.*

# Description

The Libft project consists on structuring a library with basic C library functions built from the start to be used for other projects. This library contains functions associated with string, memory, data and file manipulation, and an added list of functions used to operate with nodes and linked lists.

# Instructions

In order to successfully execute this library, it is required:

- A C language compiler (`clang` is normally used);
- `make` command installed;

## How to compile

The projects operated using the `Makefile` associated with it to execute the necessary commands using the `-Wall -Wextra -Werror`.

This inputed list of *bash* commands for the terminal will allow the user to perform the following sets of commands:

```bash
# Compile all the listed functions (.c) on the Makefile and generate object files (.o)
make

# Clear object files 
make clean

# Clear object and generated library libft.a
make fclean

# Recompile from the start (for compiling updated files)
make re
```

## How to extract project from Repository (GitHub)

To extract the necessary files to generate the libft library in any computer and to use it, the following commands must the executed:

1. Clone the repository:
   ```bash
   git clone git@github.com:josemariafernandes1-commits/Libft.git
   ```

2. Build the library:
   ```bash
   make -C libft
   ```

3. Include the header in your C file (to test):
   ```
   #include "libft.h"
   ```

4. Compile your program with the library:
   ```bash
   cc my_program.c -L. -lft -o my_program
   ```

# Resources

## List of resources

- `man` command explanations
- LLM consultation (Google Gemini AI)
- Colaboration with peers
- Apaptation of existing README.md files from other GitHub/Codeberg users 
	- Great thank you to [@mogi](https://codeberg.org/mogi) for showing how to write my first README.rm file by example!

## LLM Usage Disclosure

As a general practice, this project included the auxiliary consultation of Large Language Models (LLMs) to refine the code and to make it more compatible with various different inputs, along with this very README for elaboration of the titles and separators.

## Tests performed

To confirm and test all the functions present in this library, the following resources were utilized

- Google Gemini AI, for explaining the logic of pointers, nodes and memory management functions.
- [libftTester](https://github.com/Tripouille/libftTester), provided by [@Tripouille](https://github.com/Tripouille) (Thank you very much!!)
- [francinette](https://github.com/xicodomingues/francinette.git), created by [@xicodomingues](https://github.com/xicodomingues) (Also, a great thank you!)

# Additional Section

## List of Functions and Explanation

This project included the writing of functions adapted from the original versions located in the libc, of functions that were made specifically to operate more easily with communicating between different function, and functions designed to operate with dynamic structures such as linked lists.

### 🔹1 - Libc adapted functions 

- These functions were designed to mimic the behavior of functions located in the Libc library:

#### Conversion / Manipulation / Verification

  Name | Function Declaration | Description of Operation
  --|--|--
  [ft_atoi](./ft_atoi.c) | `int  ft_atoi(const char *nptr)` | Converts `nptr` to int
  [ft_isalpha](./ft_isalpha.c) | `int  ft_isalpha(int c);` | Checks if `c` is an alphabetic character
  [ft_isdigit](./ft_isdigit.c) | `int  ft_isdigit(int c);` | Checks if `c` is a digit character
  [ft_isalnum](./ft_isalnum.c) | `int  ft_isalnum(int c);` | Checks if `c` is an alphanumeric character
  [ft_isascii](./ft_isascii.c) | `int  ft_isascii(int c);` | Checks if `c` is in ascii table
  [ft_isprint](./ft_isprint.c) | `int  ft_isprint(int c);` | Checks if `c` is a printable character
  [ft_toupper](./ft_toupper.c) | `int  ft_toupper(int c);` | Converts lowercase letter `c` to its uppercase equivalent
  [ft_tolower](./ft_tolower.c) | `int  ft_tolower(int c);` | Converts uppercase letter `c` to its lowercase equivalent

#### String Duplication / Manipulation / Comparison

  Name | Function Declaration | Description of Operation
  --|--|--
  [ft_strlen](./ft_strlen.c) | `size_t  ft_strlen(const char *s);` | Gets length of `s`
  [ft_strlcpy](./ft_strlcpy.c) | `size_t  ft_strlcpy(char *dst, const char *src, size_t size);` | Copies `size - 1` characters from `src` into `dst`
  [ft_strlcat](./ft_strlcat.c) | `size_t  ft_strlcat(char *dst, const char *src, size_t size);` | Appends `size - strlen(dst) - 1` bytes from `src` to `dst`
  [ft_strchr](./ft_strchr.c) | `char  *ft_strchr(const char *s, int c)` | Gets first occurence of `c` in `s`
  [ft_strrchr](./ft_strrchr.c) | `char  *ft_strrchr(const char *s, int c)` | Gets last occurence of `c` in `s`
  [ft_strncmp](./ft_strncmp.c) | `int  ft_strncmp(const char *s1, const char *s2, size_t n)` | Compares the first `n` bytes of `s1` and `s2`
  [ft_strnstr](./ft_strnstr.c) | `char  *ft_strnstr(const char *big, const char *little, size_t len)` | Locates `little` in `big` where no more than `len` characters are searched
  [ft_strdup](./ft_strdup.c) | `char *ft_strdup(const char *s);` | Duplicates `s` into heap
  
#### Memory Duplication / Allocation / Comparison

  Name | Function Declaration | Description of Operation
  --|--|--
  [ft_memset](./ft_memset.c) | `void  *ft_memset(void *s, int c, size_t n);` | Fills `s` with `n` bytes `c`
  [ft_bzero](./ft_bzero.c) | `void  ft_bzero(void *s, size_t n);` | Fills `s` with `n` bytes `'\0'`
  [ft_memcpy](./ft_memcpy.c) | `void  *ft_memcpy(void *dest, const void *src, size_t n);` | Copies `n` bytes from non-overlapping memory areas `src` to `dest`
  [ft_memmove](./ft_memmove.c) | `void  *ft_memmove(void *dest, const void *src, size_t n);` | Copies `n` bytes from `src` to a temporary buffer and from that buffer to `dest`
  [ft_memchr](./ft_memchr.c) | `void  *ft_memchr(const void *s, int c, size_t n)` | Scans `n` bytes of `s` for first instance of `c`
  [ft_memcmp](./ft_memcmp.c) | `int  ft_memcmp(const void *s1, const void *s2, size_t n)` | Compares the first `n` bytes of `s1` and `s2`
  [ft_calloc](./ft_calloc.c) | `void  *ft_calloc(size_t nmemb, size_t size);` | Allocates `nmemb * size` and initializes it to `0`

### 🔹2 - Utilitary (Additional) Functions 

- These functions were created to facilitate the execution of complex logical operations:

  Name | Function Declaration | Description of Operation
  --|--|--
  [ft_substr](./ft_substr.c) | `char  *ft_substr(char const *s, unsigned int start, size_t len);` | Gets substring from `s` starting at index `start` and has maximum length `len`
  [ft_strjoin](./ft_strjoin.c) | `char  *ft_strjoin(char const *s1, char const *s2);` | Concatenates `s1` and `s2` into a new string
  [ft_strtrim](./ft_strtrim.c) | `char  *ft_strtrim(char const *s1, char const *set);` | Removes `set` from beginning and end of `s1`
  [ft_split](./ft_split.c) | `char  **ft_split(char const *s, char c);` | Gets array of new strings that result from splitting `s` using `c`
  [ft_itoa](./ft_itoa.c) | `char  *ft_itoa(int n);` | converts `n` to string
  [ft_strmapi](./ft_strmapi.c) | `char  *ft_strmapi(char const *s, char (*f)(unsigned int, char));` | Gets a new string resulting from the application of `f` in every character of `s`
  [ft_striteri](./ft_striteri.c) | `void  ft_striteri(char *s, void (*f)(unsigned int, char*));` | Applies `f` to every character in `s`
  [ft_putchar_fd](./ft_putchar_fd.c) | `void  ft_putchar_fd(char c, int fd);` | Outputs `c` to file descriptor `fd`
  [ft_putstr_fd](./ft_putstr_fd.c) | `void  ft_putstr_fd(char *s, int fd);` | Outputs `s` to file descriptor `fd`
  [ft_putendl_fd](./ft_putendl_fd.c) | `void  ft_putendl_fd(char *s, int fd);` | Outputs `s` followed by `\n` to file descriptor `fd`
  [ft_putnbr_fd](./ft_putnbr_fd.c) | `void  ft_putnbr_fd(int n, int fd);` | Outputs `n` to file descriptor `fd`

### 🔹3 - Linked Lists (Nodes)

- These functions were created in order to be able to operate with complex structures made from structs that can store variable content while maintaining the memory heap allocated connected:

  Name | Prototype | Description
  --|--|--
  [ft_lstnew](./ft_lstnew.c) | `t_list  *ft_lstnew(void *content);` | Creates new node with content `content` and next `NULL`
  [ft_lstadd_front](./ft_lstadd_front.c) | `void  ft_lstadd_front(t_list **lst, t_list *new);` | Adds node `new` at the beginning of `lst`
  [ft_lstsize](./ft_lstsize.c) | `int  ft_lstsize(t_list *lst);` | Counts number of nodes in `lst`
  [ft_lstlast](./ft_lstlast.c) | `t_list  *ft_lstlast(t_list *lst);` | Gets last node of `lst`
  [ft_lstadd_back](./ft_lstadd_back.c) | `void  ft_lstadd_back(t_list **lst, t_list *new);` | Adds node `new` at the end of `lst`
  [ft_lstdelone](./ft_lstdelone.c) | `void  ft_lstdelone(t_list *lst, void (*del)(void*));` | Frees the node `lst` and its content, latter with `del`
  [ft_lstclear](./ft_lstclear.c) | `void  ft_lstclear(t_list **lst, void (*del)(void*));` | Deletes all the nodes starting at the one pointed to by `lst` and frees their contents
  [ft_lstiter](./ft_lstiter.c) | `void  ft_lstiter(t_list *lst, void (*f)(void *));` | Applies `f` iteractively to the list `lst`
  [ft_lstmap](/ft_lstmap.c) | `t_list  *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));` | Gets new list resulting of the application of `f` to list `lst` iteractively
