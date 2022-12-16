# Monty  
 
## Synopsis ⚡️ 
This is the repository for our project for [Holberton School](https://www.holbertonschool.fr/) low-level programming curriculum. 
Monty 0.98 is a scripting language that is first compiled into Monty byte codes. It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files. The memory management and the errors output have been handled.
  
## The Monty language


  
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
|       |   |

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

The projects include 8 files as follows: 

| File | Description                                     |
|----------|-----------------------------------------------|
|  main.c     |  Entry point that  |
|  monty.h     |  Header files, containing all functions prototypes as well as the librairies used |
|      |       |
|     |      |
|        |        |
|      |  |
|       |  |
|       |   |


## Authors ✒️

**Valentin**
[@Vaal34](https://github.com/Vaal34)

**Sonia Nguyen**
[@soniangn](https://github.com/soniangn)
