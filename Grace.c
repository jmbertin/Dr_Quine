#include <stdio.h>
#include <stdlib.h>

/*
    This program will print its own source when run.
*/

#define FILENAME "Grace_kid.c"
#define SOURCE_FMT "#include <stdio.h>%1$c#include <stdlib.h>%1$c%1$c/*%1$c    This program will print its own source when run.%1$c*/%1$c%1$c#define FILENAME %2$cGrace_kid.c%2$c%1$c#define SOURCE_FMT %2$c%3$s%2$c%1$c#define MAIN int main(void) {FILE *file = fopen(FILENAME, %2$cw%2$c); if (!file) {perror(%2$cError opening file%2$c); exit(1);} fprintf(file, SOURCE_FMT, 10, 34, SOURCE_FMT); fclose(file); return 0;}%1$c%1$cMAIN%1$c"
#define MAIN int main(void) {FILE *file = fopen(FILENAME, "w"); if (!file) {perror("Error opening file"); exit(1);} fprintf(file, SOURCE_FMT, 10, 34, SOURCE_FMT); fclose(file); return 0;}

MAIN
