#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,n;
	int sum=0;
	
	printf("input a number:");
	scanf("%i", &n);
	
	for (i=1;i<=n;i++)
		sum += i;//summation
		
	printf("The sum result is %i\n", sum);
	
	
	return 0;
}
