Hash Generator CLI

A simple command-line C++ program

    Generates random short numbers

    Configurable behavior: return the value only, or print and return

    Handles input errors

    Simple text-based interface

    Built-in help command

Build Instructions

Compile the program using any standard C++ compiler. Example using g++:

g++ -o cpp_mini_terminal cpp_mini_terminal.cpp

How to Use

Run the compiled program:

./cpp_mini_terminal

Available Commands
Command	Description
help	Displays a list of available commands
exit	Exits the program
hash	Generates a random short number (behavior depends on configuration)
hash conf	Changes configuration for how hash behaves
Configuration Mode (hash conf)

When you type hash conf, the program will prompt you to choose a behavior mode:

    1 — Only return the value (do not print)

    0 — Print the value and return it

    2 — Exit without changing the current configuration

Error Handling

The program handles the following input errors:

    Empty input: Error number '1' - no input

    Unknown command: Error number '2' - uknown command

Notes

    The hash value is randomly generated each time using std::srand seeded with the current time.

    The returned value is of type short, meaning it is in the range from -32,768 to 32,767.

License

This is a simple utility or educational project. Use freely.
