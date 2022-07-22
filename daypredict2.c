#include <stdio.h>


int main() {
	
	char day;
	
	printf("Please enter the character or number of the day you want: ");
	scanf("%s",&day);
	
	if (day == 'a' || day == '1')
	{
		printf("The day is MONDAY");
	}
	else if (day == 'b' || day == '2')
	{
		printf("The day is TUESDAY");
	}
	else if (day == 'c' || day == '3')
	{
		printf("The day is WEDNESDAY");
	}
	else if (day == 'd' || day == '4')
	{
		printf("The day is THURSDAY");
	}
	else if (day == 'e' || day == '5')
	{
		printf("The day is FRIDAY");
	}
	else if (day == 'f' || day == '6')
	{
		printf("The day is SATURDAY");
	}
	else if (day == 'g' || day == '7')
	{
		printf("The day is SUNDAY");
	}
	else
	{
		printf("Invalid data entered...");
	}
	
	return 0;
}
