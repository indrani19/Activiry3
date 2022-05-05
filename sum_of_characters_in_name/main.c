#include<stdio.h>
#include<stdlib.h>
int name_sum(char str[])
{
    int sum=0,i;
    for(i=0;str[i]!='\0';i++)
    {
        sum=sum+str[i];
    }
    return sum;
}
int main()
{
    int sum;
    char *ptr;
    ptr = (char*)malloc(20*sizeof(char));
    printf("Enter the name\n");
    scanf("%s",ptr);
    sum = name_sum(ptr);
    printf("%X",sum);
    free(ptr);
    
   
    return 0;
}