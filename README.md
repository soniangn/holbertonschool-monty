# Monty  
 
## Synopsis ⚡️ 
This is the repository for our project for [Holberton School](https://www.holbertonschool.fr/) low-level programming curriculum. 
Monty 0.98 is a scripting language that is first compiled into Monty byte codes. It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files. The memory management and the errors output have been handled.
  
## The Monty language

### Monty byte code files

Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

```
julien@ubuntu:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
julien@ubuntu:~/monty$
```

Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:

```
julien@ubuntu:~/monty$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
julien@ubuntu:~/monty$
```
  
## Built With :hammer_and_wrench: 
  
Our program `monty` was developped with:   
  
* C programming language
* Visual Studio Code 
* Program was developed on an environment using Docker 
* GCC 
 
## Features 

`monty` executes the following opcodes:

| Opcode | Description                                     |
|----------|-----------------------------------------------|
|  push     | 	Pushes an element to the stack   |
|  pall     | Prints all the values on the stack  |
|  pop    |    Removes the top element of the stack   |
|   pint  |   Prints the value at the top of the stack   |
|    add    |   Adds the top two elements of the stack     |
|   swap   | Swaps the top two elements of the stack |
|    nope   | Doesn't do anything |
|   sub  | Subtracts the top element from the second top element of the stack |
|    div   | Divides the second top element by the top element of the stack |

## Usage 📖

* First, Git clone the repository using: 

    **HTTPS:**
```
$ git clone https://github.com/soniangn/holbertonschool-monty.git
```
   **SSH:** 
```
$ git clone git@github.com:soniangn/holbertonschool-monty.git
```

* Then, compile the files this way

```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

* You're ready to run the program with `./monty` !

## Examples

Below are presented examples of `monty` usage.


## Libraries used 📔

`stdio.h` | `unistd.h` | `string.h` | `stdlib.h` | `ctype.h` | `limits.h` 

## Project Files Description 📌

The projects include 12 files as follows: 

| File | Description                                     |
|----------|-----------------------------------------------|
|  main.c     |  Entry point that  |
|  monty.h     |  Header files, containing all functions prototypes as well as the librairies used |
|   _isdigit.c   | Checks if the character is a digit      |
|   free.c  |  Function that frees    |
|   get_instructions.c     |    Selects the correct function to perform the opcode passed    |
|    read_line.c  | Function that reads line by line and call the opcode function  |
|  op_nop.c    | Function that doesn't do anything |
|  op_pall.c     | Function that prints all the values on the stack |
|    op_pint.c   | Function that prints the value at the top of the stack |
|    op_pop.c   | Function that removes the top element of the stack |
|    op_push.c   |  Function that pushes an element to the stack |
|    op_swap.c   |  Function that swaps the top two elements of the stack |
|    op_add.c   |  Function that adds the top two elements of the stack |
|    op_sub.c   |  Function that subtracts the top element from the second top element of the stack |
|    op_div.c   |  Function that divides the second top element by the top element of the stack |


## Authors ✒️

**Valentin**
[@Vaal34](https://github.com/Vaal34)

**Sonia Nguyen**
[@soniangn](https://github.com/soniangn)
