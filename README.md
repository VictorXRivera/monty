# monty
## 0x19. C - Stacks, Queues - LIFO, FIFO
### Foundations - Low-level programming & Algorithm ― Data structures and Algorithms by Julien Barbier, co-founder at Holberton School
#### Learning Objectives
What do LIFO and FIFO mean?\
What is a stack, and when to use it?\
What is a queue, and when to use it?\
What are the common implementations of stacks and queues?\
What are the most common use cases of stacks and queues?\
What is the proper way to use global variable Objectives?
#### Requirements
Allowed editors: vi, vim, emacs\
All your files will be compiled on Ubuntu 14.04 LTS\
Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic\
All your files should end with a new line\
A README.md file, at the root of the folder of the project is mandatory\
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl\
You allowed to use a maximum of one global variable\
No more than 5 functions per file\
You are allowed to use the C standard library\
The prototypes of all your functions should be included in your header file called monty.h\
Don’t forget to push your header file\
All your header files should be include guarded\
You are expected to do the tasks in the order shown in the projectments
#### Data Structures
```
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
```
#### Tasks
#### 0. push, pall
Implement the push and pall opcodes.
##### The opcode push pushes an element to the stack.
```
Usage: push <int>
```
> where int is an integer
if int is not an integer or if there is no argument given to push, print the error message:
```
L<line_number>: usage: push integer, followed by a new line, and exit with the status EXIT_FAILURE
```
>where is the line number in the file\
You won’t have to deal with overflows. Use the atoi function

##### The opcode pall prints all the values on the stack, starting from the top of the stack.
```
Usage: pall
```
>If the stack is empty, don’t print anything\
*Example output:*
```
julien@ubuntu:~/monty$ cat -e bytecodes/00.m
push 1$
push 2$
push 3$
pall$
julien@ubuntu:~/monty$ ./monty bytecodes/00.m
3
2
1
julien@ubuntu:~/monty$
```
#### 1. pint
##### The opcode pint prints the value at the top of the stack, followed by a new line.
```
Usage: pint
```
>If the stack is empty, print the error message L<line_number>: can't pint, stack empty, followed by a new line, and exit with the status EXIT_FAILURE
#### 2. pop
##### The opcode pop removes the top element of the stack.
```
Usage: pop
```
>If the stack is empty, print the error message L<line_number>: can't pop an empty stack, followed by a new line, and exit with the status EXIT_FAILURE
#### 3. swap
##### The opcode swap swaps the top two elements of the stack.
```
Usage: swap
```
>If the stack contains less than two elements, print the error message L<line_number>: can't swap, stack too short, followed by a new line, and exit with the status EXIT_FAILURE
#### 4. add
##### The opcode add adds the top two elements of the stack.
```
Usage: add
```
>If the stack contains less than two elements, print the error message 
```
L<line_number>: can't add, stack too short, followed by a new line, and exit with the status EXIT_FAILURE
```
>The result is stored in the second top element of the stack, and the top element is removed, so that at the end:\
The top element of the stack contains the result\
The stack is one element shorter
#### 5. nop
##### Implement the nop opcode.
```
Usage: nop
```
>The opcode nop doesn’t do anything.
