// final.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <chrono>
#include <thread>


void coffeeProcess()
{
	int totalBeans;
	int grounds = 0;
	int cups;
	int waterCount;
	int water = 75;
	int placeHolder;

	std::cout << "How many cups do you want?\n";
	std::cin >> cups;
	std::cout << "Input bean count:\n";
	std::cin >> totalBeans;
	std::cout << "Input water\n";
	std::cin >> waterCount;

	if (waterCount > cups)
	{
		std::cout << "There is too much water for your Coffee.\n";
	}
	else if (waterCount < cups)
	{
		std::cout << "There is not enough water for your coffee.\n";
	}

	if (waterCount == cups)
	{
		if (cups >= 1)
		{
			if (totalBeans >= 45)
			{
				totalBeans = totalBeans - 45;
				std::cout << "Grinding beans\n";
				placeHolder = cups;
				grounds = grounds + 10;
				placeHolder--;
			}
			else
			{
				std::cout << "There is not enough beans for coffee. You need at least 45 beans per cup of coffee.\n";
				
			}
		}

		if (grounds >= 10)
		{
			std::cout << "Heating Water\n";
			for (int i = 0; i < 11; i++)
			{
				water = water + 10;
				std::this_thread::sleep_for(std::chrono::milliseconds(10));
			}
		}
		if (grounds >= 10)
		{
			if (water == 185)
			{
				std::cout << "here is your " << cups << " cups of coffee.";

			}
		}
	}
}


int main()
{
	coffeeProcess();
}
