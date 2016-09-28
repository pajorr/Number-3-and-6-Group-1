#include <stdio.h>
#include <cmath>
#include <iostream> 
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
int main()
{
	float oceanlevel = 0;
	float year = 2016;
		float rise = oceanlevel+1.5;
		
	while(year<2032)
	{
		std::cout<<year++;
		std::cout<<" will rise by :";
		std::cout<<rise++;
		std::cout<<"mm"<<std::endl;
	}

	return 0;
} 
	
	
 

