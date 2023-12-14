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
<h3><b>¤ ex01 ¤</b></h3>

<details>
  <summary>Subject</summary>
  
  |<b>Exercise 01: I don’t want to set the world on fire</b>|
  |:----------------|
  |Turn in directory: ex01/|
  |Files to turn in: Files from previous exercise + *.cpp, *.{h, hpp}|
  |Forbidden functions : None|

  * Constructors and destructors of each class must display specific messages.

  * Implement a Brain class. It contains an array of 100 std::string called ideas.
    This way, Dog and Cat will have a private Brain* attribute.
    Upon construction, Dog and Cat will create their Brain using new Brain();
    Upon destruction, Dog and Cat will delete their Brain.

  * In your main function, create and fill an array of Animal objects. Half of it will
    be Dog objects and the other half will be Cat objects. At the end of your program
    execution, loop over this array and delete every Animal. You must delete directly dogs
    and cats as Animals. The appropriate destructors must be called in the expected order.

  * Don’t forget to check for memory leaks.

  * A copy of a Dog or a Cat mustn’t be shallow. Thus, you have to test that your copies
    are deep copies!

    ```ruby
    int main()
    {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;//should not create a leak
    delete i;
    ...
    
    return 0;
    }
    ```

</details>

<details>
  <summary>Program Execution</summary>

* Execute make
* Execute the program by running `./ex01`

* Example of running the program:

  ```text
  [tb@localhost ex01]$ ./ex01
  --------------------------------------------------
  // BASE TESTS //
  --------------------------------------------------
  Animal has been spotted.
  Dog has been spotted.
  Brain was generated.
  Animal has been spotted.
  Cat has been spotted.
  Brain was generated.
  Brain has been discarded.
  What da dog doin'?.
  Animal vanished.
  Brain has been discarded.
  Cat was ran over.
  Animal vanished.
  --------------------------------------------------
  // DEEP COPIES //
  --------------------------------------------------
  Animal has been spotted.
  Dog has been spotted.
  Brain was generated.
  Animal copied another.
  Animal who?
  Brain was generated.
  Weird Frankenstein shit is happening.
  Dog was copied.
  Dog was cloned.
  Animal copied another.
  Animal who?
  Brain was generated.
  Weird Frankenstein shit is happening.
  Dog was copied.
  Dog was cloned.
  Sit!
  Stay!
  Roll!
  Brain has been discarded.
  What da dog doin'?.
  Animal vanished.
  Brain has been discarded.
  What da dog doin'?.
  Animal vanished.
  Brain has been discarded.
  What da dog doin'?.
  Animal vanished.
  --------------------------------------------------
  // ANIMAL ARRAY //
  --------------------------------------------------
  Animal has been spotted.
  Dog has been spotted.
  Brain was generated.
  Animal has been spotted.
  Dog has been spotted.
  Brain was generated.
  Animal has been spotted.
  Dog has been spotted.
  Brain was generated.
  Animal has been spotted.
  Dog has been spotted.
  Brain was generated.
  Animal has been spotted.
  Dog has been spotted.
  Brain was generated.
  Animal has been spotted.
  Cat has been spotted.
  Brain was generated.
  Animal has been spotted.
  Cat has been spotted.
  Brain was generated.
  Animal has been spotted.
  Cat has been spotted.
  Brain was generated.
  Animal has been spotted.
  Cat has been spotted.
  Brain was generated.
  Animal has been spotted.
  Cat has been spotted.
  Brain was generated.
  Dog
  Cat
  Brain has been discarded.
  What da dog doin'?.
  Animal vanished.
  Brain has been discarded.
  What da dog doin'?.
  Animal vanished.
  Brain has been discarded.
  What da dog doin'?.
  Animal vanished.
  Brain has been discarded.
  What da dog doin'?.
  Animal vanished.
  Brain has been discarded.
  What da dog doin'?.
  Animal vanished.
  Brain has been discarded.
  Cat was ran over.
  Animal vanished.
  Brain has been discarded.
  Cat was ran over.
  Animal vanished.
  Brain has been discarded.
  Cat was ran over.
  Animal vanished.
  Brain has been discarded.
  Cat was ran over.
  Animal vanished.
  Brain has been discarded.
  Cat was ran over.
  Animal vanished.
  --------------------------------------------------
  [tb@localhost ex01]$

</details>

---
