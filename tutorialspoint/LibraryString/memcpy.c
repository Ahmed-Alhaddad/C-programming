#include <stdio.h>

char source[30];
char destination[30];
int i;
void *my_memcpy(void *dest, const void *src, int length);
int main()
{
    scanf("%s", source);
    for(i = 0; source[i] != '\0'; i++);
    my_memcpy(destination, source, i);
    printf("%s \n", destination);
    return 0;
}
void *my_memcpy(void *dest, const void *src, int length)
{
    unsigned char *name1 = (unsigned char *)src;
    unsigned char *name2 = (unsigned char *)dest;
    if((name1 == NULL) || (name2 == NULL))
    {
        printf("Best for you check your code");
    }
    else
    {
        while(length)
        {
            *name2++ = *name1++;
            length--;
        }
    }
    //return dest;
}
