#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int cont = 48;

	switch (month)
	{
		case 1:
			if (day <= 31)
			{
				cont = 49;
			}
			break;
		case 2:
			if (day <= 60)
			{
				cont = 49;
			}
			break;
		case 3:
			if (day <= 90)
			{
				cont = 49;
			}
			break;
		case 4:
			if (day <= 120)
			{
				cont = 49;
			}
			break;
		case 5:
			if (day <= 151)
			{
				cont = 49;
			}
			break;
		case 6:
			if (day <= 181)
			{
				cont = 49;
			}
			break;
		case 7:
			if (day <= 212)
			{
				cont = 49;
			}
			break;
		case 8:
			if (day <= 243)
			{
				cont = 49;
			}
			break;
		case 9:
			if (day <= 273)
			{
				cont = 49;
			}
			break;
		case 10:
			if (day <= 304)
			{
				cont = 49;
			}
			break;
		case 11:
			if (day <= 334)
			{
				cont = 49;
			}
			break;
		case 12:
			if (day <= 365)
			{
				cont = 49;
			}
			break;
		default:
			break;
	}

	if (cont == 49)
	{
		if (year % 4 == 0 && (year % 400 == 0 || year % 400 != 0))
		{
			if (year % 100 != 0)
			{
				if (month >= 2 && day >= 60)
				{
					day++;
				}
				printf("Day of the year: %d\n", day);
				printf("Remaining days: %d\n", 366 - day);
			}
			else if (year % 4 == 0 && (year % 400 == 0 || year % 100 == 0))
			{
				if (month >= 2 && day >= 60)
				{
					day++;
				}
				printf("Day of the year: %d\n", day);
				printf("Remaining days: %d\n", 366 - day);
			}
			else
			{
				if (month == 2 && day == 60)
				{
					printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
				}
				else
				{
					printf("Day of the year: %d\n", day);
					printf("Remaining days: %d\n", 365 - day);
				}
			}
		}
	}
}
