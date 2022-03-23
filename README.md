# Calculator
A user-defined calculator struct type written in C++. The program provides standard calculator functionality to solve the equation which End-user input into program.

# Project Description
First get input equation from user. Then create a header file(infixToPostfix.h) to convert equation to postfix format using stack.\
Calculate the postfix equation using stack and push result step by step\
Finally output the top of stack which store the final result.

# Dependencies 

You must have the following installed. The linux commands to install necessary packages shown below: 

* GNU AWK
  ```sh
  sudo apt-get update
  sudo apt-get install gawk
  ```
* GNU Make
  ```sh
  sudo apt-get install build-essential
  ```

# Run
git clone this repo\
To run proj1 make sure you are in the root of the project repository and run `make lab2`.\ 
after program display "Enter your equation: "\
enter your equation through input\
hit enter to get the result

# Test code
```sh
$ make lab2
g++ calculator.cpp -o calculator && ./calculator
Enter your equation: 
6+4*10-7
The result of the equation is: 39
```
```sh
$ make lab2
g++ calculator.cpp -o calculator && ./calculator
Enter your equation:
5^2+11
The result of the equation is: 36
```

# Tech/Framework used
Understanding how stack WORK.\
Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end (top) and an element is removed from that end only. 

empty() – Returns whether the stack is empty\
top() – Returns a reference to the top most element of the stack \
push(g) – Adds the element ‘g’ at the top of the stack\
pop() – Deletes the top most element of the stack 

