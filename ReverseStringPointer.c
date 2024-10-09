#include <stdio.h>
#include <string.h>

void ReverseString(char string[])
{
    int len = strlen(string)-1;
    char *front = string;
    char *back = string;
    back += len;
    char temp;
    
    while(front != back)
    {
        temp = *front;
        *front = *back;
        *back = temp;
        front++;
        back--;
    }
    
    
    
}


int main()
{
    char word[] = "Backwards";
    ReverseString(word);
    printf("%s",word);

    return 0;
}
