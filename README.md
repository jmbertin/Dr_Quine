# Dr_Quine

Dr_Quine is a project undertaken as part of the 42 school curriculum. This project invites you to confront the principle of self-reproduction and the problems that derive from it. It is a perfect introduction to more complex projects, particularly malware projects.

**Developed on Linux Ubuntu 23.04, tested on MacOSX and Ubuntu 23.04**

----

## Features

**Colleen :**

• When executed, the program must display on the standard output an output identical to the source code of the file used to compile the program.

**Grace :**

• When executed, the program writes in a file named Grace_kid.c/Grace_kid.s the source code of the file used to compile the program.

**Sully :**

• When executed the program writes in a file named Sully_X.c/Sully_X.s. The X will be an interger given in the source (5 by default). Once the file is created, the program
compiles this file and then runs the new program (which will have the name of its source file).

• Stopping the program depends on the file name : the resulting program will be executed only if the integer X is greater than 0.

----

## Build and Installation

Clone the repository:

``git clone https://github.com/jmbertin/Dr_Quine/``

Navigate to the project directory and compile using Makefile:

``cd Dr_Quine``

``make``

You can use ``make Colleen``, ``make Grace`` or ``make Sully`` to compile each programs separately.

Executables will be created in the root directory. Use them as described in the Usage section.

----

## Usage

Usage

``./Colleen``

``./Grace``

``./Sully``

----

## Contribution
If you encounter any bugs or wish to add features, please feel free to open an issue or submit a pull request.
