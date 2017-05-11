//indent -kr -br -ce -brf yello.cpp
//g++ -std=c++11 -Wall -g -o yelloCpp yello.cpp

#include <iostream>

int add(int a, int b) {
    return (a + b);
}

int main(int argc, char *argv[]) {
    using namespace std;
    cout << "Yello world!! it is C++ here " << endl;
    cout << "Ashu yaha bhi pagla hai" << endl;
    printf("Name of the program is %s\n", argv[0]);
    for (int i = 1; i < argc; i++) {
	printf("%d th command line argument is\n %s\n", i, argv[i]);
    }
    int (*addPt) (int, int) = add;
    cout << (*addPt) (10, 11) << endl;
    return 0;
}
