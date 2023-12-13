# CPP_03
<p align="center"><img src="https://cdn-images-1.medium.com/v2/resize:fit:1200/1*mb0KkzYAZDDSvdYC2MM5hg.jpeg" width="150" height="150" />


<p align="center"><b>¤ Description ¤</b>

<p align="center">This module is designed to help understand Inheritance in CPP.</p>

#

<h3><b>¤ Table of contents ¤</b></h3>

1) <b>ex00</b>
2) <b>ex01</b>
3) <b>ex02</b>

---

<h3><b>¤ ex00 ¤</b></h3>

<details>
  <summary>Subject</summary>
  
  |<b>Exercise 00: Aaaaand... OPEN!</b>|
  |:----------------|
  |Turn in directory: ex00/|
  |Files to turn in:  Makefile, main.cpp, ClapTrap.{h, hpp}, ClapTrap.cpp|
  |Forbidden functions : None|

  * First, you have to implement a class. It will be called ClapTrap and will have the following private attributes initialized
    to the values specified in brackets:

    1\) Name, which is passed as parameter to a constructor.

    2\) Hit points (10), represent the health of the ClapTrap.

    3\) Energy points (10).

    4\) Attack damage (0).

  * Add the following public member functions so the ClapTrap looks more realistic:

    1\) `void attack(const std::string& target);`

    2\) `void takeDamage(unsigned int amount);`

    3\) `void beRepaired(unsigned int amount);`

  * When ClapTrack attacks, it causes its target to lose `<attack damage>` hit points.
    When ClapTrap repairs itself, it gets `<amount>` hit points back. Attacking and repairing
    cost 1 energy point each. Of course, ClapTrap can’t do anything if it has no hit points
    or energy points left.

  * In all of these member functions, you have to print a message to describe what happens. For example, the
    `attack()` function may display something like (of course, without the angle brackets):

      `ClapTrap <name> attacks <target>, causing <damage> points of damage!`

  * The constructors and destructor must also display a message, so your peer-evaluators
    can easily see they have been called.
    
</details>

<details>
  <summary>Program Execution</summary>

* Execute make
* Execute the program by running `./ex00`

* Example of running the program:

  ```text
  [tb@localhost ex00]$ ./ex00
  --------------------------------------------------
  -- Battle music starts... --
  ClapTrap Freya has joined the battle!
  ClapTrap Freya attacks Green Dragon for 0 damage.
  ClapTrap Freya took 5 points of damage!
  ClapTrap Freya recovered 4 hit points!
  ClapTrap Freya took 5 points of damage!
  ClapTrap Freya recovered 4 hit points!
  ClapTrap Freya took 10 points of damage!
  ClapTrap Freya is KO!
  ClapTrap Freya is KO.
  ClapTrap Freya is KO.
  ClapTrap Freya has left the battle!
  --------------------------------------------------
  -- Try again? --
  --------------------------------------------------
  -- Battle music starts... --
  ClapTrap Freya has joined the battle!
  ClapTrap Green Dragon has joined the battle!
  ClapTrap Freya attacks Green Dragon
  ClapTrap Green Dragon took 0 points of damage!
  ClapTrap Freya attacks Green Dragon
  ClapTrap Green Dragon took 0 points of damage!
  ClapTrap Freya attacks Green Dragon
  ClapTrap Green Dragon took 0 points of damage!
  ClapTrap Freya attacks Green Dragon
  ClapTrap Green Dragon took 0 points of damage!
  ClapTrap Freya attacks Green Dragon
  ClapTrap Green Dragon took 0 points of damage!
  ClapTrap Green Dragon slammed its tail against Freya!
  ClapTrap Freya took 5 points of damage!
  ClapTrap Freya recovered 1 hit points!
  ClapTrap Freya recovered 1 hit points!
  ClapTrap Freya recovered 1 hit points!
  ClapTrap Freya recovered 1 hit points!
  ClapTrap Freya recovered 1 hit points!
  ClapTrap Freya is out of energy!
  ClapTrap Green Dragon has left the battle!
  ClapTrap Freya has left the battle!
  --------------------------------------------------
  [tb@localhost ex00]$

</details>

---
<h3><b>¤ ex01 ¤</b></h3>

<details>
  <summary>Subject</summary>
  
  |<b>Exercise 01: Serena, my love!</b>|
  |:----------------|
  |Turn in directory: ex01/|
  |Files to turn in: Files from previous exercise + ScavTrap.{h, hpp}, ScavTrap.cpp|
  |Forbidden functions : None|

  * Because you can never have enough ClapTraps, you will now create a derived robot.
    It will be named ScavTrap and will inherit the constructors and destructor from ClapTrap. However, its constructors, destructor
    and `attack()` will print different messages. After all, ClapTraps are aware of their individuality.

  * Note that proper construction/destruction chaining must be shown in your tests.
    When a ScavTrap is created, the program starts by building a ClapTrap. Destruction is
    in reverse order. Why?
  
  * ScavTrap will use the attributes of ClapTrap (update ClapTrap in consequence) and
   must initialize them to:

     1\) Name, which is passed as parameter to a constructor

     2\) Hit points (100), represent the health of the ClapTrap

     3\) Energy points (50)

     4\) Attack damage (20)

  * ScavTrap will also have its own special capacity: `void guardGate();`


</details>

<details>
  <summary>Program Execution</summary>

* Execute make
* Execute the program by running `./ex01`

* Example of running the program:

    ```text
    [tb@localhost ex01]$ ./ex01
    --------------------------------------------------
    -- Battle music starts... --
    ClapTrap Nova Dragon has joined the battle!
    ScavTrap Nova Dragon has joined the battle!
    ScavTrap Nova Dragon has entered in Gate keeper mode.
    ScavTrap Nova Dragon attacks Freya for 20 damage.
    ClapTrap Nova Dragon took 5 points of damage!
    ClapTrap Nova Dragon recovered 4 hit points!
    Freya grew tired of Nova Dragon's bullshit and used 'Jump'!
    ClapTrap Nova Dragon took 120 points of damage!
    ClapTrap Nova Dragon is KO!
    ClapTrap Nova Dragon is KO.
    ClapTrap Nova Dragon is KO.
    Nova Dragon fled the battle!
    ScavTrap Nova Dragon has left the battle!
    ClapTrap Nova Dragon has left the battle!
    --------------------------------------------------
    -- Follow in pursuit? --
    --------------------------------------------------
    -- Battle music starts... --
    ClapTrap Nova Dragon has joined the battle!
    ScavTrap Nova Dragon has joined the battle!
    ClapTrap Fratley has joined the battle!
    ClapTrap Freya has joined the battle!
    ClapTrap Freya clapped Nova Dragon
    ClapTrap Nova Dragon took 0 points of damage!
    ScavTrap Nova Dragon attacks Freya, causing 20 points of damage!
    ClapTrap Freya took 20 points of damage!
    ClapTrap Freya is KO!
    ClapTrap Fratley clapped Nova Dragon
    ClapTrap Nova Dragon took 0 points of damage!
    ScavTrap Nova Dragon attacks Fratley, causing 20 points of damage!
    ClapTrap Fratley took 20 points of damage!
    ClapTrap Fratley is KO!
    ScavTrap Nova Dragon attacks Fratley, causing 20 points of damage!
    ClapTrap Fratley is dead.
    Nova Dragon lost its balance and smashed against the rocks!
    ClapTrap Nova Dragon took 80 points of damage!
    ClapTrap Nova Dragon recovered 18 hit points!
    ClapTrap Freya has left the battle!
    ClapTrap Fratley has left the battle!
    ScavTrap Nova Dragon has left the battle!
    ClapTrap Nova Dragon has left the battle!
    Game over...
    --------------------------------------------------
    [tb@localhost ex01]$

  
</details>

---
<h3><b>¤ ex02 ¤</b></h3>

<details>
  <summary>Subject</summary>
  
  |<b>Exercise 02: Repetitive work</b>|
  |:----------------|
  |Turn in directory: ex02/|
  |Files to turn in: :  Files from previous exercises + FragTrap.{h, hpp}, FragTrap.cpp|
  |Forbidden functions : roundf (from <cmath>)|

  * Now, implement a FragTrap class that inherits from ClapTrap. It is very similar to
    ScavTrap. However, its construction and destruction messages must be different. Proper
    construction/destruction chaining must be shown in your tests. When a FragTrap is
    created, the program starts by building a ClapTrap. Destruction is in reverse order.

  * Same things for the attributes, but with different values this time:

    1\) Name, which is passed as parameter to a constructor

    2\) Hit points (100), represent the health of the ClapTrap

    3\) Energy points (100)

    4\) Attack damage (30)

  * FragTrap has a special capacity too: `void highFivesGuys(void);`

  * This member function displays a positive high fives request on the standard output.

</details>

<details>
  <summary>Program Execution</summary>

  * Execute make
  * Execute the program by running `./ex02`

  * Example of running the program:

    ```text
    [tb@localhost ex02]$ ./ex02
    --------------------------------------------------
    -- Battle music starts... --
    ClapTrap Kuja has joined the battle!
    FragTrap Kuja has joined the battle!
    FragTrap Kuja asks for a high five!
    FragTrap Kuja attacks Freya for 30 damage.
    ClapTrap Kuja took 5 points of damage!
    ClapTrap Kuja recovered 4 hit points!
    ClapTrap Kuja took 120 points of damage!
    ClapTrap Kuja is KO!
    ClapTrap Kuja is KO.
    ClapTrap Kuja is KO.
    Game over...
    FragTrap Kuja has left the battle!
    ClapTrap Kuja has left the battle!
    --------------------------------------------------
    -- Try again? --
    --------------------------------------------------
    -- Battle music starts... --
    ClapTrap Kuja has joined the battle!
    FragTrap Kuja has joined the battle!
    ClapTrap Puck has joined the battle!
    FragTrap Puck has joined the battle!
    ClapTrap Freya has joined the battle!
    ClapTrap Fratley has joined the battle!
    FragTrap Kuja asks for a high five!
    Dragoons are not amused, and ignore Kuja's request...
    FragTrap Kuja attacks Freya, causing 30 points of damage!
    ClapTrap Freya took 30 points of damage!
    ClapTrap Freya is KO!
    FragTrap Kuja attacks Fratley, causing 30 points of damage!
    ClapTrap Fratley took 30 points of damage!
    ClapTrap Fratley is KO!
    ClapTrap Puck took 30 points of damage!
    FragTrap Kuja implodes.
    ClapTrap Kuja took 99 points of damage!
    ClapTrap Kuja recovered 18 hit points!
    ClapTrap Kuja took 30 points of damage!
    ClapTrap Kuja is KO!
    ClapTrap Fratley has left the battle!
    ClapTrap Freya has left the battle!
    FragTrap Puck has left the battle!
    ClapTrap Puck has left the battle!
    FragTrap Kuja has left the battle!
    ClapTrap Kuja has left the battle!
    -- Congratulations! You won! --
    --------------------------------------------------
    [tb@localhost ex02]$
    
</details>
