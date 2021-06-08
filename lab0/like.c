#include <stdio.h>

int main(int argc, char** argv){
	if (argc > 1){
		printf("I like\n", argv[1]);
	}
	if (argc < 1){
		printf("What do I like?");
	}
	return 0;
}

