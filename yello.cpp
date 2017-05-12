//indent -kr -br -ce -brf yello.cpp
//g++ -std=c++11 -Wall -g -o yelloCpp yello.cpp

#include <iostream>

using namespace std;

int add(int a, int b) {
    return (a + b);
}

int *returnPt(int copyVariable, int padding) {
    int *retPt;
    retPt = &copyVariable;
    return retPt;
}

void workWithVoidPt(void) {
    void *voidPt;
    int dummy1 = 111;
    char *dummy = "This is dummy";
    voidPt = (char *) (&dummy);
    printf
	("void pointer is pointing to the integer dummy1 at address %d\n",
	 dummy);
}

int argList(int a = 10, int b = 19) {
    return a + b;
}

void function(int a, int b, int c) {
    cout << "I was in three arg function with a = " << a << " and b = " <<
	b << " and c = " << c << endl;
}

void function(void) {
    cout << "I was in void type function with the same name" << endl;
}

void fncOvrlod(void) {
    function();
    function(10, 20, 30);
}

//const int (&functionRefer) (void) {
  //  int a = 2;
    //return s;
//}
inline int recAdd(int *nums, int *answ) {
    if (*nums == 0)
	return *nums;
    else {
	printf("%d + ", *nums);
	*answ = *nums + recAdd((nums += 1), answ);
    }
    return *answ;
}

void recAddCalc(void) {
    int inputs[100];
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

int main(int argc, char *argv[]) {
    cout << "Yello world!! it is C++ here " << endl;
    cout << "Ashu yaha bhi pagla hai" << endl;
    printf("Name of the program is %s\n", argv[0]);
    for (int i = 1; i < argc; i++) {
	printf("%d th command line argument is\n %s\n", i, argv[i]);
    }
    int (*addPt[]) (int, int) = {
    add};
    cout << (*addPt[0]) (10, 11) << endl;
    cout << "returned value of the copied int variable 100 is " <<
	(*returnPt) (100, 0) << endl;
    workWithVoidPt();
    int s = 100;
    //int &b = functionRefer();
    int &b = s;
    cout << "b containing " << b << endl;
    cout << "argument list out put " << argList(100, 54) << endl;
    fncOvrlod();
    recAddCalc();
    recAddCalc();
    return 0;
}
