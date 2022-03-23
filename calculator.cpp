#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
#include <math.h>
#include "infixToPostfix.cpp"
using namespace std;

//enum class Operation { Add, Subtract, Multiply, Divide };

struct Calculator {

    int calculate(string post_equation) {
        stack <int> mystack;

        // loop to iterate through the equation
        for (int i = 0; i < post_equation.length()-1; i++)
        {
            //if the character is blank space then continue
            if(post_equation[i] == ' ') {
                continue;
            }
            // if the character is an operand we push it in the stack
            else if (isdigit(post_equation[i]))
        {
                int num=0;
             
                //extract full number
                while(isdigit(post_equation[i]))
                {
                    num = num * 10 + (int)(post_equation[i] - '0');
                    i++;
                }
                i--;
            
                //push the element in the stack
                mystack.push(num);
            }
            // if the character is an operator 
            else
            {
                // pop the top two elements from the stack and save them in two integers
                int x = mystack.top();
                mystack.pop();
                int y = mystack.top();
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

    printf("%s \n", "Enter your equation: .");
    cin >> equation;
    postfixEquation = infixToPostfix(equation);
    printf("The result of the equation is: %d\n",c.calculate(postfixEquation));
    
    return 0;
}





