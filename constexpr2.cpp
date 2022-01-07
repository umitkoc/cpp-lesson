#include <stdio.h>

int main()
{
	const int intVal = 10;

	const float floatVal = 4.14;

	const char charVal = 'A';

	const char stringVal[10] = "ABC";
	
	printf("Integer constant:%d \n", intVal );
	printf("Floating point constant: %.2f\n", floatVal );
	printf("Character constant: %c\n", charVal );
	printf("String constant: %s\n", stringVal);
	
	return 0;
}
