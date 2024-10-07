#include<stdio.h>

main()
{
    char string[40];
    int length=0,f=1,i;

    printf("Enter string:");
    gets(string);

    for(i=0;string[i]!='\0';i++)
    {
        length++;
    }

    for(i=0;i<length/2;i++)
    {
        if( string[i]!=string[length-1-i] )
        {
            f=0;
        }
    }

    if(f==1)
    {
        printf("PALINDROME");
    }
    else
    {
        printf("NOT PALINDROME");
    }
}
