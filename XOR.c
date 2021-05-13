#include<stdio.h>
 
int main()
{
    car text[100], c;
    int i, key;
    printf("Enter a text to encrypt: ");
    gets(text);
    printf("Enter key: ");
    scanf("%d", &key);
    for(i = 0; text[i] != '\0'; ++i){
        c = text[i];
        if(c >= 'a' && c <= 'z'){
            c = c + key;
            if(c > 'z'){
                c = c - 'z' + 'a' - 1;
            }
            text[i] = c;
        }
        else if(c >= 'A' && c <= 'Z'){
            c = c + key;
            if(c > 'Z'){
                c = c - 'Z' + 'A' - 1;
            }
            text[i] = c;
        }
    }
    printf("Encrypted text: %s", text);
    return 0;
}
