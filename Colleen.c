#include <stdio.h>

/*
	This program will print its own source when run.
*/

void print_source()
{
	char *source = "#include <stdio.h>%c%c/*%c%cThis program will print its own source when run.%c*/%c%cvoid print_source()%c{%c%cchar *source = %c%s%c;%c%cprintf(source, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 34, source, 34, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 10, 10);%c}%c%cint main()%c{%c%c/*%c%c%cThis program will print its own source when run.%c%c*/%c%cprint_source();%c%creturn 0;%c}%c";
	printf(source, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 34, source, 34, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 10, 9, 10, 10);
}

int main()
{
	/*
		This program will print its own source when run.
	*/
	print_source();
	return 0;
}
