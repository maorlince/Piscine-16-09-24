#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct
{
	char *number;
	char *number_letter;
}
numbers;

int	main (int argc, char **argv)
{

	
	numbers	input_user; //je declare une variable de type NUMBERS

	if(argc == 1) 
		input_user.number = argv[1];
	else if(argc == 2)
		input_user.number = argv[2];


	//atoi(input_user.number )
	////put it on the file
	//////
	

	//

	


	FILE *file = fopen("numbers.dict", "a"); 
	//a is for appending 
	////fopen return a pointer to a file 
	//////pointer to that file
	
	


	//fprintf(file,"%i, %s\n",input_user, letter_number);
	fclose(file);
}
