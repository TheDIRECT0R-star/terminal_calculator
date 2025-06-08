#include <unistd.h>
#include "calculator.h"
#include "utils.h"
#include <stdio.h>

int calculator(char *input)
{
    write(1, "You typed: ", 11);
    
    // print the input string safely
    int i = 0;
    while (input[i])
    {
        write(1, &input[i], 1);
        i++;
    }
    write(1, "\n", 1);

    i = 0;  // reset index to start parsing

    // skip leading spaces
    while (input[i] == ' ')
        i++;

    // parse first number
    int num1 = ft_atoi(&input[i]);

    // move index past sign if any
    if (input[i] == '+' || input[i] == '-')
        i++;

    // move index past digits of first number
    while (input[i] >= '0' && input[i] <= '9')
        i++;

    // skip spaces before operator
    while (input[i] == ' ')
        i++;

    // read operator
    char op = input[i];
    i++;

    // skip spaces before second number
    while (input[i] == ' ')
        i++;

    // parse second number
    int num2 = ft_atoi(&input[i]);

    int result = 0;

    if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    }
    else if (op == '/')
    {
        if (num2 == 0)
        {
            write(1, "ERROR: division by zero\n", 23);
	    write(1, "\n", 1);
            return 1;
        }
        result = num1 / num2;
    }
    else if (op == '%')
    {
        if (num2 == 0)
        {
            write(1, "ERROR: modulo by zero\n", 22);
            return 1;
        }
        result = num1 % num2;
    }
    else
    {
        write(1, "ERROR: unknown operator\n", 24);
        return 1;
    }

    char res_buffer[50];
    int len = sprintf(res_buffer, "Result: %d\n", result);
    write(1, res_buffer, len);

    return 0;
}

