/*
 ============================================================================
 Name        : Star.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,num;
			setbuf(stdout,NULL);
			printf("Enter a number\n\n");
			scanf("%d", &num);
			for (i=1; i<=num;i++){
				for (j=0;j<i;j++){
					printf("* ");
				}
				printf("\n");
			}

	return EXIT_SUCCESS;
}
