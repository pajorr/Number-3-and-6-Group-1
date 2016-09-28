# Number-3-and-6-Group-1
Ocean Levels &amp; Distance Travelled

Ocean Levels

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
	
  
Distance Travelled

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
