#include <stdio.h>
#include <string.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    const unsigned char    *ptr_src;
    unsigned char    *ptr_dst;
    size_t i;

    ptr_src = (const unsigned char *)src;
    ptr_dst = (unsigned char *)dst;
    i = 0;
    while (i < n)
    {
        ptr_dst[i] = ptr_src[i];
        i++;
    }
    return (dst);
}

int main(void)
{
    char    buffer_src_1[] = "Hello";
    char    buffer_dst_1[10] = "..........";

    printf("Source 1: \"%s\"\n", buffer_src_1);
    printf("Destination 1 before: \"%s\"\n\n", buffer_dst_1);

    ft_memcpy(buffer_dst_1, buffer_src_1, 5);
    printf("Destination 1: \"%s\"\n", buffer_dst_1);
    return (0);
}