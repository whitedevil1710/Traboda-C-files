#include<stdio.h>
int main()
{
    car text[100], c;
    int i, key;
    
    printf("Enter a text to decrypt: ");
    gets(text);
    printf("Enter key: ");
    scanf("%d", &key);
    
    for(i = 0; text[i] != '\0'; ++i){
        c = text[i];
        if(c >= 'a' && c <= 'z'){
            c = c - key;
            if(c < 'a'){
                c = c + 'z' - 'a' + 1;
            }
            text[i] = c;
        }
        else if(c >= 'A' && c <= 'Z'){
            c = c - key;
            if(c < 'A'){
                c = c + 'Z' - 'A' + 1;
            }
            text[i] = c;
        }
    }
    printf("Decrypted text: %s", text);
    return 0;
}
