# CPP_04
<p align="center"><img src="https://cdn-images-1.medium.com/v2/resize:fit:1200/1*mb0KkzYAZDDSvdYC2MM5hg.jpeg" width="150" height="150" />


<p align="center"><b>¤ Description ¤</b>

<p align="center">This module is designed to help understand Subtype polymorphism, abstract classes and interfaces in CPP.</p>

#

<h3><b>¤ Table of contents ¤</b></h3>

1) <b>ex00</b>
2) <b>ex01</b>
3) <b>ex02</b>

---
<h3><b>¤ ex00 ¤</b></h3>

<details>
  <summary>Subject</summary>
  
  |<b>Exercise 00: Polymorphism</b>|
  |:----------------|
  |Turn in directory: ex00/|
  |Files to turn in:  Makefile, main.cpp, *.cpp, *.{h, hpp}|
  |Forbidden functions : None|

  * For every exercise, you have to provide the most complete tests you can.
    Constructors and destructors of each class must display specific messages. Don’t use the
    same message for all classes.

  * Start by implementing a simple base class called Animal. It has one protected
    attribute: `std::string type;`

    - Implement a Dog class that inherits from Animal.
   
    - Implement a Cat class that inherits from Animal.

  * These two derived classes must set their type field depending on their name. Then,
    the Dog’s type will be initialized to "Dog", and the Cat’s type will be initialized to "Cat".
    The type of the Animal class can be left empty or set to the value of your choice.

  * Every animal must be able to use the member function: `makeSound()`. It will print an appropriate
    sound (cats don’t bark).

  * Running this code should print the specific sounds of the Dog and Cat classes, not
    the Animal’s:

      ```ruby
      int main()
    {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
      
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    ...
      
    return 0;
    }
    ```

  * To ensure you understood how it works, implement a WrongCat class that inherits
    from a WrongAnimal class. If you replace the Animal and the Cat by the wrong ones
    in the code above, the WrongCat should output the WrongAnimal sound.
    
</details>

<details>
  <summary>Program Execution</summary>

* Execute make
* Execute the program by running `./ex00`

* Example of running the program:

  ```text
  [tb@localhost ex00]$ ./ex00
  --------------------------------------------------
  // BASE TESTS //
  --------------------------------------------------
  Animal has been spotted.
  Animal has been spotted.
  Cat has been spotted.
  Animal has been spotted.
  Dog has been spotted.
  Animal 
  Cat 
  Dog 
  Default animal sound.
  Meow!
  Woof!
  Animal vanished.
  Cat was ran over.
  Animal vanished.
  What da dog doin'?.
  Animal vanished.
  --------------------------------------------------
  // WRONG SOUND //
  --------------------------------------------------
  WrongAnimal has been spotted.
  WrongAnimal has been spotted.
  WrongCat has been spotted.
  WrongAnimal 
  WrongCat 
  Default WrongAnimal sound.
  REEEEEEEE.....Meow!
  WrongAnimal vanished.
  WrongCat was ran over.
  WrongAnimal vanished.
  --------------------------------------------------
  // SOUND TESTS //
  --------------------------------------------------
  Animal has been spotted.
  Animal has been spotted.
  Dog has been spotted.
  Animal has been spotted.
  Cat has been spotted.
  Default animal sound.
  Woof!
  Meow!
  Cat was ran over.
  Animal vanished.
  What da dog doin'?.
  Animal vanished.
  Animal vanished.
  --------------------------------------------------
  // DESTRUCTION TESTS //
  --------------------------------------------------
  Animal has been spotted.
  Cat has been spotted.
  Cat
  Meow!
  Animal has been spotted.
  Cat has been spotted.
  Cat
  Meow!
  Cat was ran over.
  Animal vanished.
  Cat was ran over.
  Animal vanished.
  --------------------------------------------------
  [tb@localhost ex00]$

</details>

---
