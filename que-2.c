#include <stdio.h>

int main(){

char string[100];
int x,y,length;

printf("enter the string :");
scanf("%s",&string);

for(x=0; string[x]!='\0'; x++)
{
    length=1;

    for(y=x+1; string[y]!='\0'; y++)
    {
        if(string[x]==string[y])
        {
            length++;
            string[y]='.';
        }
    }
    if(string[x]!='.')
    printf("\n %c : %d",string[x],length);
}

}
