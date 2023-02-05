/*
    CH-230-A
    A8_p9
    Jose Carlos Tejeda Guzman
    jtejedaguz@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char string[100], buffer[64], name_file[30], newline = '\n';
    //Declaring the values and the buffer
	int number, i;

	scanf("%d", &number);
    getchar();
	FILE *fptr, *fptr2;
    //Creating two file pointers

	fptr = fopen("output.txt", "wb");
	if (fptr == NULL) {
	    fprintf (fptr, "Some error occurred!\n");
		exit(1) ;}
    //Open the outpuy file for writting

	for(i = 0; i < number; i++){
    //Allocating the files depending of the number
		fgets(name_file, sizeof(name_file), stdin);
		name_file[strlen(name_file)-1] = '\0';
		fptr2 = fopen(name_file, "rb");
		if ( fptr2 == NULL ) {
		    fprintf ( stderr , "Some error occurred!\n") ;
			exit(1) ;}
		
		size_t size = fread(buffer, sizeof(char), 64, fptr2);
		fwrite(buffer, 1, size, fptr);
		fwrite(&newline, 1, 1, fptr);
		fclose(fptr2);
        //Using the buffer
	}

	fclose(fptr);
	fptr = fopen("output.txt", "rb");
    //Open the output file for reading
	if ( fptr == NULL ) {
	    fprintf ( stderr , "Some error occurred!\n") ;
		exit(1) ;}

	printf("Concatenating the content of %d files ...\n", number);
	printf("The result is:\n");
	fread(string, 1, 82, fptr);
    //Printing the 3 files
	printf("%s\n", string);
    printf ("The result was written into outpu.txt");

	fclose(fptr);

	return 0;
}