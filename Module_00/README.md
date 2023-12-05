# CPP_00
<p align="center"><img src="https://cdn-images-1.medium.com/v2/resize:fit:1200/1*mb0KkzYAZDDSvdYC2MM5hg.jpeg" width="150" height="150" />

#
<h3><b>¤ Table of contents ¤</b></h3>

1) <b>ex00</b>
2) <b>ex01</b>

---
<h3><b>¤ ex00 ¤</b></h3>

* Execute make
* Execute the program by running `./megaphone [your input]`

* Example of running with arguments:

  ```shell
  ./megaphone This is a test!
  ```

    Output will be as follows:

  ```shell
  THIS IS A TEST!
  ```
  
* If ran without arguments:

    ```shell
    ./megaphone
    ```

    Output will be as follows:

  ```shell
  * LOUD AND UNBEARABLE FEEDBACK NOISE *
  ```

---
<h3><b>¤ ex01 ¤</b></h3>

* Execute make
* Execute the program by running `./phonebook`

* You will be presented with following line

  ```shell
  Enter a command: <ADD> <SEARCH> <EXIT>
  ```

* `<ADD>` allows you to add a contact. These are the following parameters that you need to enter:
1) Enter contact's First name (i.e. Joe)
2) Enter contact's Last name (i.e. Smith)
3) Enter contact's Nickname (i.e. Smithy)
4) Enter contact's Phone Number (i.e. 749487354)
5) Enter contact's Dark Secret (i.e. Pie Eater)
 
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
