# CPP_01
<p align="center"><img src="https://cdn-images-1.medium.com/v2/resize:fit:1200/1*mb0KkzYAZDDSvdYC2MM5hg.jpeg" width="150" height="150" />

#

<h3><b>¤ Description ¤</b></h3>

<p align="center">This module is designed to help you understand the memory allocation, reference, pointers to members and the usage of the switch in CPP.</p>

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
  <summary>Subject</summary>
  
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

<details>
  <summary>Program Execution</summary>

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

</details>

---
<h3><b>¤ ex01 ¤</b></h3>

<details>
  <summary>Subject</summary>
  
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

<details>
  <summary>Program Execution</summary>

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

</details>

---
<h3><b>¤ ex02 ¤</b></h3>

<details>
  <summary>Subject</summary>
  
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

<details>
  <summary>Program Execution</summary>

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

</details>

---
<h3><b>¤ ex03 ¤</b></h3>

<details>
  <summary>Subject</summary>
  
  |<b>Exercise 03: Unnecessary violence</b>|
  |:----------------|
  |Turn in directory: ex03/|
  |Files to turn in: Makefile, main.cpp, Weapon.{h, hpp}, Weapon.cpp, HumanA.{h, hpp}, HumanA.cpp, HumanB.{h, hpp}, HumanB.cpp|
  |Forbidden functions : None|

  * Implement a Weapon class that has:

    1\) A private attribute type, which is a string.

    2\) A `getType()` member function that returns a const reference to type.

    3\) A `setType()` member function that sets `type` using the new one passed as parameter.

  * Now, create two classes: HumanA and HumanB. They both have a Weapon and a
    name. They also have a member function attack() that displays (of course, without the
    angle brackets):

    `<name> attacks with their <weapon type>`

  * HumanA and HumanB are almost the same except for these two tiny details:

    1\) While HumanA takes the Weapon in its constructor, HumanB doesn’t.

    2\) HumanB may not always have a Weapon, whereas HumanA will always be armed.

  * If your implementation is correct, executing the following code will print an attack
    with "crude spiked club" then a second attack with "some other type of club" for both
    test cases:

    ```ruby
    int main()
    {
      {
        Weapon club = Weapon("crude spiked club");
    
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
      }
      {
        Weapon club = Weapon("crude spiked club");
    
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
      }
    
    return 0;
    }

  * Don't forget to check for memory leaks.

  * HINT: In which case do you think it would be best to use a pointer to
    Weapon? And a reference to Weapon? Why? Think about it before
    starting this exercise.

    
</details>

<details>
  <summary>Program Execution</summary>

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

</details>

---
<h3><b>¤ ex04 ¤</b></h3>

<details>
  <summary>Subject</summary>
  
  |<b>Exercise 04: Sed is for losers</b>|
  |:----------------|
  |Turn in directory: ex04/|
  |Files to turn in : Makefile, main.cpp, *.cpp, *.{h, hpp}|
  |Forbidden functions : std::string::replace|

  * Create a program that takes three parameters in the following order: a filename and
    two strings, s1 and s2.

  * It will open the file `<filename>` and copies its content into a new file
    `<filename>.replace`, replacing every occurrence of s1 with s2.

  * Using C file manipulation functions is forbidden and will be considered cheating. All
    the member functions of the class std::string are allowed, except replace. Use them
    wisely!

  * Of course, handle unexpected inputs and errors. You have to create and turn in your
    own tests to ensure your program works as expected.

</details>

<details>
  <summary>Program Execution</summary>

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

</details>

---
<h3><b>¤ ex05 ¤</b></h3>

<details>
  <summary>Subject</summary>
  
  |<b>Exercise 05: Harl 2.0</b>|
  |:----------------|
  |Turn in directory: ex05/|
  |Files to turn in : Makefile, main.cpp, Harl.{h, hpp}, Harl.cpp|
  |Forbidden functions : None|

  * Do you know Harl? We all do, do we? In case you don’t, find below the kind of
    comments Harl makes. They are classified by levels:

    1\) <b>"DEBUG"</b> level: Debug messages contain contextual information. They are mostly
        used for problem diagnosis.
        Example: "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"

    2\) <b>"INFO"</b> level: These messages contain extensive information. They are helpful for
        tracing program execution in a production environment.
        Example: "I cannot believe adding extra bacon costs more money. You didn’t put
        enough bacon in my burger! If you did, I wouldn’t be asking for more!"

    3\) <b>"WARNING"</b> level: Warning messages indicate a potential issue in the system.
        However, it can be handled or ignored.
        Example: "I think I deserve to have some extra bacon for free. I’ve been coming for
        years whereas you started working here since last month."

    4\) <b>"ERROR"</b> level: These messages indicate an unrecoverable error has occurred.
        This is usually a critical issue that requires manual intervention.
        Example: "This is unacceptable! I want to speak to the manager now."

  * You are going to automate Harl. It won’t be difficult since it always says the same
    things. You have to create a Harl class with the following private member functions:

    1\) `void debug( void );`

    2\) `void info( void );`

    3\) `void warning( void );`

    4\) `void error( void );`

  * Harl also has a public member function that calls the four member functions above
    depending on the level passed as parameter:

    `void complain( std::string level );`

  * The goal of this exercise is to use pointers to member functions. This is not a
    suggestion. Harl has to complain without using a forest of if/else if/else. It doesn’t think
    twice!

  * Create and turn in tests to show that Harl complains a lot. You can use the examples
    of comments listed above in the subject or choose to use comments of your own.


</details>

<details>
  <summary>Program Execution</summary>

* Execute make
* Execute the program by running `./ex05`

<details>
  <summary>Example</summary>

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
  ```
</details>
