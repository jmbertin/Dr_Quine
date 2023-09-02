#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
	int i = 5;
	if (i <= 0)
		return 0;
	char filename[16];
	snprintf(filename, sizeof(filename), "Sully_%d.c", i - 1);
	char *source = "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c#include <unistd.h>%c%cint main()%c{%c%cint i = %d;%c%cif (i <= 0)%c%c%creturn 0;%c%cchar filename[16];%c%csnprintf(filename, sizeof(filename), %cSully_%%d.c%c, i - 1);%c%cchar *source = %c%s%c;%c%cFILE *file = fopen(filename, %cw%c);%c%cfprintf(file, source, 10, 10, 10, 10, 10, 10, 10, 9, i - 1, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, 34, 10, 9, 34, source, 34, 10, 9, 34, 34, 10, 9, 10, 9, 10, 9, 10, 9, 34, 34, 10, 9, 10, 9, 10, 10);%c%cfclose(file);%c%cchar command[256];%c%csnprintf(command, sizeof(command), %cgcc -o %%.*s %%s; ./%%.*s%c, (int)strlen(filename) - 2, filename, filename, (int)strlen(filename) - 2, filename);%c%csystem(command);%c%creturn 0;%c}%c";
	FILE *file = fopen(filename, "w");
	fprintf(file, source, 10, 10, 10, 10, 10, 10, 10, 9, i - 1, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, 34, 10, 9, 34, source, 34, 10, 9, 34, 34, 10, 9, 10, 9, 10, 9, 10, 9, 34, 34, 10, 9, 10, 9, 10, 10);
	fclose(file);
	char command[256];
	snprintf(command, sizeof(command), "gcc -o %.*s %s; ./%.*s", (int)strlen(filename) - 2, filename, filename, (int)strlen(filename) - 2, filename);
	system(command);
	return 0;
}
