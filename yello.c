//indent -kr -br -ce -brf yello.c

#include <stdio.h>
#include <limits.h>

void printE(void) {
    for (int i = 0; i < 7; i++) {
	for (int j = 0; j < 5; j++) {
// print only if the first row or 6th or 1 st column 
	    if ((i == 0) || (i == 6) || (j == 0) || ((i == 3) && (j < 3)))
		printf("* ");
	}
	printf("\n");
    }
}

void continueLearn(void) {
    int input = 0;
// Both continue and break must reside    
// inside the loop or switch
    while (1) {
	printf("Enter the value 0 for terminate=");
	scanf("%d", &input);
	if (input)
	    continue;
	else
	    break;
    }
}

int global = 111;
int main(void) {
    char newChar[2][2][10];
    int **dp;
    int Vresult;
    int value = 2;
    printf("Ashu pagla hai\n");
    printf("Size of int=%d\n", sizeof(int));
    printf("Size of double pointer is=%d\n", (int) sizeof(dp));
    printf("The max of int is %u\n", UINT_MAX);
    printE();
    printf("The size of 2x2x10 char array is %d\n", (int) sizeof(newChar));
    Vresult = (value++ * 5) + (value++ * 3);
    printf("result is the %d\n", Vresult);
    continueLearn();
    printf("global variable is %d\n", global);
    {
	int local = 100;
	int global = 2;
	printf("local inside the parenthesis is %d. And global is %d.\n",
	       local, global);
    }
    printf("Outside the parenthesis global is %d.\n", global);
    return 0;
}
