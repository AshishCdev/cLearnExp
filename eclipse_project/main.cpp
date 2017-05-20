#include <iostream>
#include <stdarg.h>
#include <stdio.h>

using namespace std;
typedef int myInt;

myInt global = 99;

void variArg(myInt num,...){
	va_list vaList;
	va_start(vaList,num);
	for (int i = 0; i < num; ++i) {
		cout << "arg " << i << " is "<<va_arg(vaList,char *) <<endl;
	}
	va_end(vaList);
}

void workWithFiles(void){
	FILE *FPT;
	FPT = fopen("ESP.txt","r");
	if(FPT == 0) {
		cout<<"Couldn't open the file"<<endl;
	}
	else{
		while (1) {
			char out = fgetc(FPT);
			cout << out ;
			if(out==EOF) break;
		}
	}
	fclose(FPT);
}

int main(int argc, char *argv[]){
	cout<<"Care about the accuracy of time"<<endl;
	cout<<"Global int is "<<global<<endl;
	{
		myInt global = 777;
		cout<<"Local int is"<<global<<endl;
	}
	cout<<"Again Global int is "<<global<<endl;
	variArg(4,"String 1","String 2","String 3","String 4");
	workWithFiles();
	return 0;
}
