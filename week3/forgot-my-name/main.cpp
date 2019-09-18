#include <iostream>
char *my_name()
{
    char myname[6] = { 'J', 'e', 'r', 'o', 'e', 'n' };
    
    return myname;
}

int main(int argc, char **argv)
{
    char *your_name = my_name();
    for(int i = 0; i < 6; ++i)
        std::cout << your_name[i];
    std::cout << std::endl;
}
