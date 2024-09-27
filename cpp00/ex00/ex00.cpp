
#include <string.h>
#include <iostream>

int main (int ac, char **argv)
{
    int i = 0;
    int j = 0;

    if (ac == 1)
       std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    while (argv[++ i])
    {
        j = -1;
        while (argv[i][++ j])
            std::cout << (char)toupper(argv[i][j]);
        if (argv[i + 1])
            std::cout << " ";
    }
    return 0;
}