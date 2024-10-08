/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
