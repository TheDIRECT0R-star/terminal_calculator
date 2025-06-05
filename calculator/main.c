#include <unistd.h>
#include "calculator.h"
#include "utils.h"

int main()
{
    char buffer[1024];     // buffer for user input
    int bytes_read;        // how many bytes we read

    while (1)
    {
        write(1, "calc> ", 6); // prompt

        bytes_read = read(0, buffer, 1023); // max 1023 to leave space for \0
        if (bytes_read <= 0)
            break;

        buffer[bytes_read] = '\0'; // null terminate the string

        // if the last character is '\n', remove it
        if (buffer[bytes_read - 1] == '\n')
            buffer[bytes_read - 1] = '\0';

        // check if user typed "exit"
        if (ft_strcmp(buffer, "exit") == 0)
            break;

        // pass input to calculator
        calculator(buffer);
    }

    return (0);
}

