# CPP_Modules
<p align="center"><img src="https://cdn-images-1.medium.com/v2/resize:fit:1200/1*mb0KkzYAZDDSvdYC2MM5hg.jpeg" width="150" height="150" />

#
<h3><b>¤ Table of contents ¤</b></h3>

1) <b>How to use</b>
2) <b>Introduction</b>
3) <b>Content</b>
4) <b>General Rules</b>

---
<h3><b>¤ How to use ¤</b></h3>

* Clone the git repository.
* Choose the module directory which you would like to test.
* Follow the "README" instructions in desired module.

---
<h3><b>¤ Introduction ¤</b></h3>
<p align="center">Finally we have reached the CPP modules, our first interaction with C++ programming language. The modules are conceptualized in a way to introduce us to basic concepts and functionalities of C++ language at a start, and later on with more complex and in-depth features of the language. Every module has its own subject
it is centered around to prevent information overload.

---
<h3><b> Content </b></h3>
<p align="left">

|Module|Description|Grade|
|:---------|:----------|:----------|
CPP_00 |Namespaces, classes, member functions, stdio streams, initialization lists, static, const. |80/100
CPP_01 |Memory allocation, pointers to members, references, switch statement |95/100
CPP_02 |Ad-hoc polymorphism, operator overloading and Orthodox Canonical class form |80/100
CPP_03 |Inheritance |80/100
CPP_04 |Subtype polymorphism, abstract classes, interfaces |80/100
CPP_05 |Repetition and Exceptions | /100
CPP_06 |C++ casts | /100
CPP_07 |C++ templates | /100
CPP_08 |Templated containers, iterators, algorithms | /100
CPP_09 |STL | /100

---
<h3><b>¤ General Rules ¤</b></h3>

<details>
  <summary>Subject rules</summary>

* <b>COMPILING</b>

  - Compile your code with c++ and the flags -Wall -Wextra -Werror.

  - Your code should still compile if you add the flag -std=c++98.
 
* <b>FORMATTING AND NAMING CONVENTIONS</b>

  - The exercise directories will be named this way: ex00, ex01, ... , exn.
 
  - Name your files, classes, functions, member functions and attributes as required in the guidelines.
 
  - Write class names in <b>UpperCamelCase</b> format. Files containing class code will
    always be named according to the class name. For instance:
    `ClassName.hpp/ClassName.h`, `ClassName.cpp`, or `ClassName.tpp`. Then, if you
    have a header file containing the definition of a class "BrickWall" standing for a
    brick wall, its name will be `BrickWall.hpp`.

  - Unless specified otherwise, every output messages must be ended by a new-line
    character and displayed to the standard output.

  - Goodbye Norminette! No coding style is enforced in the C++ modules. You can
    follow your favorite one. But keep in mind that a code your peer-evaluators can’t
    understand is a code they can’t grade. Do your best to write a clean and readable
    code.

* <b>ALLOWED/FORBIDDEN</b>

  - You are allowed to use almost everything from the standard library. Thus, instead
    of sticking to what you already know, it would be smart to use as much as possible
    the C++-ish versions of the C functions you are used to.

  -  However, you can’t use any other external library. It means C++11 (and derived
    forms) and Boost libraries are forbidden. The following functions are forbidden
    too: `*printf()`, `*alloc()` and `free()`. If you use them, your grade will be 0 and
    that’s it.

  - Note that unless explicitly stated otherwise, the using namespace `<ns_name>` and
    `friend` keywords are forbidden. Otherwise, your grade will be -42.

  - You are allowed to use the STL in the Module 08 and 09 only. That means:
    no Containers (vector/list/map/and so forth) and no Algorithms (anything that
    requires to include the `<algorithm>` header) until then. Otherwise, your grade will
    be -42.

* <b>A FEW DESIGN REQUIREMENTS</b>

  - Memory leakage occurs in C++ too. When you allocate memory (by using the new
    keyword), you must avoid memory leaks.

  - From Module 02 to Module 09, your classes must be designed in the Orthodox
    Canonical Form, except when explicitely stated otherwise.

  - Any function implementation put in a header file (except for function templates)
    means 0 to the exercise.

  - You should be able to use each of your headers independently from others. Thus,
    they must include all the dependencies they need. However, you must avoid the
    problem of double inclusion by adding include guards. Otherwise, your grade will
    be 0.

* <b>README</b>

  - You can add some additional files if you need to (i.e., to split your code). As these
    assignments are not verified by a program, feel free to do so as long as you turn in
    the mandatory files.

  - Sometimes, the guidelines of an exercise look short but the examples can show
    requirements that are not explicitly written in the instructions.

* HINT: You will have to implement a lot of classes. This can seem tedious,
        unless you’re able to script your favorite text editor.

* INFO: You are given a certain amount of freedom to complete the exercises.
        However, follow the mandatory rules and don’t be lazy. You would
        miss a lot of useful information! Do not hesitate to read about
        theoretical concepts.

</details>
