# 0x11. C - printf
# Printf Project
This is a project to create a custom printf function (_printf)...by OYEKUNLE DANIEL and OLUWATOSIN MOSUNMOLA

This project implements a basic version of the `printf` function in the C programming language.

## Table of Contents

- [Description](#description)
- [How to Use](#how-to-use)
- [Implementation Details](#implementation-details)
- [Contributing](#contributing)
- [Authors](#authors)
- [License](#license)

## Description

The `printf` function is a standard library function in C used for formatted output. This project provides a basic implementation of this function, allowing you to print formatted text to the console.

## How to Use

To use the `printf` function in your C program, follow these steps:

1. Include the "main.h" header file in your source code:

    ```c
    #include "main.h"
    ```

2. Call the `_printf` function with the desired format string and arguments:

    ```c
    int main() {
        _printf("Hello, %s!\n", "world");
        return 0;
    }
    ```

3. Compile your program, ensuring that "main.h" and the source files are included:

    ```bash
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o your_program
    ```

4. Run your compiled program:

    ```bash
    ./your_program
    ```

## Implementation Details

The project is organized into several functions:

- **`_printf`**: The main function that mimics the behavior of the standard `printf`.
- **`print_buffer`**: Helper function to print the contents of the buffer.
- **Other helper functions**: Functions to handle various format specifiers, flags, widths, and precisions.

## Contributing

Feel free to contribute to this project by opening issues or submitting pull requests. Contributions are welcome!

## Authors

- OYEKUNLE DANIEL
- OLUWATOSIN MOSUNMOLA


## License

This project is licensed under the [MIT License](LICENSE)
