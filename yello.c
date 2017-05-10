//indent -kr -br -ce -brf yello.c
//gcc -std=c99 -Wall -g -o yelloO yello.c

#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include <stdbool.h>
#define maxInputs 100
#define start {
#define end }

void printE(void)
start for (int i = 0; i < 7; i++)
start for (int j = 0; j < 5; j++)
    start
// print only if the first row or 6th or 1 st column 
	if ((i == 0) || (i == 6) || (j == 0) || ((i == 3) && (j < 3)))
	printf("* ");
end printf("\n");
end end void continueLearn(void) {
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

int recAdd(int *nums, int *answ) {
    if (*nums == 0)
	return *nums;
    else {
	printf("%d + ", *nums);
	*answ = *nums + recAdd((nums += 1), answ);
    }
    return *answ;
}

void recAddCalc(void) {
    int inputs[maxInputs];
    int i = -1;
    int answer = 0;
    printf
	("Enter the inputs as many as number you want but no more than 100\nenter 0 if done\n");
    do {
	i++;
	scanf("%d", &inputs[i]);
    } while (inputs[i] != 0);
    recAdd(&inputs[0], &answer);
    printf("And you got your sum with recursion = %d\n", answer);
}

int global = 111;

union examp {
    unsigned short b;
    char c[2];
} exp;

void packedStruct(void) {
//wrong variable declaration since only structure can be packed and bit addressable    
// unsigned int pac:2;
    bool i = 1;
    typedef struct thisOne {
	unsigned int oneBit:1;
	unsigned int twoBit:2;
	unsigned int fiveBit:5;
    } packStruct;
    packStruct sample;
    uint8_t example;
    printf
	("I am in packed struct function and the size of packed struct is %d byte while 8 bit is %d byte\nsizeof() function returns the %d for the size of boolean\n",
	 (int) sizeof(sample), (int) sizeof(example), (int) sizeof(i));
    sample.fiveBit = 0;
    sample.fiveBit--;
    printf
	("which is wrong because Max value that fiveBit can get upto %d\n",
	 sample.fiveBit);
}
void workWithTypedef(void) {
    typedef int myArrayType[100];
    myArrayType first, second;
    first[3] = 100;
    second[2] = 1000;
    typedef union examp myDataType;
    myDataType localPrac;
    localPrac.b = 0xabcd;
    printf
	("myData int b is 0x%x which is broken into char L=0x%02x and char H=0x%02x\n",
	 localPrac.b, localPrac.c[0], localPrac.c[1]);
    printf("my typedef array first->3 is %d and second->2 is %d\n",
	   first[3], second[2]);
}

void pointers(void) {
    void *point;
    int a = 100;
    int b = 1111;
    int *const intpt = &a;
    *intpt = b;
    printf("Now at the address %d the value is changed to the %d\n", intpt,
	   a);
}

int main(void) {
    char newChar[2][2][10];
    int **dp;
    int Vresult;
    int value = 2;
    printf("Ashu pagla hai\n");
    printf("Size of int=%d\n", (int) sizeof(int));
    printf("Size of double pointer is=%d\n", (int) sizeof(dp));
    printf("The max of int is %u\n\n", UINT_MAX);
    printE();
    printf("\nThe size of 2x2x10 char array is %d\n",
	   (int) sizeof(newChar));
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
    recAddCalc();		//take the inputs from user and add recursively
    exp.b = 0x2564;
    printf
	("int b is 0x%x which is broken into char L=0x%x and char H=0x%x\n",
	 exp.b, exp.c[0], exp.c[1]);
    workWithTypedef();
    packedStruct();
    pointers();
    return 0;
}
