# ft_printf

This is a re-implementation of the C standard library function `printf`. The `ft_printf` function has the same functionality as `printf`, but is implemented using only the functions from the `libft` library.

## Usage

To use `ft_printf`, call the `ft_printf` function with the desired format string and arguments. The format string follows the same format as in `printf`, using the `%` character to indicate format specifiers.

## Usage of Variadic Functions in ft_printf

The `ft_printf` function takes a format string and a variable number of arguments, using the `...` syntax to indicate that the arguments are variable. The format string specifies the output format, while the arguments provide the values to be printed.

Inside the `ft_printf` function, the `va_start`, `va_arg`, and `va_end` macros from the `<stdarg.h>` header are used to access the variable arguments. These macros allow the function to iterate through the variable arguments, retrieving each argument based on its type and the format specifier in the format string.

The use of variadic functions in `ft_printf` allows it to handle a wide range of input types and formats, making it a powerful and flexible tool for printing formatted output in C.

## Supported Format Specifiers

`ft_printf` supports the following format specifiers:

- `%c`: print a character
- `%s`: print a string
- `%p`: print a pointer
- `%d`: print a signed integer in base 10
- `%i`: print a signed integer in base 10
- `%u`: print an unsigned integer in base 10
- `%x`: print an unsigned integer in base 16 (lowercase)
- `%X`: print an unsigned integer in base 16 (uppercase)
- `%f`: print a floating-point number in decimal notation

## Return Value

`ft_printf` returns the number of characters printed (excluding the null terminator), or a negative value if an error occurred.
