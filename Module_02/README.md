# CPP_02
<p align="center"><img src="https://cdn-images-1.medium.com/v2/resize:fit:1200/1*mb0KkzYAZDDSvdYC2MM5hg.jpeg" width="150" height="150" />


<p align="center"><b>¤ Description ¤</b>

<p align="center">This module is designed to help understand Ad-hoc polymorphism, overloads and orthodox canonical classes in CPP.</p>

#

<h3><b>¤ Table of contents ¤</b></h3>

1) <b>ex00</b>
2) <b>ex01</b>
3) <b>ex02</b>


---
<h3><b>¤ ex00 ¤</b></h3>

<details>
  <summary>Subject</summary>
  
  |<b>Exercise 00: My First Class in Orthodox Canonical Form</b>|
  |:----------------|
  |Turn in directory: ex00/|
  |Files to turn in: Makefile, main.cpp, Fixed.{h, hpp}, Fixed.cpp|
  |Forbidden functions : None|

  * Until today, every number you used in your code was basically either an integer or a
    floating-point number, or any of their variants (short, char, long, double, and so forth).
    After reading the article above, it’s safe to assume that integers and floating-point numbers have opposite caracteristics.

  * You are going to discover a new and awesome number
    type: fixed-point numbers! Forever missing from the scalar types of most languages,
    fixed-point numbers offer a valuable balance between performance, accuracy, range and
    precision. That explains why fixed-point numbers are particularly applicable to computer
    graphics, sound processing or scientific programming, just to name a few.

  * Create a class in Orthodox Canonical Form that represents a fixed-point number:

    1\) Private members:

      - An integer to store the fixed-point number value.
   
      - A static constant integer to store the number of fractional bits. Its value
        will always be the integer literal 8.

    2\) Public members:

      - A default constructor that initializes the fixed-point number value to 0.
   
      -  A copy constructor.
   
      -  A copy assignment operator overload.
   
      -  A destructor.
   
      -  A member function int getRawBits( void ) const;
        that returns the raw value of the fixed-point value.

      - A member function void setRawBits( int const raw );
        that sets the raw value of the fixed-point number.

  * Running this code:

      ```ruby
      #include <iostream>
      int main( void ) {
      Fixed a;
      Fixed b( a );
      Fixed c;
      c = b;
      std::cout << a.getRawBits() << std::endl;
      std::cout << b.getRawBits() << std::endl;
      std::cout << c.getRawBits() << std::endl;
      return 0;
      }
      ```

  * Should output something simmilar to:

    ```text
    $> ./a.out
    Default constructor called
    Copy constructor called
    Copy assignment operator called // <-- This line may be missing depending on your implementation
    getRawBits member function called
    Default constructor called
    Copy assignment operator called
    getRawBits member function called
    getRawBits member function called
    0
    getRawBits member function called
    0
    getRawBits member function called
    0
    Destructor called
    Destructor called
    Destructor called
    $>
    
</details>

<details>
  <summary>Program Execution</summary>

* Execute make
* Execute the program by running `./ex00`

* Example of running the program:

  ```text
  [tb@localhost ex00]$ ./ex00
  Default constructor called
  Copy constructor called
  Copy assignment operator called
  getRawBits member function called
  Default constructor called
  Copy assignment operator called
  getRawBits member function called
  getRawBits member function called
  0
  getRawBits member function called
  0
  getRawBits member function called
  0
  Destructor called
  Destructor called
  Destructor called
  [tb@localhost ex00]$
  ```

</details>

---
