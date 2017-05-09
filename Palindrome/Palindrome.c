#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{	
	for(int i = 0; argv[argc-1][i] != '\0' && argv[argc-1][i] != argv[argc-1][(strlen(argv[argc-1])-1)-i]; i++)					
		return 1;
}