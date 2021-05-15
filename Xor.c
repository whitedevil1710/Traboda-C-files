#include <stdio.h>
#include <string.h>
int main()
{
 char key[10],string[100];
 printf("String: ");
 fgets(string,sizeof(string),stdin);
 printf("Single Character: ");
 fgets(key,sizeof(key),stdin);
 int len=strlen(string);
 for (int n=0;n<len;++n)
 {
  string[n]=string[n]^key[n%strlen(key)];
 }
 printf("%s",string);
 return 0;
}
