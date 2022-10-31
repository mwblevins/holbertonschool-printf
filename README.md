# holbertonschool-printf
Printf project for Holberton

:goat: :water_buffalo: :penguin: :octopus: :octocat:

# Michael and Evan's __*printf*__ Project!

## Welcome to our _printf project!
We are trying to make a simple function to print anything by taking input from a string and display it/them using certain specifiers.

## How To Use _printf!
You can start using our code by using _printf in your function or just a simple main function like so:
```
#include "main.h" /* our .h file contains prototypes to assist our _printf */

int main(void) /* main function that returns 0 on success */
{
    _printf("Hello_World\n"); /* this should print "Hello_World" followed by a new line */
    
    return (0);
}
```

### Compilation:
```
$ gcc *.c -o print
```
### Output:
```
$ ./print
Hello, World
$
```
## Low Level Description
1. Output could be any character, string, integer, percentage, hexadecimal, and more
2. Input would be and c (character), s (string), % (percentage or modulo), d (digit), i (integer).....
3. Formatting would be using certain specifiers: %c, %s, %d, %i, %%, and more...
4. An example of using your code, and the output

    1. ```
int main(void)
{
    _printf("Testing the print, %%, %s, %d, %i, %c = working\n", *insert variables here*);
    return (0);
}
$ ./print
$ Testing the print, %37, hello_world, 2, 12, B = working
$
```

## Formatting
* Specifiers: %c, %s, %d, %i, %%, and more...
* If anything isn't used properly, it would either display (-1), print "%c" instead of a character or expected output, or might not even run depending on what you get wrong.
*Specifier Table:

|   Specifier   |    Output     |
| ------------- | :-----------: |
|       %c      |   character   |
|       %s      |    string     |
|       %d      |     digit     |
|       %i      |    integer    |
|       %%      |  percentage   |


##
