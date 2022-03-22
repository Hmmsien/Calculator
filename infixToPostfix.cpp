#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;


string infixToPostfix(string equation);
int prec(char c);

//covert the infix equation to postfix
string infixToPostfix(string equation) {
    
    //declare a stack to hold character
    stack<char> st; 
    //declare a string variable for the result
    string postfixEquation;
 
    for(int i = 0; i < equation.length(); i++) {
        //read each character form string equation
        char c = equation[i];
 
        // If the scanned character is
        // an operand, add it to output string.
        if(c >= '0' && c <= '9')
            postfixEquation += c;
 
        // If the scanned character is an
        // ‘(‘, push it to the stack.
        else if(c == '(')
            st.push('(');
 
        // If the scanned character is an ‘)’,
        // pop and to output string from the stack
        // until an ‘(‘ is encountered.
        else if(c == ')') {
            while(st.top() != '(')
            {
                postfixEquation += st.top();
                st.pop();
            }
            st.pop();
        }
 
        //If an operator is scanned
        else {
            //determine if stack is empty and compare the precdence
            while(!st.empty() && prec(equation[i]) <= prec(st.top())) {
                //output the most higher procedence
                postfixEquation += st.top();
                //delect it from stack
                st.pop(); 
            }
            //add current character to stack
            st.push(c);
        }
    }
 
    // Pop all the remaining elements from the stack
    while(!st.empty()) {
        postfixEquation += st.top();
        st.pop();
    }

    return postfixEquation;
}

//Function to return precedence of operators
int prec(char c) {
    if(c == '^')
        return 3;
    else if(c == '/' || c=='*')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}
