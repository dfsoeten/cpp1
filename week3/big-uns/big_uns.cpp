#include "read_int.h"
#include <iostream>
using namespace std;

// use this array to obtain the big digits
const char big_digits[10][5][6] =
{
	{
	" ### ",
	"#   #",
	"#   #",
	"#   #",
	" ### ",
	},
	{
	"  #  ",
	" ##  ",
	"  #  ",
	"  #  ",
	" ### ",
	},
	{
	"#### ",
	"    #",
	" ### ",
	"#    ",
	"#####",
	},
	{
	"#### ",
	"    #",
	"#### ",
	"    #",
	"#### ",
	},
	{
	"#   #",
	"#   #",
	"#####",
	"    #",
	"    #",
	},
	{
	"#####",
	"#    ",
	"#### ",
	"    #",
	"#### ",
	},
	{
	" ####",
	"#    ",
	"#####",
	"#   #",
	" ### ",
	},
	{
	"#####",
	"    #",
	"   # ",
	"  #  ",
	" #   ",
	},
	{
	" ### ",
	"#   #",
	" ### ",
	"#   #",
	" ### ",
	},
	{
	" ### ",
	"#   #",
	"#####",
	"    #",
	" ### ",
	},
};

//********************************************************************
// Writes the number a in large digits to standard output
// Uses the global array big_digits
//
// Example: If a = 82, this function will output: 
//
//    ###   #### 
//   #   #      #
//    ###    ### 
//   #   #  #    
//    ###   #####
//
//********************************************************************
void write_big(int a)
{
    std::cout << a << std::endl;
}

//********************************************************************
int main()
{
	while(int a = read_int("Enter a number (0 exits): ")) 
	{
		write_big(a);
	}
    return 0;
}
