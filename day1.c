#include <stdio.h>
#include <stdlib.h>

int main() {
	
	FILE *filePointer = fopen("input_day1.txt", "r");
	int position = 0;
	char ch;
	int counter = 1;

	while ((ch = fgetc(filePointer)) != EOF)
	{
		if (ch == '(') 
		{
			position++;
		}
		else if (ch == ')')
		{
			position--;
		}

		if (position == -1) 
		{
			printf("Entered basement on position %d", counter);
		}
		counter++;
	}

	printf("%d", position);
	return 0;
}

