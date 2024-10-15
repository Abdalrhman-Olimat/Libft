# Libft - My Custom C Library
<p align="center">
    <img src="https://raw.githubusercontent.com/alx-sch/42_libft/main/.assets/libfte.png" alt="libft_badge.png" />
</p>

## Introduction

Welcome to my `Libft` project! 🎉 Libft is a personal library of C functions designed to enhance standard library functionalities. This project serves as a foundational stepping stone for future projects in the 42 School curriculum, allowing for a deeper understanding of C programming, memory management, and the implementation of algorithms.
## Features
- A collection of essential C functions including string manipulation, memory management, and more.
- Improved understanding of C standard library functionalities.
- Enhanced skills in manual memory management and error handling.
- Compliance with the 42 School standards for project submissions.
- Libft includes a variety of functions that are categorized as follows:

### 1. Memory Manipulation

- **`ft_memset`:** Sets a block of memory to a specific value.
- **`ft_bzero`:** Zeros out a block of memory.
- **`ft_memcpy`:** Copies a block of memory from one location to another.
- **`ft_memccpy`:** Copies a block of memory up to a specific character.
- **`ft_memmove`:** Moves a block of memory, handling overlaps correctly.
- **`ft_memchr`:** Locates a character in a block of memory.
- **`ft_memcmp`:** Compares two blocks of memory.

### 2. String Manipulation

- **`ft_strlen`:** Calculates the length of a string.
- **`ft_strdup`:** Duplicates a string.
- **`ft_strcpy`:** Copies a string.
- **`ft_strncpy`:** Copies a specific number of characters from a string.
- **`ft_strcat`:** Concatenates two strings.
- **`ft_strncat`:** Concatenates a specific number of characters from two strings.
- **`ft_strlcat`:** Concatenates two strings, ensuring the result is null-terminated.

### 3. Character Checks and Conversions

- **`ft_isalpha`:** Checks if a character is an alphabetic letter.
- **`ft_isdigit`:** Checks if a character is a digit.
- **`ft_isalnum`:** Checks if a character is alphanumeric.
- **`ft_isascii`:** Checks if a character is an ASCII character.
- **`ft_isprint`:** Checks if a character is printable.
- **`ft_toupper`:** Converts a character to uppercase.
- **`ft_tolower`:** Converts a character to lowercase.

### 4. Additional Utility Functions

- **`ft_atoi`:** Converts a string to an integer.
- **`ft_itoa`:** Converts an integer to a string.
- **`ft_strchr`:** Locates a character in a string.
- **`ft_strrchr`:** Locates the last occurrence of a character in a string.
- **`ft_strstr`:** Finds the first occurrence of a substring.
- **`ft_strnstr`:** Finds the first occurrence of a substring within a specific number of characters.
- **`ft_strcmp`:** Compares two strings.
- **`ft_strncmp`:** Compares a specific number of characters from two strings.

## Getting Started
### Installation
To install Libft, follow these steps:

Clone the repository:

```bash
git clone https:https://github.com/Abdalrhman-Olimat/Libft.git
```
Navigate to the project directory:
```c
cd libft
```
Compile the library:
```c
make
```
### Usage
Once the library is compiled, you can include it in your C projects by adding the following line to your source files:
```c
#include "libft.h"
```
Link the library during compilation:
```c
gcc -o your_program your_program.c -L. -lft
```
## Contributing
Contributions are welcome! If you have suggestions for improvements or new features, feel free to open an issue or submit a pull request.
## Contact
If you have any questions or suggestions, please reach out to me via <a href="mailto:abdalrhmanolimat911@gmail.com" target="_blank"><img alt='gmail' src='https://img.shields.io/badge/Gmail-D14836?style=flat-square&logo=gmail&logoColor=white'/> </a>  or  <a href='https://https://www.linkedin.com/in/abdalrhman-olimat-ba2357215/' target="_blank"><img alt='Linkedin' src='https://img.shields.io/badge/LinkedIn-100000?style=flat-square&logo=Linkedin&logoColor=white&labelColor=0A66C2&color=0A66C2'/></a>
