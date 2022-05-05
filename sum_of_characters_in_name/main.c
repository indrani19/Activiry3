#include"header.h"
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