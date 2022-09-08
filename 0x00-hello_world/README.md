# 0x00. C - Hello, World

 
## 0. Preprocessor
A script that runs a C file through the preprocessor and saves the result into another file.
- The output should be saved in the file `c`

## 1. Compiler
A script that compiles a C file but does not link.
- The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.

## 2. Assembler
A script that generates the assembly code of a C code and save it in an output file.
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.

## 3. Name
A script that compiles a C file and creates an executable named `cisfun`.

## 4. Hello, puts
Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.
- Use the function `puts`
- Don't use `printf`

## 5. Hello, printf
A C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.
- Must use `printf`
- Don't the function `puts`
- Should compile without warning when using the `-Wall gcc` option

## 6. Size is not grandeur, and territory does not make a nation
Write a C program that prints the size of various types on the computer it is compiled and run on.
- install the package `libc6-dev-i386` on your Linux to test the `-m32 gcc` option.

## 7. Intel
A script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.

## 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
A C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.
- Don't use `printf` or `puts`
- Should return `1`
- Should compile using `-Wall gcc`
