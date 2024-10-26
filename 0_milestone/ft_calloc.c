#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *buffer;
    
    if (nmemb == 0 || size == 0)
        return (malloc(1));
    buffer = malloc(size * nmemb);
    if (!buffer)
        return (NULL);
    ft_memset(buffer, 0, size * nmemb);
    return (buffer);
}

int main(void)
{
    size_t  nmemb = 10;
    size_t  size = 4;
    size_t  i = 0;
    char    *buffer;

    buffer = (char *)ft_calloc(nmemb, size);
    while (i < nmemb)
    {
        printf("%d", buffer[i]);
        i++;
    }


}