#include <stdio.h>

#define INIT_DATA char *s = "#include <stdio.h>%2$c%2$c#define INIT_DATA char *s = %3$c%1$s%3$c;%2$c#define PROCESS FILE *fp; fp = fopen(%3$c./Grace_kid.c%3$c, %3$cw%3$c); fprintf(fp, s, s, 10, 34); fclose(fp);%2$c#define GRACE() int main(){ INIT_DATA PROCESS return (0);}%2$c%2$cGRACE()%2$c%2$c/*%2$c * This is a comment%2$c */";
#define PROCESS FILE *fp; fp = fopen("./Grace_kid.c", "w"); fprintf(fp, s, s, 10, 34); fclose(fp);
#define GRACE() int main(){ INIT_DATA PROCESS return (0);}

GRACE()

/*
 * This is a comment
 */