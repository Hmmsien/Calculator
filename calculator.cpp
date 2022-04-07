#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
#include <math.h>
#include <string>
#include <algorithm>
#include "infixToPostfix.h"
using namespace std;


struct Calculator {

    double calculate(string post_equation) {
        stack <double> mystack;

        // loop to iterate through the equation
        for (int i = 0; i < post_equation.length(); i++)
        {
            //if the character is blank space then continue
            if(post_equation[i] == ' ') {
                continue;
            }
            // if the character is an operand we push it in the stack
            else if (isdigit(post_equation[i]))
        {
                string num;
             
                //extract full number
                while(isdigit(post_equation[i]) || post_equation[i] == '.')
                {
                    num += post_equation[i];
                    i++;
                }
                i--;

                //push the element in the stack
                mystack.push(stod(num));
            }
            // if the character is an operator 
            else
            {
                // pop the top two elements from the stack and save them in two integers
                double x = mystack.top();
                mystack.pop();
                
                double y = mystack.top();
                mystack.pop();
                
                //switch statement for operators
                switch (post_equation[i])
                {
                    case '+': // addition
                          mystack.push(y + x);
                          break;
                    case '-': // subtraction
                          mystack.push(y - x);
                          break;
                    case '*': // multiplication
                          mystack.push(y * x);
                          break;
                    case '/': // division
                          mystack.push(y / x);
                          break;
                    case '^': // exponent
                          mystack.push(pow(y,x));
                          break;
                }
            }
        }

        //returning the calculated result
        return mystack.top();
    }
};

int main() {

    string equation;
    string postfixEquation;
    Calculator c;

    while(equation != "quit") {
    //get equation from user input
    printf("%s \n", "Enter your equation (hit: enter quit to exit): ");
    getline(cin, equation);
    //Ignore the whiter space
    equation.erase(remove(equation.begin(), equation.end(), ' '), equation.end());

    //create postfix equation
    postfixEquation = infixToPostfix(equation);

    printf("The result of the equation is: %g\n\n",c.calculate(postfixEquation));    
    }
    return 0;
}





