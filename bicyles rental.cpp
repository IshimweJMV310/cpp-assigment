#include<iostream>
int main()

{   
	int starting_time,ending_time;
	int hourly_rate,working_time,Amount=0;
	bool check;
	Data:
	std::cout<<"enter the starting_time:\n";
	std::cin>>starting_time;
	std::cout<<"enter the ending_time:\n";
	std::cin>>ending_time;
	(starting_time>=0 && starting_time<=23&&ending_time>=1&&ending_time<=24)?check=1:check=0;
	if(check==0) 
	{
		std::cout<<"Invalid input\n";
		goto Data;	
	}
	for(;;)
	{
		
	
	if(starting_time>=0 && starting_time<7)
	{
		if(ending_time>=0 && ending_time<7)
		{
	
			Amount+=(ending_time-starting_time)*500;
			break;
		}
	
		else
		{
			Amount+=(7-starting_time)*500;
			starting_time=7;
		}
	}
	
	
	
	
	else if(starting_time>=7 && starting_time<14)
	{
		if(ending_time>=7&& ending_time<14)
		{
	
			Amount+=(ending_time-starting_time)*1000;
			break;
		}
	
		else
		{
			Amount+=(14-starting_time)*1000;
			starting_time=14;
		}
	}
	
	
	
	else if(starting_time>=14&& starting_time<19)
	{
		if(ending_time>=14&& ending_time<19)
		{
	
			Amount+=(ending_time-starting_time)*1500;
			break;
		}
	
		else
		{
			Amount+=(19-starting_time)*1500;
			starting_time=19;
		}
	}
	
	
	
		else if(starting_time>=19 && starting_time<21)
	{
		if(ending_time>=19&& ending_time<21)
		{
	
			Amount+=(ending_time-starting_time)*1000;
			break;
		}
	
		else
		{
			Amount+=(21-starting_time)*1000;
			starting_time=21;
		}
	}
	
	
	
	
	
		else if(starting_time>=21 && starting_time<24)
	{
		if(ending_time>=21&& ending_time<24)
		{
	
			Amount+=(ending_time-starting_time)*500;
			break;
		}
	
		else
		{
			Amount+=(24-starting_time)*500;
			starting_time=23;
		}
	}
}
		std::cout<<"You have to pay:"<<Amount;
		return 0;
}



