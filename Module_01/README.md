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
