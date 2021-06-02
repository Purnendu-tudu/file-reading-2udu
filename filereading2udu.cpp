#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>

int main(int argc , char *argv[]){
	char c;
	FILE *fptr;
	printf("\n A SIMPLE FILE READER BY - 2UDU");
	
	if((fptr = fopen(argv[1], "r")) == NULL){
		printf("\n No File name is Provided");
		printf("\n Usage: fileReading <your file name>");
		printf("\n Example: filereading filename.txt");
		exit(1);
	}
	printf("\n Output: ");
	while(1){
		c = fgetc(fptr);
		if(c == EOF){
			break;
		}
		printf("%c", c);
		usleep(60000);
		
	}
	fclose(fptr);
	return 0;
}
