# Custom Printf Function in C

## Description

In C language, `printf()` function is used to print formatted output to the standard output stdout (which is generally the console screen).  The printf function is a part of the C standard library <stdio.h> and it can allow formatting the output in numerous ways. We've built a custom version of it `_printf` for learning purposes and to gain a deeper understanding of how it works. It can print various data types, such as characters, strings, integers and decimals.

## Function Prototype
The prototype for the custom _printf function is as follows:
```c
int _printf(const char *format, ...);
```

## Return Value
* `_printf()` returns the number of characters printed after successful execution.
* If an error occurs, a negative value is returned.

## Format Specifiers

| Specifiers      | Description |
| ----------- | ----------- |
| %c  | Print single character |
| %s  | Print string of characteres |
| %d  | Print decimal numbers|
| %i  | Print integers |


## Compilation

To compile the code, use the following command:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o printf
```
And then execute:
```bash
./printf
```


## Usage
Here is an example usage:
```c
#include "main.h"

int main(void)
{
    char c = 'H';
    _printf("The current %s is %d\n", "year", 2023);
    _printf("This is a char : %c", c);
    
    return (0);
}

Output: The current year is 2023
Output: This is a char : H
```

## What happens when
When ``` _printf("hello %s\n", "world", 1, 2, 3, 4); ``` 
is called, the function has no way to know that more arguments were passed, so it will just ignore them. The function will not fail. The user is responsible for calling the function the right way.
## Files contained in this repository 

| Name  | Information |
| ------------- | ------------- |
| man_3_printf  | 	Man page of the `_printf()` function.  |
| main.h  | Header file with the data type struct, standard libraries and custom prototypes.  |
| _printf.c  | Main printf function file. Calls other functions.  |
| functions.c | Contains `char`, `string`, `decimal` and `integer` functions. |
| get_functions.c | Function that check format and call another function it format match with character. |
| _putchar.c | Custom putchar function. |

## Authors
XHOANA GJOSHI
SINDI BARDHI