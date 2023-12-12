# CPP_01
<p align="center"><img src="https://cdn-images-1.medium.com/v2/resize:fit:1200/1*mb0KkzYAZDDSvdYC2MM5hg.jpeg" width="150" height="150" />

#
<h3><b>¤ Table of contents ¤</b></h3>

1) <b>ex00</b>
2) <b>ex01</b>
3) <b>ex02</b>
4) <b>ex03</b>
5) <b>ex04</b>
6) <b>ex05</b>


---
<h3><b>¤ ex00 ¤</b></h3>

<details>
  
  |<b>Exercise 00: BraiiiiiiinnnzzzZ</b>|
  |:----------------|
  |Turn in directory: ex00/|
  |Files to turn in: Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, newZombie.cpp, randomChump.cpp|
  |Forbidden functions : None|

  * First, implement a Zombie class. It has a string private attribute name.
    Add a member function void announce( void ); to the Zombie class. Zombies
    announce themselves as follows:
    
    `<name>: BraiiiiiiinnnzzzZ...`

  * Don’t print the angle brackets (< and >). For a zombie named Foo, the message
    would be:

    `Foo: BraiiiiiiinnnzzzZ...`

  * Then, implement the two following functions:

    `Zombie* newZombie( std::string name );` -> It creates a zombie, name it, and return it so you can use it outside of the function scope.

    `void randomChump( std::string name );` -> It creates a zombie, name it, and the zombie announces itself.

  * Now, what is the actual point of the exercise? You have to determine in what case
    it’s better to allocate the zombies on the stack or heap.

  * Zombies must be destroyed when you don’t need them anymore. The destructor must
    print a message with the name of the zombie for debugging purposes.
    
</details>

---

* Execute make
* Execute the program by running `./ex00`

* Example of running the program:

  ```text
  [tb@localhost ex00]$ ./ex00
  Bob has risen from death!
  Bob: BraiiiiiiinnnzzzZ...
  Gary has risen from death!
  Gary: BraiiiiiiinnnzzzZ...
  Gary has been laid back to rest!
  Bob has been laid back to rest!
  [tb@localhost ex00]$
  ```

---
<h3><b>¤ ex01 ¤</b></h3>

<details>
  
  |<b>Exercise 01: Moar Brainz!</b>|
  |:----------------|
  |Turn in directory: ex01/|
  |Files to turn in: Makefile, main.cpp, Zombie.{h, hpp}, Zombie.cpp, zombieHorde.cpp|
  |Forbidden functions : None|

  * Time to create a horde of Zombies!

  * Implement the following function in the appropriate file:

    `Zombie* zombieHorde( int N, std::string name );`

  * It must allocate N Zombie objects in a single allocation. Then, it has to initialize the
    zombies, giving each one of them the name passed as parameter. The function returns a
    pointer to the first zombie.

  * Implement your own tests to ensure your zombieHorde() function works as expected.
    Try to call announce() for each one of the zombies.

  * Don’t forget to delete all the zombies and check for memory leaks.
    
</details>

---

* Execute make
* Execute the program by running `./ex01 [size]`.
* In place of `[size]`, put your desired number of zombies that you wish to create.

* Example of running the program:

  ```text
  [tb@localhost ex01]$ ./ex01 5
  A zombie has risen from death!
  A zombie has risen from death!
  A zombie has risen from death!
  A zombie has risen from death!
  A zombie has risen from death!
  Lee #0: BraiiiiiiinnnzzzZ...
  Lee #1: BraiiiiiiinnnzzzZ...
  Lee #2: BraiiiiiiinnnzzzZ...
  Lee #3: BraiiiiiiinnnzzzZ...
  Lee #4: BraiiiiiiinnnzzzZ...
  Lee has been laid back to rest!
  Lee has been laid back to rest!
  Lee has been laid back to rest!
  Lee has been laid back to rest!
  Lee has been laid back to rest!
  [tb@localhost ex01]$
  ```

* In case of trying to execute without proper argumentation, you will be promted an error message:

  ```text
  [tb@localhost ex01]$ ./ex01  
  Usage: ./ex01 [size]
  [tb@localhost ex01]$ 
  ```
  
---
<h3><b>¤ ex02 ¤</b></h3>

<details>
  
  |<b>Exercise 02: HI THIS IS BRAIN</b>|
  |:----------------|
  |Turn in directory: ex02/|
  |Files to turn in: Makefile, main.cpp|
  |Forbidden functions : None|

  * Write a program that contains:

    1\) A string variable initialized to "HI THIS IS BRAIN"
    
    2\) `stringPTR`: A pointer to the string.
    
    3\) `stringREF`: A reference to the string.

  * Your program has to print:

    1\) The memory address of the string variable.

    2\) The memory address held by `stringPTR`.

    3\) The memory address held by `stringREF`.

  * And then:

    1\) The value of the string variable.

    2\) The value pointed to by `stringPTR`.

    3\) The value pointed to by `stringREF`.

  * That’s all, no tricks. The goal of this exercise is to demystify references which can
    seem completely new. Although there are some little differences, this is another syntax
    for something you already do: address manipulation.
    
</details>

---

* Execute make
* Execute the program by running `./ex02`

* Example of running the program:

  ```text
  [tb@localhost ex02]$ ./ex02
  -----
  Memory address of string: 0x7ffee0417a50
  Memory address of stringPTR: 0x7ffee0417a50
  Memory address of stringREF: 0x7ffee0417a50
  -----
  Value of string: HI THIS IS BRAIN
  Value of stringPTR: HI THIS IS BRAIN
  Value of stringREF: HI THIS IS BRAIN
  -----
  [tb@localhost ex02]$
  ```

---
<h3><b>¤ ex03 ¤</b></h3>

* Execute make
* Execute the program by running `./ex03`

* Example of running the program:

  ```text
  [tb@localhost ex03]$ ./ex03
  Weapon created: mace
  Biggs jumps in to help!
  Biggs attacks with his mace
  Biggs attacks with his morning star
  Biggs flees in terror!
  Weapon destroyed: morning star
  Weapon created: mace
  Wedge jumps in to help!
  Wedge attacks with his mace
  Wedge attacks with his morning star
  Wedge flees in terror!
  Weapon destroyed: morning star
  [tb@localhost ex03]$
  ```

---
<h3><b>¤ ex04 ¤</b></h3>

* Execute make
* Create a file as follows: `touch file1`
* Open the `file1` and write following string inside: `test best`
* Execute the program with following parameters: `./ex04 file1 test rest`
* A new file should be created called `file1.replace` with new string inside.

* Example of running the program:

  ```text
  // Content of file1:
  test best
  ```
  ```text
  [tb@localhost ex04]$ ./ex04 file1 test rest
  [tb@localhost ex03]$
  ```
  ```text
  // Content of file1.replace
  rest best
  ```

---
<h3><b>¤ ex05 ¤</b></h3>

* Execute make
* Execute the program by running `./ex05`

* Example of running the program:

  ```text
  [tb@localhost ex05]$ ./ex05
  Harl has entered the room.
  [DEBUG]
  I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!
  [INFO]
  I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!
  [WARNING]
  I think I deserve to have some extra bacon for free. I have been coming here for years and you just started working here last month.
  [ERROR]
  This is unacceptable, I want to speak to the manager now.
  This is unexpected behavior from Harl.
  Harl has left the room.
  [tb@localhost ex05]$
