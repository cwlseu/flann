#include <iostream>
#define WORDSIZE 

int main(int argc, char const *argv[])
{
	for (int size = 1; size < 72; ++size)
	{
		std::cout <<size << " : "<<  ((size + (WORDSIZE - 1)) & ~(WORDSIZE - 1)) << std::endl;
		
	}
	return 0;
}