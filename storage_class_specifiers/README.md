# Storage Class specifiers

In standard C, the keywords extern and static are storage class specifiers.  
They primarily control the linkage and lifetime of variables and functions, essentially deciding who can see them and how long they stay in memory.

## Extern (external declarations):

The extern keyword is used to declare a variable or function that is defined in another source file.  
It tells the compiler: "This exists somewhere else, don't worry about it for now; the linker will find the actual address later"

Purpose: To share global variables or functions across multiple files.

## Static Declarations (static)

The static keyword has two distinct meanings depending on where it is used:

### 1. Static at File Level (Internal Linkage)

When used outside of a function, it limits the scope of the variable or function to that file only.  
Other files cannot see it, even if they use extern.

Purpose: Encapsulation and avoiding name conflicts between files.

### 2. Static Inside a Function (Block Scope)

When used inside a function, the variable is initialized only once and retains its value between function calls.  
It lives for the entire duration of the program.

Purpose: To maintain state without using a global variable.
