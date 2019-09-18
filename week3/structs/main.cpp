#include <iostream>
struct Favourites
{
    char letter;
    int prime;
    char digit;
};

int main()
{
    Favourites my_favourites;
    my_favourites.letter = 'J';
    my_favourites.prime = 11;
    my_favourites.digit = '9';
    std::cout << "Hey, my favourite letter is " << my_favourites.letter << std::endl;
}
