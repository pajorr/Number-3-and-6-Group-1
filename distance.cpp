#include <stdio.h>
#include <cmath>
#include <iostream> 
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

int main()
	{
		float speed = 0;
		float time = 0;
		float distance;
		std::cout<<"Enter your speed : ";
		std::cin>>speed;
		std::cout<<"Enter how many hours you've travelled : ";
		std::cin>>time;
		
		float i=1;
		while(i<=time)
		{
			distance=speed*i;
			std::cout<<"Hour";std::cout<<"   ";std::cout<<"Distance travelled"<<std::endl;
			std::cout<<i<<"      "<<distance<<std::endl;
			i++;
		}
	}
