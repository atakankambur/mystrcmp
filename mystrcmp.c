#include <stdio.h>
#include <ctype.h>

int mystrcmp(const char *s1,const char *s2);

int main() {

char str1[100], str2[100];

printf("Enter 1st string:");
fgets(str1,100,stdin);
printf("Enter 2nd string:");
fgets(str2,100,stdin);

printf("mystrcmp function returns %d",mystrcmp(str1,str2));

return 0;
}

int mystrcmp(const char *s1,const char *s2){

  int i;

  while (s1[i] != '\0' && s2[i] != '\0'){
      if(toupper(s1[i])!=toupper(s2[i]))
        return -1;
    i++;
    }
  return 0;
}