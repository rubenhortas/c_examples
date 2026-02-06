#include <stdio.h>
#include <stdlib.h>

/**
 * =================================================================
 * FILE OPENING MODES:
 * =================================================================
 *
 * Text files:
 *
 *  "a" (Append):
 *      Opens for writing at the end of the file.
 *      Creates the file if it doesn't exist.
 *
 *  "a+" (Read & Append):
 *      Opens for reading and writing at the end.
 *      Creates the file if it doesn't exist.
 *
 *  "r" (Read):
 *      Opens for reading from the beginning.
 *      Returns NULL if the file does not exist.
 *
 *  "r+" (Read & Write):
 *      Opens for reading and writing from the beginning.
 *      Returns NULL if the file does not exist.
 *
 *  "w" (Write):
 *      Creates a new file or truncates an existing one to zero length.
 *
 *  "w+" (Read & Write):
 *      Creates a new file or truncates an existing one.
 *
 * Binary files:
 *
 * "ab", "ab+", "rb", "rb+", "wb", "wb+"
 *
 * Same as above, but 'b' prevents newline translation on systems like
 * Windows.
 *
 * =================================================================
 * CORE FUNCTIONS:
 * =================================================================
 *
 * Stream Control:
 *
 *  fopen():   Opens/creates a file and returns a FILE pointer.
 *  fclose():  Closes an open file stream.
 *  fflush():  Forces a write of all buffered data to the disk.
 *
 * Formatted I/O (Text):
 *
 *  fprintf(): Writes formatted data to a file.
 *  fscanf():  Reads formatted data from a file.
 *
 * Character & String I/O:
 *
 *  fgetc():   Reads a single character.
 *  fputc():   Writes a single character.
 *  fgets():   Reads a line or a string safely.
 *
 * Block I/O (Binary):
 *
 *  fwrite():  Writes blocks of data/memory to a file.
 *  fread():   Reads blocks of data/memory from a file.
 *
 * Positioning:
 *
 *  fseek():   Moves the file pointer to a specific location.
 *  ftell():   Returns the current byte position (returns long).
 *  rewind():  Resets the file pointer to the beginning. *
 *
 * LEGACY/NON-STANDARD (Avoid in modern C):
 *
 *  putw(): Writes an integer (Not standard, use fwrite instead).
 *  getw(): Reads an integer (Not standard, use fread instead).
 *
 */

int write_file(const char *filename);
int read_file(const char *filename);

int main() {
    const char *file_name = "example.txt";

    write_file(file_name);
    read_file(file_name);

    return 0;
}

int write_file(const char *filename) {
    FILE *file_ptr = fopen(filename, "w");

    if (file_ptr == NULL) {
        perror("Error writing the file"); // Log error to stderr
        return -1;
    }

    fprintf(file_ptr, "Hello file!\n");

    fclose(file_ptr); // Close the file
    printf("File '%s' written successfully.\n", filename);

    return 0;
}

int read_file(const char *filename) {
    FILE *file_ptr = fopen(filename, "r");
    char buffer[256];

    if (file_ptr == NULL) {
        perror("Error opening the file"); // Log error to stderr
        return -1;
    }

    printf("Content of '%s':\n", filename);

    // fgets with a defined buffer is much safer than fscanf for reading entire
    // lines, as it prevents buffer overflows.
    while (fgets(buffer, sizeof(buffer), file_ptr) != NULL) {
        printf("%s", buffer);
    }

    fclose(file_ptr); // Close the file

    return 0;
}
