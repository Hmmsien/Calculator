#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
#include <math.h>
#include "infixToPostfix.cpp"
using namespace std;

//enum class Operation { Add, Subtract, Multiply, Divide };

struct Calculator {

    int calculate(string post_equation) {
        stack <int> stack;

        // loop to iterate through the equation
        for (int i = 0; i < post_equation.length(); i++)
        {
            // if the character is an operand we push it in the stack
            // we have considered single digits only here
            if ( post_equation[i] >= '0' &&  post_equation[i] <= '9')
            {
                stack.push( post_equation[i] - '0');
            }
            // if the character is an operator we enter else block
            else
            {
                // pop the top two elements from the stack and save them in two integers
                int x = stack.top();
                stack.pop();
                int y = stack.top();
                stack.pop();
            
            //switch statement for operators
            switch (post_equation[i])
            {
                case '+': // addition
                          stack.push(y + x);
                          break;
                case '-': // subtraction
                          stack.push(y - x);
                          break;
                case '*': // multiplication
                          stack.push(y * x);
                          break;
                case '/': // division
                          stack.push(y / x);
                          break;
                case '^': // exponent
                          stack.push(pow(y,x));
                          break;
            }
        }    
    }
    //returning the calculated result
    return stack.top();
    }
};

int main() {

    string equation;
    string postfixEquation;
    Calculator c;

    printf("%s \n", "Enter your equation: .");
    cin >> equation;
    postfixEquation = infixToPostfix(equation);
    printf("The result of the equation is: %d\n",c.calculate(postfixEquation));
    
    return 0;
}





