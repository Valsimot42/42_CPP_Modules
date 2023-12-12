# CPP_00
<p align="center"><img src="https://cdn-images-1.medium.com/v2/resize:fit:1200/1*mb0KkzYAZDDSvdYC2MM5hg.jpeg" width="150" height="150" />

<p align="center"><b>¤ Description ¤</b>

<p align="center">This first module of C++ is designed to help understand the specifities of the language when compared to C. Time to dive into Object Oriented Programming!</p>

#

<h3><b>¤ Table of contents ¤</b></h3>

1) <b>ex00</b>
2) <b>ex01</b>

---
<h3><b>¤ ex00 ¤</b></h3>

<details>
  <summary>Subject</summary>

  |<b>Exercise 00: Megaphone</b>|
  |:----------------|
  |Turn in directory: ex00/|
  |Files to turn in: Makefile, megaphone.cpp|
  |Forbidden functions : None|

  * Just to make sure that everybody is awake, write a program that behaves as follows:

    ```text
    $>./megaphone "shhhhh... I think the students are asleep..."
    SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
    $>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
    DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
    $>./megaphone
    * LOUD AND UNBEARABLE FEEDBACK NOISE *
    $>
    ```
    
</details>

<details>
  <summary>Execute Program</summary>

* Execute make
* Execute the program by running `./megaphone [your input]`

* Example of running with arguments:

  ```shell
  [tb@localhost ~]$ ./megaphone This is a test!
  ```

    Output will be as follows:

  ```shell
  THIS IS A TEST!
  ```
  
* If ran without arguments:

    ```shell
    [tb@localhost ~]$ ./megaphone
    ```

    Output will be as follows:

  ```shell
  * LOUD AND UNBEARABLE FEEDBACK NOISE *
  ```

</details>

---
<h3><b>¤ ex01 ¤</b></h3>

<details>
  <summary>Subject</summary>

  |<b>Exercise 00: My awesome PhoneBook</b>|
  |:----------------|
  |Turn in directory: ex01/|
  |Files to turn in: Makefile, *.cpp, *.{h, hpp}|
  |Forbidden functions : None|

  * Welcome to the 80s and their unbelievable technology! Write a program that behaves
    like a crappy awesome phonebook software.

  * You have to implement two classes:

    1\) PHONEBOOK

      - It has an array of contracts.
   
      - It can store a maximum of 8 contacts. If the user tries to add a 9th contact,
        replace the oldest one by the new one.

      - Please note that dynamic allocation is forbidden.
   
    2\) CONTACT

      -  Stands for a phonebook contact.
   
  * In your code, the phonebook must be instantiated as an instance of the PhoneBook
    class. Same thing for the contacts. Each one of them must be instantiated as an instance
    of the Contact class. You’re free to design the classes as you like but keep in mind that
    anything that will always be used inside a class is private, and that anything that can be
    used outside a class is public.

  * On program start-up, the phonebook is empty and the user is prompted to enter one
    of three commands. The program only accepts ADD, SEARCH and EXIT.

    1\) ADD: save a new contact

      - If the user enters this command, they are prompted to input the information
        of the new contact one field at a time. Once all the fields have been completed,
        add the contact to the phonebook.

      - The contact fields are: first name, last name, nickname, phone number, and
        darkest secret. A saved contact can’t have empty fields.

    2\) SEARCH: display a specific contact

      - Display the saved contacts as a list of 4 columns: index, first name, last
        name and nickname.

      - Each column must be 10 characters wide. A pipe character (’|’) separates
        them. The text must be right-aligned. If the text is longer than the column,
        it must be truncated and the last displayable character must be replaced by a
        dot (’.’).

      - Then, prompt the user again for the index of the entry to display. If the index
        is out of range or wrong, define a relevant behavior. Otherwise, display the
        contact information, one field per line.

    3\) EXIT

      - The program quits and the contacts are lost forever!
   
    4\) ANY OTHER INPUT IS DISCARDED.

  * Once a command has been correctly executed, the program waits for another one. It
    stops when the user inputs EXIT.

</details>

<details>
  <summary>Execute Program</summary>

* Execute make
* Execute the program by running `./phonebook`

* You will be presented with following line

  ```shell
  Enter a command: <ADD> <SEARCH> <EXIT>
  ```

* `<ADD>` allows you to add a contact. These are the following parameters that you need to enter:<br>
   Enter contact's First name (i.e. Joe)<br>
   Enter contact's Last name (i.e. Smith)<br>
   Enter contact's Nickname (i.e. Smithy)<br>
   Enter contact's Phone Number (i.e. 749487354)<br>
   Enter contact's Dark Secret (i.e. Pie Eater)<br>
 
  Upon entering the parameters, if `<SEARCH>` is executed, we will be presented with something like this:

  ```shell
  |------------------------------------------------------|
  |   Index  |First Name|Last Name | Nickname |  Number  |
  |------------------------------------------------------|
  |         0|       Joe|     Smith|    Smithy| 749487354|
  |------------------------------------------------------|
  Enter index of contact to expand or press ENTER to return:
  ```

* We can enter the index `0` to expand the details about our contact, and if we do, we will get the following printouts in the terminal:

  ```shell
  0
  Joe
  Smith
  Smithy
  749487354
  Pie Eater
  ```

* If we press `ENTER`, we will be prompted back to our first message to enter a command, and this time, if we enter `<EXIT>`, we will exit the program.

</details>
