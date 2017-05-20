#include<iostream>
#include<stdarg.h>

using namespace std;
typedef int myInt;

myInt global = 99;

void variArg(int num,...){
	va_list vaList;
	va_start(vaList,num);
	for (int i = 0; i < num; ++i) {
		cout << "arg " << i << " is "<<va_arg(vaList,int) <<endl;
	}
	va_end(vaList);
}

int main(int argc, char *argv[]){
	cout<<"Care about the accuracy of time"<<endl;
	cout<<"Global int is "<<global<<endl;
	{
		myInt global = 777;
		cout<<"Local int is"<<global<<endl;
	}
	cout<<"Again Global int is "<<global<<endl;
	variArg(4,34,8,78,89);
	return 0;
}
