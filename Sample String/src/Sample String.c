/*
 ============================================================================
 Name        : Sample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[20];
	setbuf(stdout,NULL);
	printf("Enter a name\n");
	//scanf("%s",name);
	gets(name);
	printf("Entered name : %s",name);
	return EXIT_SUCCESS;
}
