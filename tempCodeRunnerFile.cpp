#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
#include <math.h>
#include "infixToPostfix.h"
using namespace std;

struct Calculator {

    //enum class Operation { Add = '+', Subtract = '-', Multiply = '*', Divide = '/', Exponent = '^' };

    double calculate(string post_equation) {
        stack <double> mystack;

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