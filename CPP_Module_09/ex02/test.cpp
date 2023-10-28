#include <iostream>
#include <sstream>
#include <stdexcept>
#include <cstring>

bool isInteger(const char *str)
{
    std::istringstream iss(str);
    int num;
    return (iss >> num) && iss.eof();
}

void parseAndCheck(char **str, int length)
{
    for (int i = 0; i < length; i++)
    {
        char *token = str[i];

        // Check if the token contains any alphabet character
        for (int j = 0; token[j] != '\0'; j++)
        {
            if (std::isalpha(token[j]))
            {
                throw std::runtime_error("Error: String contains alphabet characters.");
            }
        }

        // Check if the token is a negative number
        if (token[0] == '-' && isInteger(token + 1))
        {
            throw std::runtime_error("Error: String contains a negative number.");
        }

        // Check if the token is a floating-point number
        if (strchr(token, '.') != NULL)
        {
            throw std::runtime_error("Error: String contains a floating-point number.");
        }
    }
}

int main()
{
    try
    {
        char *input[] = {"123", "-456", "789.0", "abc", "42"};
        int length = sizeof(input) / sizeof(input[0]);

        parseAndCheck(input, length);
        std::cout << "String is valid." << std::endl;
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
