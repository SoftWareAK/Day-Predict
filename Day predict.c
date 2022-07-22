#include <stdio.h>


int main() {
	
	char day;
	
	
	printf("Please enter a day number or a day character : ");
	scanf("%s",&day);
	
	switch(day)
	{
		case '1':
		case 'a':
			printf("The day is MONDAY");break;
			
		case '2':
		case 'b':
			printf("The day is TUESDAY");break;
		
		case '3':
		case 'c':
			printf("The day is WEDNESDAY");break;
		
		case '4':
		case 'd':
			printf("The day is THURSDAY");break;
		
		case '5':
		case 'e':
			printf("The day is FRIDAY");break;
		
		case '6':
		case 'f':
			printf("The day is SATURDAY");break;
		
		case '7':
		case 'g':
			printf("The day is SUNDAY");break;
		default:
			printf("Invalid number of day or character  entered...");break;
	}
	
	return 0;
}
