#include <stdio.h>

#define MAKE_STRING(a) 	#a
#define ADD_STRING(a,b)	a##b

#define MACRO_FUNC(a) {\
			printf("a is going to be replaced by %d\n",a*10);\
		}

int main(int argc, char *argv[]) {
    printf("Starting with %d arguments ...\n", argc);
    while (argc--) {
	printf("Argument %d is = %s\n", argc, argv[argc]);
    }
    MACRO_FUNC(12);
    printf("This is the converted string with macro %s\n",
	   MAKE_STRING(12345));
    printf("This is added string from macro %d\n", ADD_STRING(123, 879));
    return 0;
}
