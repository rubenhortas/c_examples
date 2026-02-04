# C examples

A collection of of Standard C examples.

![GitHub code size in bytes](https://img.shields.io/github/languages/code-size/rubenhortas/c_examples)
![GitHub repo size](https://img.shields.io/github/repo-size/rubenhortas/c_examples)

![GitHub](https://img.shields.io/github/license/rubenhortas/c_examples)

## :exclamation: Recommendations

To compile all these examples, I recommend using the `Makefile`:

`$ make`

If you want to compile a single file, I recommend you the following flags:

`$ gcc -g -fsanitize=address -std=c11 -Os example.c -o example_size.out`

## :bookmark: C naming conventions

| Type                       | Notation                    | Example       | Notes                                                                                                                |
|----------------------------|-----------------------------|---------------|----------------------------------------------------------------------------------------------------------------------|
| Constant                   | SCREAMING_SNAKE_CASE        | MY_CONSTANT   |                                                                                                                      |
| Function                   | snake_case                  | my_function() | snake_case is the most traditional C style, but lowerCamelCase is also accepted.                                     |
| Macro                      | SCREAMING_SNAKE_CASE        | MY_MACRO      |                                                                                                                      |
| Struct                     | PascalCase (UpperCamelCase) | MyStruct      | Prefix with "S_" and snake_case with "_t" suffix are also accepted.                                                  |
| Type Definitions (typedef) | snake_case                  | my_typedef    | PascalCase is also accepted.                                                                                         |
| Union | PascalCase         | PascalCase (UpperCamelCase) | MyUnion       | Use PascalCase for the tag name, and then use a typedef with a clear suffix like "_t" for the type definition itself.|
| Variables                  | snake_case                  | my_variable   | snake_case is the most traditional C style, but lowerCamelCase is also accepted.                                     |

## :bookmark: Commentary conventions

| Name           | Example                    | Usage                                                      |
|----------------|----------------------------|------------------------------------------------------------|
| Block comments | /* very long comment... */ | Multi-line descriptions, file headers and function headers |
| Line comments  | // comment...              | Short explanation of a specific line                       |

### File headers

```c
/**
 * @file main.c
 * @author Name
 * @date 2026-01-19
 * @brief Brief description of what this file does.
 */
```

### Function headers

```c
/**
 * Do something...
 *
 * @param input Data to do something...
 * @return Data returned...
 * @note Very important note.
 */
```

## :construction: Compile flags

| ISO      | Flags                             |
|----------|-----------------------------------|
| -std=c11 | Standard ISO/IEC 9899:2011 (2011) |

| Environment | Flags                                                                                       | 
|-------------|---------------------------------------------------------------------------------------------|
| Debug       | gcc -std=c11 -Wall -Wextra -Werror -pedantic -g -fsanitize=address example.c -o example.out |
| Production  | gcc -std=c11 -Wall -Wextra -pedantic -O2 -fstack-protector-all example.c -o example.out     | 

| Goal  | Flags                                           |
|-------|-------------------------------------------------|
| Speed | gcc -std=c11 -O2 example.c -o example_speed.out |
| Size  | gcc -std=c11 -Os example.c -o example_size.out  |

### Code quality

| Flag      | Purpose                    | Explanation                                                                                                                                                   |
|-----------|----------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------|
| -Wall	    | Warnings All               | Enables almost all non-pedantic warnings. This is your baseline.                                                                                              |
| -Wextra   | Extra Warnings             | Enables an additional set of useful warnings not covered by -Wall.                                                                                            |
| -Werror   | Treat Warnings as Errors   | Turns all warnings into compilation errors. This is vital to ensure your code must be perfect before it compiles, removing the temptation to ignore warnings. |
| -pedantic | Strict Standard Compliance | Issues all warnings required by the C standard and those concerning GCC extensions.                                                                           |

### Safety and Debugging

| Flag                  | Purpose           | Explanation                                                                                                                                          |
|-----------------------|-------------------|------------------------------------------------------------------------------------------------------------------------------------------------------|
| -g                    | Debug information | Includes debugging symbols in the executable, allowing you to use tools like GDB to inspect the code line by line. Indispensable during development. |
| -fsanitize=address    | ASan              | Instruments the code to detect common memory access errors (buffer overflow, use-after-free, etc.) at runtime. Highly recommended for testing.       |
| -fstack-protector-all | Stack Protection  | Adds checks to protect against stack buffer overflow attacks.                                                                                        |

### Optimization

| Flag | Purpose             | Explanation                                                                                                                                                           |
|------|---------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| -O2 | Optimization Level 2 | Good balance between speed and compilation time.                                                                                                                      |
| -O3 | Optimization Level 3 | The highest optimization level, including all optimizations from -O2 plus those that may significantly increase code size. Use with caution and only after profiling. |
| -Os | Optimize for Size    | Reduce the size of the executable code. Enables all -O2 optimizations that do not increase code size. Useful for embedded or memory-constrained systems.              |

## :star: Support

If you find these examples useful, please, consider starring crepository!
