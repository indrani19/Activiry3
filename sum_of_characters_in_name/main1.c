#include"header.h"
int name_sum(char str[])
{
    int sum=0,i;
    for(i=0;str[i]!='\0';i++)
    {
        sum=sum+str[i];
    }
    return sum;
}