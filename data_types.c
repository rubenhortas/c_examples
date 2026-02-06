#include <float.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

int main() {
    /***************************************************************************
     * Constants
     *
     * A constant value remains immutable throughout the program execution.
     **************************************************************************/

    const int five = 5;

    /***************************************************************************
     * Data types
     **************************************************************************/

    short sh = SHRT_MAX;
    unsigned short ush = USHRT_MAX;
    int i = INT_MAX;
    unsigned int ui = UINT_MAX;
    long l = LONG_MAX;
    unsigned long ul = ULONG_MAX;
    long long ll = LLONG_MAX;
    unsigned long long ull = ULLONG_MAX;
    float f = FLT_MAX;  // 4 bytes
    double d = DBL_MAX; // 8 bytes
    long double ld = LDBL_MAX;
    char c = 'A';
    char s[] = "Hello, world!";
    bool bt = true;
    bool bf = false;

    /***************************************************************************
     * Format specifiers
     **************************************************************************/

    printf("my constant will always be %d\n", five);
    // output: my constant will always be 5

    printf("short %%hd: '%hd'\n", sh);
    // output: short %hd: '32767'

    printf("unsigned short %%hu: '%hu'\n", ush);
    // output: unsigned short %hu: '65535'

    printf("int %%d: '%d'\n", i);
    // output: int %d: '2147483647'

    printf("unsigned int %%u: '%u'\n", ui);
    // output: unsigned int %u: '4294967295'

    printf("long %%ld: '%ld'\n", l);
    // output: long %ld: '9223372036854775807'

    // %i can interpret numbers in octal or hexadecimal if they start with 0 or
    // 0x, but in printf, the result of %li and %ld is the same.
    printf("long %%li: '%li'\n", l);
    // output: long %li: '9223372036854775807'

    printf("unsigned long %%lu: '%lu'\n", ul);
    // output: unsigned long %lu: '18446744073709551615'

    // %i can interpret numbers in octal or hexadecimal if they start with 0 or
    // 0x, but in printf, the result of %li and %ld is the same.
    printf("unsigned long %%li: '%li'\n", ul);
    // output: unsigned long %li: '18446744073709551615'

    printf("long long %%lld: '%lld'\n", ll);
    // output:

    // %i can interpret numbers in octal or hexadecimal if they start with 0 or
    // 0x, but in printf, the result of %lli and %lld is the same.
    printf("long long %%lli: '%lli'\n", ll);
    // output:

    printf("unsigned long long %%llu: '%llu'\n", ull);
    // output: unsigned long long %llu: '18446744073709551615'

    printf("float %%f: '%f'\n", f);
    // output: float %f: '340282346638528859811704183484516925440.000000'

    printf("float %%e: '%e'\n", f); // Lowercase exponential form.
    // output: float %e: '3.402823e+38'

    printf("float %%E: '%E'\n", f); // Uppercase exponential form.
    // output: float %E: '3.402823E+38'

    printf("float %%g: '%g'\n", f);
    // output: float %g: '3.40282e+38'

    printf("float %%G: '%G'\n", f);
    // output: float %G: '3.40282E+38'

    printf("double %%lf: '%lf'\n", d);
    // output: double %lf: (A very large number...)

    // %f with double works for printf, but NOT for scanf.
    printf("double %%f: '%f'\n", d);
    // output: double %f: (A very large number...)

    printf("long double %%Lf: '%Lf'\n", ld);
    // output: long double %Lf: (Even larger...)

    printf("char %%c: '%c'\n", c);
    // output: char %c: 'A'

    printf("string %%s: '%s'\n", s);
    // output: string %s: 'Hello, world!'

    printf("bool true %%d: '%d'\n", bt);
    // output: bool true %d: '1'

    printf("bool false %%d: '%d'\n", bf);
    // output: bool false %d: '0'

    /***************************************************************************
     * int formatting
     **************************************************************************/

    printf("unsigned octal %%o: '%o'\n", i);
    // output: unsigned octal %o: '17777777777'

    printf("unsigned hexadecimal %%x: '%x'\n", i); // Lowercase.
    // output: unsigned hexadecimal %x: '7fffffff'

    printf("unsigned hexadecimal %%X: '%X'\n", i); // Uppercase.
    // output: unsigned hexadecimal %X: '7FFFFFFF'

    /***************************************************************************
     * float formatting
     **************************************************************************/

    // %[flags][width][.precision]specifier
    // Width: Minimum number of characters to be printed.
    // Precision: For %f, it specifies the number of digits after the decimal
    // point.
    printf("float %%.2f: '%.2f'\n", 3.1416);
    // output: float %.2f: '3.14'

    printf("float %%6.3f: '%6.3f'\n", 3.1416);
    // output: float %6.3f: ' 3.142'

    // The '-' flag forces left-alignment within the specified width.
    // Width (10) reserves space, .3 rounds, and '-' pushes the text to the
    // left.
    printf("float %%-10.3f: '%-10.3f'\n", 3.1416);
    // output: float %-10.3f: '3.142     '

    /***************************************************************************
     * string formatting
     **************************************************************************/

    // A number after '%' specifies the minimum field width to be printed.
    printf("'%30s'\n", s);
    // output: '                 Hello, world!'

    // '-': Left alignment
    printf("'%-30s'\n", s);
    // output: 'Hello, world!                 '

    // '.' Precision: For strings it means maximum characters to print.
    printf("'%30.5s'\n", s);
    // output: '                         Hello'

    printf("'%-30.5s'\n", s);
    // output: 'Hello                         '

    /***************************************************************************
     * Address format specifier
     **************************************************************************/

    int *p = &i;
    printf("memory addres of 'i' %%p: '%p'\n", p);
    // output: memory addres of 'i' %p: '0x7ffc2857b4d4'

    /***************************************************************************
     * size_t format specifier
     *
     * 'z': It indicates that the argument has the size of a size_t
     * 'u': It indicates that the value should be treated as an unsigned
     *      integer.
     **************************************************************************/

    printf("size of '*p' %%zu: '%zu' bytes\n", sizeof(p));
    // output: size of '*p' %zu: '8' bytes

    return 0;
}
