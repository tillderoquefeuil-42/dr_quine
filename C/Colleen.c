#include <stdio.h>

/*
 * This is a comment outside the main function
 */

int returnZero(){
return 0;
}

int main(){
/*
 * This is a comment inside the main function
 */
char *a = "#include <stdio.h>%2$c%2$c/*%2$c * This is a comment outside the main function%2$c */%2$c%2$cint returnZero(){%2$creturn 0;%2$c}%2$c%2$cint main(){%2$c/*%2$c * This is a comment inside the main function%2$c */%2$cchar *a = %3$c%1$s%3$c;%2$cprintf(a, a, 10, 34);%2$creturn returnZero();%2$c}";
printf(a, a, 10, 34);
return returnZero();
}