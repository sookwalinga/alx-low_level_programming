A static library, also known as an archive library, is a collection of object files that are linked into a single binary at compile time. The library is "static" because the linker copies the object code for the functions into the final executable file, making it self-contained and not dependent on any external libraries.

A static library works by providing a collection of object files that can be linked with a program's object files to create an executable binary. When the program is linked, the linker extracts the necessary object files from the library and includes them in the final executable.

Creating a static library involves the following steps:

1. Compile each source file into an object file using a command like gcc -c file.c.
2. Combine the object files into a single library using the ar command. For example, ar rcs libexample.a file1.o file2.o.
3. Index the library using the ranlib command. For example, ranlib libexample.a.

To use a static library in a program, the program must be compiled and linked with the library. The -l flag can be used with the gcc command to link the library. For example, gcc program.c -o program -L/path/to/lib -lexample.

The ar command can be used to manipulate static libraries. The r option is used to add or replace files in the library, the d option is used to delete files from the library, and the t option is used to list the files in the library. For example, ar r libexample.a file3.o adds file3.o to the libexample.a library.

The ranlib command is used to generate an index of the symbols in the library, which can speed up linking. For example, ranlib libexample.a.

The nm command can be used to list the symbols in an object file or library. For example, nm libexample.a lists the symbols in the libexample.a library.
