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
