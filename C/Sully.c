#include <stdio.h>
#include <stdlib.h>

int main(){
int i = 5;

char *s = "#include <stdio.h>%3$c#include <stdlib.h>%3$c%3$cint main(){%3$cint i = %2$d;%3$c%3$cchar *s = %4$c%1$s%4$c;%3$cchar *name;%3$cchar *exec;%3$cchar *file;%3$cchar *cmd;%3$c%3$ci--;%3$casprintf(&name, %4$cSully_%%d%4$c, i);%3$casprintf(&file, %4$c./%%s.c%4$c, name);%3$c%3$cFILE *fp = fopen(file, %4$cw%4$c);%3$c%3$cfprintf(fp, s, s, i, 10, 34);%3$cfclose(fp);%3$c%3$cif (i > 0){%3$casprintf(&exec, %4$c./%%s%4$c, name);%3$casprintf(&cmd, %4$cgcc -Wall -Wextra -Werror -o %%s %%s%4$c, name, file);%3$c%3$csystem(cmd);%3$csystem(exec);%3$c}%3$c%3$creturn (0);%3$c}";
char *name;
char *exec;
char *file;
char *cmd;

i--;
asprintf(&name, "Sully_%d", i);
asprintf(&file, "./%s.c", name);

FILE *fp = fopen(file, "w");

fprintf(fp, s, s, i, 10, 34);
fclose(fp);

if (i > 0){
asprintf(&exec, "./%s", name);
asprintf(&cmd, "gcc -Wall -Wextra -Werror -o %s %s", name, file);

system(cmd);
system(exec);
}

return (0);
}