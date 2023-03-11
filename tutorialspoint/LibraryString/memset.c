#include  <stdio.h>
char name[30];
int i;
void *putstarter(void *ptr, unsigned char putting, unsigned int length);
int main()
{
    scanf("%s", name);
    for(i = 0; name[i] != '\0'; i++);
    putstarter(name, '*', i);
    printf("%s \n", name);
    return 0;
}
void *putstarter(void *ptr, unsigned char putting, unsigned int length)
{
    
    unsigned char *temp = ptr;
    if(NULL == ptr)
    {
        printf("The Temp = NULL");
    }
    else
    {
        while(length--)
        {
            *temp++ = putting;
        }
    }
    return ptr;
}
