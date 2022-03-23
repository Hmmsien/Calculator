# Calculator
The Calculator program is written in C++. The program provides standard calculator functionality. Basically get a equation from user input. Then output the result for user.

# Getting started
git clone this repo\
run command "make lab2" on terminal to excute the program\
after program display "Enter your equation: "\
enter your equation through input\
hit enter to get the result\

# Test code
$ make lab2\
g++ calculator.cpp -o calculator && ./calculator\
Enter your equation: \
6+4*10-7\
The result of the equation is: 39\

$ make lab2\
g++ calculator.cpp -o calculator && ./calculator\
Enter your equation:\
5^2+11\
The result of the equation is: 36\

# Tech/Framework used
Understanding how stack WORK.\
Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end (top) and an element is removed from that end only. 

empty() – Returns whether the stack is empty\
top() – Returns a reference to the top most element of the stack \
push(g) – Adds the element ‘g’ at the top of the stack\
pop() – Deletes the top most element of the stack 

