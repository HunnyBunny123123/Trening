# 40-Hour C Programming Curriculum

## Purpose

This curriculum is designed for a complete beginner learning programming through C.

The teaching style should emphasize:

- Hands-on challenges over long explanations
- Small, incremental projects
- Debugging and testing habits from the beginning
- Understanding how C works underneath: compilation, memory, pointers, files
- Guided discovery rather than immediately giving full solutions

The learner should write code as much as possible. Explanations should be focused and tied to immediate practice.

---

# High-Level Learning Goals

By the end, the learner should be able to:

1. Write, compile, and run C programs from the command line
2. Understand variables, types, expressions, conditionals, loops, and functions
3. Use arrays and strings safely
4. Understand pointers at a beginner-to-intermediate level
5. Use structs to model data
6. Read from and write to files
7. Allocate and free memory dynamically
8. Use basic debugging tools such as compiler warnings, `gdb`, and `valgrind`
9. Organize small C projects with headers and Makefiles
10. Complete a small final project using multiple C features together

---

# Recommended Tooling

The learner should ideally use a Unix-like environment:

- Linux, macOS, WSL, or a dev container
- `gcc` or `clang`
- `make`
- `gdb` or `lldb`
- `valgrind` if available
- A text editor such as VS Code, Neovim, Vim, Emacs, etc.

Recommended compile command:

```bash
gcc -Wall -Wextra -Wpedantic -std=c11 -g main.c -o main
```

Recommended debugging tools:

```bash
gdb ./program
valgrind --leak-check=full ./program
```

---

# Curriculum Structure

Total time: approximately **40 hours**

Suggested structure:

| Phase | Hours | Focus |
|---|---:|---|
| Phase 1 | 6h | Setup, compilation, first programs |
| Phase 2 | 8h | Variables, conditions, loops, functions |
| Phase 3 | 8h | Arrays, strings, input validation |
| Phase 4 | 8h | Pointers, memory, structs |
| Phase 5 | 6h | Files, Makefiles, project organization |
| Phase 6 | 4h | Final project polish, debugging, review |

The sessions below are written as 20 sessions of about 2 hours each.

---

# Session 1 — Setup, Compilation, and Hello World

**Time:** 2 hours

## Goals

- Install or verify compiler tools
- Write and compile the first C program
- Understand the basic compilation pipeline
- Learn how to read compiler errors

## Concepts

- Source files: `.c`
- Executables
- `main`
- `printf`
- Compiler warnings
- The command line
- Basic compilation pipeline:
  1. Preprocessing
  2. Compilation
  3. Assembly
  4. Linking

## Challenge

Create a file called `hello.c`.

The program should:

1. Print your name
2. Print the current year
3. Print one sentence explaining why you are learning C

Compile it manually using:

```bash
gcc -Wall -Wextra -Wpedantic -std=c11 -g hello.c -o hello
```

Run it:

```bash
./hello
```

## Micro-Challenges

- Intentionally remove a semicolon and read the compiler error
- Misspell `printf` and read the compiler error
- Compile with and without `-Wall -Wextra`
- Change the output format

## Verification

The learner should be able to explain:

- What source code is
- What the compiler does
- Why warnings are useful
- What `./hello` means

## Log After Session

Update `logs.md` with:

- Whether setup worked
- Compiler used
- Any confusing errors encountered
- Key ideas learned

---

# Session 2 — Variables, Types, and Printing Values

**Time:** 2 hours

## Goals

- Use basic C types
- Store values in variables
- Print formatted values
- Understand integer vs floating-point behavior

## Concepts

- `int`
- `double`
- `char`
- Variable declarations
- Assignment
- Arithmetic expressions
- `printf` format specifiers:
  - `%d`
  - `%f`
  - `%c`
  - `%s`

## Challenge: Unit Converter

Create `converter.c`.

The program should:

1. Store a temperature in Celsius
2. Convert it to Fahrenheit
3. Print both values
4. Store a distance in kilometers
5. Convert it to miles
6. Print both values

Formula examples:

```text
fahrenheit = celsius * 9 / 5 + 32
miles = kilometers * 0.621371
```

## Micro-Challenges

- Try `9 / 5` versus `9.0 / 5.0`
- Print a `double` with two decimal places using `%.2f`
- Add more conversions:
  - kilograms to pounds
  - centimeters to inches

## Important Discussion

Ask:

- Why does `9 / 5` behave differently from `9.0 / 5.0`?
- What is integer division?
- Why does C require explicit types?

## Verification

The learner should be able to explain:

- What a variable is
- Why types matter
- Why `int` and `double` behave differently

---

# Session 3 — User Input and Basic Conditionals

**Time:** 2 hours

## Goals

- Read user input
- Use `if`, `else if`, and `else`
- Compare values
- Handle simple branching logic

## Concepts

- `scanf`
- Address-of operator in input: `&`
- Comparison operators:
  - `==`
  - `!=`
  - `<`
  - `>`
  - `<=`
  - `>=`
- Logical operators:
  - `&&`
  - `||`
  - `!`

## Challenge: Age Classifier

Create `age_classifier.c`.

The program should:

1. Ask the user for their age
2. Print a category:
   - child
   - teenager
   - adult
   - senior
3. Reject impossible ages, such as negative numbers

## Micro-Challenges

- Add a special message for age exactly `18`
- Add a maximum reasonable age
- Try invalid input, such as typing letters
- Observe what happens

## Debugging Focus

The learner should see that `scanf` can fail.

Introduce checking return values:

```c
int result = scanf("%d", &age);
```

Do not over-explain yet. Focus on the fact that input can fail.

## Verification

The learner should be able to explain:

- Why `scanf` needs `&age`
- What an `if` statement does
- Why user input is dangerous and must be checked

---

# Session 4 — Loops and Repetition

**Time:** 2 hours

## Goals

- Repeat actions with loops
- Understand loop conditions
- Avoid infinite loops
- Practice simple algorithms

## Concepts

- `while`
- `for`
- Loop counters
- Accumulators
- Infinite loops
- `break`
- `continue`

## Challenge: Number Analyzer

Create `number_analyzer.c`.

The program should:

1. Ask the user how many numbers they want to enter
2. Read that many integers
3. Print:
   - the sum
   - the average
   - the minimum
   - the maximum

## Micro-Challenges

- Reject a count less than or equal to zero
- Count how many numbers are even
- Count how many numbers are negative
- Try entering invalid input

## Debugging Focus

Have the learner insert temporary debug prints:

```c
printf("DEBUG: i = %d, current = %d\n", i, current);
```

Then remove them once the program works.

## Verification

The learner should be able to explain:

- The difference between `while` and `for`
- What an accumulator is
- How to update min and max values

---

# Session 5 — Functions

**Time:** 2 hours

## Goals

- Break programs into smaller pieces
- Write reusable functions
- Understand parameters and return values

## Concepts

- Function declaration
- Function definition
- Parameters
- Return values
- `void`
- Scope

## Challenge: Calculator Functions

Create `calculator.c`.

The program should:

1. Ask for two numbers
2. Ask for an operation:
   - add
   - subtract
   - multiply
   - divide
3. Use separate functions for each operation
4. Print the result
5. Reject division by zero

Example functions:

```c
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
```

The learner should write the implementation themselves.

## Micro-Challenges

- Add modulus for integers
- Add a function that prints a menu
- Add a function that reads a number
- Make the calculator repeat until the user chooses quit

## Verification

The learner should be able to explain:

- Why functions help organize code
- What a parameter is
- What a return value is
- What local scope means

---

# Session 6 — Mini Project 1: Guessing Game

**Time:** 2 hours

## Goals

- Combine conditionals, loops, functions, and input
- Practice program structure
- Add simple game logic

## Project: Guess the Number

Create `guessing_game.c`.

The program should:

1. Generate or store a secret number
2. Ask the user to guess
3. Tell the user if the guess is too low or too high
4. Count attempts
5. End when the user guesses correctly
6. Print the number of attempts

If random numbers are introduced, use:

```c
#include <stdlib.h>
#include <time.h>
```

and:

```c
srand(time(NULL));
rand()
```

But if that is too much at once, use a fixed secret number first.

## Required Features

- Input validation
- Loop until correct
- Attempt counter
- Clear messages

## Extensions

- Limit the number of guesses
- Add difficulty levels
- Let the player play again
- Track the best score during one run

## Verification

The learner should be able to explain the full control flow of the game.

---

# Session 7 — Arrays

**Time:** 2 hours

## Goals

- Store multiple values in arrays
- Use indices
- Understand fixed-size storage
- Practice array traversal

## Concepts

- Array declaration
- Indexing starts at zero
- Bounds
- Loops with arrays
- Fixed capacity

## Challenge: Gradebook

Create `gradebook.c`.

The program should:

1. Ask how many grades the user wants to enter
2. Store grades in an array
3. Print all grades
4. Compute:
   - average
   - minimum
   - maximum
5. Count passing grades

Use a fixed maximum capacity, for example:

```c
#define MAX_GRADES 100
```

## Micro-Challenges

- Reject more than `MAX_GRADES`
- Reject grades outside 0–100
- Print grades in reverse order
- Count grades in letter categories:
  - A
  - B
  - C
  - D
  - F

## Important Discussion

Ask:

- What happens if you access past the end of an array?
- Does C protect you from out-of-bounds access?
- Why is `MAX_GRADES` useful?

## Verification

The learner should understand that arrays do not automatically remember their length.

---

# Session 8 — Strings as Character Arrays

**Time:** 2 hours

## Goals

- Understand C strings
- Use simple string functions
- Practice character arrays safely

## Concepts

- `char` arrays
- Null terminator: `'\0'`
- String literals
- `strlen`
- `strcmp`
- `strcpy`
- `fgets`
- Difference between `scanf("%s", ...)` and `fgets`

## Challenge: Name Formatter

Create `name_formatter.c`.

The program should:

1. Ask for the user's first name
2. Ask for the user's last name
3. Print:
   - full name
   - initials
   - length of first name
   - length of last name

Use `fgets` rather than unsafe unbounded input.

## Micro-Challenges

- Remove the trailing newline from `fgets`
- Compare the entered name to a secret name
- Convert initials to uppercase using `toupper`
- Reject empty names

## Debugging Focus

Print each character and its numeric value:

```text
index 0: 'A' 65
index 1: 'l' 108
...
```

This helps reveal the newline and null terminator.

## Verification

The learner should be able to explain:

- Why C strings end with `'\0'`
- Why buffer size matters
- Why `fgets` is safer than `scanf("%s")`

---

# Session 9 — String Processing Project

**Time:** 2 hours

## Goals

- Process text character by character
- Practice arrays, strings, loops, and functions
- Build a useful utility

## Project: Text Analyzer

Create `text_analyzer.c`.

The program should:

1. Read one line of text
2. Count:
   - characters
   - letters
   - digits
   - spaces
   - punctuation
   - words
3. Print a summary

Use functions such as:

```c
int count_letters(const char text[]);
int count_digits(const char text[]);
int count_words(const char text[]);
```

The learner should design these functions.

## Micro-Challenges

- Count uppercase and lowercase letters separately
- Find the longest word length
- Count vowels
- Detect whether the line is a palindrome, ignoring spaces and case

## Important Discussion

Ask:

- How do you define a word?
- What edge cases exist?
- What should happen for an empty line?

## Verification

Test with:

```text
Hello, world!
C is 50 years old.
   lots   of   spaces
12345
```

---

# Session 10 — Introduction to Pointers

**Time:** 2 hours

## Goals

- Understand what a pointer is
- Use addresses
- Dereference pointers
- Understand pointer basics before dynamic memory

## Concepts

- Memory addresses
- `&`
- `*`
- Pointer variables
- Dereferencing
- Relationship between arrays and pointers

## Challenge: Pointer Experiments

Create `pointer_lab.c`.

The program should:

1. Declare an `int`
2. Print its value
3. Print its address
4. Create a pointer to it
5. Use the pointer to modify the original value
6. Repeat with a `double` and a `char`

## Micro-Challenges

- Write a function that modifies an integer through a pointer
- Write a `swap` function for two integers
- Print addresses of consecutive array elements
- Predict address differences before running

## Important Discussion

Ask:

- Why does `scanf` need `&`?
- What is the difference between a value and an address?
- Why can a function modify a variable through a pointer?

## Verification

The learner should be able to explain:

- `int x`
- `int *p`
- `p = &x`
- `*p = 42`

---

# Session 11 — Pointers and Arrays

**Time:** 2 hours

## Goals

- Understand how arrays are passed to functions
- Practice pointer-style traversal
- Avoid common pointer mistakes

## Concepts

- Array decay to pointer
- Passing arrays to functions
- Pointer arithmetic
- `const` for read-only parameters
- Array length must be passed separately

## Challenge: Array Utility Library

Create `array_utils.c`.

Implement functions for integer arrays:

```c
int sum_array(const int arr[], int length);
double average_array(const int arr[], int length);
int find_min(const int arr[], int length);
int find_max(const int arr[], int length);
int contains(const int arr[], int length, int value);
```

Then write a `main` function that tests them.

## Micro-Challenges

- Implement `reverse_array`
- Implement `copy_array`
- Implement `count_occurrences`
- Implement `index_of`

## Testing Focus

Have the learner manually create test arrays:

```c
int nums1[] = {1, 2, 3};
int nums2[] = {-5, 10, 0, 4};
int nums3[] = {42};
```

Then verify expected results.

## Verification

The learner should understand:

- Why the function needs `length`
- Why arrays are not copied when passed to functions
- Why `const int arr[]` is useful

---

# Session 12 — Memory Layout and Debugging with GDB

**Time:** 2 hours

## Goals

- Develop a mental model of memory
- Use a debugger to inspect execution
- Learn to step through code

## Concepts

- Stack memory
- Global/static memory
- Function call stack
- Local variables
- Breakpoints
- Stepping
- Printing variables in `gdb`

## Challenge: Debug a Broken Program

Create or provide a small broken program involving:

- An off-by-one loop
- Incorrect condition
- Array access bug
- Uninitialized variable

The learner should not simply be told the fix. They should use debugging.

## GDB Commands

Practice:

```bash
gdb ./program
break main
run
next
step
print variable_name
print array[index]
backtrace
continue
quit
```

## Micro-Challenges

- Set a breakpoint inside a function
- Watch how loop variables change
- Inspect array contents
- Find where the program first behaves incorrectly

## Verification

The learner should be able to:

- Compile with `-g`
- Start `gdb`
- Set a breakpoint
- Step through code
- Inspect variables

---

# Session 13 — Structs

**Time:** 2 hours

## Goals

- Group related data
- Model real-world entities
- Pass structs to functions

## Concepts

- `struct`
- Fields/members
- Dot operator
- Struct arrays
- Passing structs by value
- Passing structs by pointer

## Challenge: Student Records

Create `students.c`.

Define a struct:

```c
struct Student {
    char name[50];
    int age;
    double grade;
};
```

The program should:

1. Store several students in an array
2. Print all students
3. Find the student with the highest grade
4. Compute the average grade

## Micro-Challenges

- Add an ID field
- Add a function to print one student
- Add a function to update a student's grade
- Sort students by grade or name

## Important Discussion

Ask:

- Why use a struct instead of separate arrays?
- What happens when a struct is passed by value?
- When would a pointer to struct be better?

## Verification

The learner should be able to explain:

- `student.grade`
- `student_ptr->grade`
- Why structs help organize data

---

# Session 14 — Dynamic Memory Allocation

**Time:** 2 hours

## Goals

- Allocate memory at runtime
- Understand ownership and freeing
- Avoid leaks and invalid memory access

## Concepts

- `malloc`
- `calloc`
- `realloc`
- `free`
- Heap memory
- Memory leaks
- Dangling pointers
- `NULL`

## Challenge: Dynamic Gradebook

Rewrite the earlier gradebook project.

Instead of using a fixed-size array:

1. Ask how many grades the user wants to enter
2. Allocate enough memory using `malloc`
3. Store the grades
4. Compute average, min, max
5. Free the memory

## Micro-Challenges

- Check whether `malloc` returned `NULL`
- Use `calloc` instead of `malloc`
- Resize the grade array with `realloc`
- Add grades one at a time with growing capacity

## Debugging Focus

Run with Valgrind:

```bash
valgrind --leak-check=full ./gradebook
```

Experiment:

- Forget to call `free`
- Access after `free`
- Access past the end of the array

Then observe Valgrind output.

## Verification

The learner should understand:

- Stack vs heap at a beginner level
- Why every successful `malloc` needs a matching `free`
- Why memory ownership matters

---

# Session 15 — File Input and Output

**Time:** 2 hours

## Goals

- Read and write files
- Use file handles
- Process file contents line by line

## Concepts

- `FILE *`
- `fopen`
- `fclose`
- `fprintf`
- `fscanf`
- `fgets`
- File modes:
  - `"r"`
  - `"w"`
  - `"a"`
- Checking for file open failure

## Challenge: Saveable Notes

Create `notes_app.c`.

The program should:

1. Ask the user to enter a note
2. Save the note to a file called `notes.txt`
3. Allow appending multiple notes
4. Allow reading and printing all saved notes

A simple menu is recommended:

```text
1. Add note
2. View notes
3. Quit
```

## Micro-Challenges

- Add timestamps if desired
- Number each note
- Reject empty notes
- Handle missing file gracefully

## Important Discussion

Ask:

- What happens if `fopen` fails?
- Why must files be closed?
- What is the difference between write and append mode?

## Verification

The learner should inspect the file manually using:

```bash
cat notes.txt
```

---

# Session 16 — Headers and Multi-File Programs

**Time:** 2 hours

## Goals

- Split code across multiple files
- Understand declarations vs definitions
- Use header files
- Compile multiple `.c` files together

## Concepts

- `.h` files
- Function prototypes
- Include guards
- Multiple source files
- Separate compilation
- Linker errors

## Challenge: Split Array Utilities

Take the previous array utility functions and split them into:

```text
main.c
array_utils.c
array_utils.h
```

`array_utils.h` should contain declarations.

`array_utils.c` should contain implementations.

`main.c` should contain tests and user interaction.

Compile with:

```bash
gcc -Wall -Wextra -Wpedantic -std=c11 -g main.c array_utils.c -o array_demo
```

## Micro-Challenges

- Intentionally forget to compile `array_utils.c` and observe the linker error
- Intentionally define a function twice and observe the error
- Add include guards
- Add another module, such as `input_utils`

## Verification

The learner should be able to explain:

- What a declaration is
- What a definition is
- Why header files exist
- What the linker does

---

# Session 17 — Makefiles

**Time:** 2 hours

## Goals

- Automate compilation
- Understand basic Makefile rules
- Build and clean a project

## Concepts

- Targets
- Dependencies
- Recipes
- Variables
- `make`
- `make clean`

## Challenge: Makefile for Multi-File Project

Create a `Makefile` for the previous project.

It should support:

```bash
make
make clean
```

Suggested variables:

```make
CC = gcc
CFLAGS = -Wall -Wextra -Wpedantic -std=c11 -g
```

The learner should write the rules with guidance.

## Micro-Challenges

- Add a `run` target
- Add a `debug` target
- Add a `valgrind` target
- Change the executable name using a variable

## Important Discussion

Ask:

- Why is rebuilding manually annoying?
- How does `make` know what to rebuild?
- Why do dependencies matter?

## Verification

The learner should be able to:

- Build using `make`
- Delete build outputs using `make clean`
- Explain a basic Makefile rule

---

# Session 18 — Project Planning: Contact Book

**Time:** 2 hours

## Goals

- Plan a larger C program
- Combine structs, arrays/dynamic memory, strings, files, and functions
- Break work into phases

## Final Project: Contact Book

The final project is a command-line contact book.

The program should allow the user to:

1. Add a contact
2. List contacts
3. Search contacts by name
4. Delete a contact
5. Save contacts to a file
6. Load contacts from a file
7. Quit safely

Each contact should include:

- Name
- Phone number
- Email address

Possible struct:

```c
struct Contact {
    char name[100];
    char phone[30];
    char email[100];
};
```

## Planning Tasks

The learner should design:

- Data structure
- File format
- Menu options
- Function list
- Edge cases
- Testing plan

## Suggested Files

```text
contact_book/
  main.c
  contacts.c
  contacts.h
  input.c
  input.h
  Makefile
  contacts.txt
```

## Suggested Functions

```c
void print_menu(void);
void add_contact(...);
void list_contacts(...);
int find_contact_by_name(...);
void delete_contact(...);
int save_contacts(...);
int load_contacts(...);
```

The exact signatures should be designed by the learner.

## Micro-Challenges

- Decide whether to use fixed capacity or dynamic resizing
- Decide how to handle names with spaces
- Decide how to store contacts in a text file
- Decide how to report errors

## Verification

Before coding, the learner should be able to describe:

- What data needs to be stored
- How each menu option changes the data
- What files/modules are needed

---

# Session 19 — Final Project Implementation

**Time:** 2 hours

## Goals

- Build the core contact book
- Implement features incrementally
- Keep the program compiling throughout

## Implementation Order

Recommended order:

1. Create project files and Makefile
2. Define `struct Contact`
3. Implement menu loop
4. Implement add contact
5. Implement list contacts
6. Implement search contact
7. Implement delete contact
8. Implement save contacts
9. Implement load contacts

## Rule

Do not implement everything at once.

After each feature:

```bash
make
./contact_book
```

Then test manually.

## Required Behaviors

- No crashes on normal input
- Clear menu
- Contact names with spaces should work
- File load failure should be handled
- Program should free memory if dynamic allocation is used

## Debugging Focus

Use:

```bash
gdb ./contact_book
valgrind --leak-check=full ./contact_book
```

## Verification

Test manually:

1. Start with no contacts
2. Add one contact
3. List contacts
4. Add three contacts
5. Search for an existing contact
6. Search for a missing contact
7. Delete one contact
8. Save
9. Quit
10. Restart
11. Load
12. Verify data persisted

---

# Session 20 — Final Project Polish, Review, and Assessment

**Time:** 2 hours

## Goals

- Improve code quality
- Debug remaining issues
- Review all major C concepts
- Reflect on progress

## Polish Tasks

Choose several:

- Improve input validation
- Improve error messages
- Remove duplicated code
- Add comments where helpful
- Improve function names
- Split overly long functions
- Add a README
- Add a sample contacts file
- Add Makefile targets:
  - `run`
  - `clean`
  - `valgrind`

## Testing Checklist

The final project should be tested with:

- Empty contact list
- One contact
- Many contacts
- Names with spaces
- Very long input
- Missing file
- Corrupted file
- Delete first contact
- Delete last contact
- Delete nonexistent contact
- Save and reload

## Review Questions

The learner should be able to answer:

1. What happens when C code is compiled?
2. What is the difference between stack and heap memory?
3. What is a pointer?
4. Why do arrays need lengths passed separately?
5. What is a null terminator?
6. Why can string input be dangerous?
7. What is a struct useful for?
8. Why should `malloc` be checked?
9. Why should every allocated block eventually be freed?
10. What is the difference between a compiler error and a linker error?
11. What does a header file contain?
12. What does a Makefile do?

## Final Assessment

The learner has completed the 40-hour curriculum if they can:

- Build and run the contact book using `make`
- Explain the main data structures
- Explain how file saving/loading works
- Use `gdb` to step through at least one bug
- Use `valgrind` or equivalent reasoning to check memory handling
- Modify the project by adding one small new feature

Suggested small final feature:

- Edit an existing contact
- Sort contacts alphabetically
- Export contacts to CSV
- Add contact categories
- Add case-insensitive search
