#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 59;
	int i, trial=0;
	
	do
	{
		printf("Guess a number :");
		scanf("%i", &i);		
		
		if (i > answer)
			printf("high!\n");
		else if (i < answer)
			printf("low!\n");
			
		trial++;
	} while(i !=answer);
	
	printf("Conglaturation, number of trial : %i\n", trial);
	
	
	return 0;
}
