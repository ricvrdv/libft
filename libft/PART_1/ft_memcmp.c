#include <stdio.h>
#include <string.h>

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
        const unsigned char     *ptr_s1;
        const unsigned char     *ptr_s2;
        size_t                          i;

        ptr_s1 = (const unsigned char *)s1;
        ptr_s2 = (const unsigned char *)s2;
        i = 0;
        while (i < n)
        {
                if (ptr_s1[i] != ptr_s2[i])
                        return (ptr_s1[i] - ptr_s2[i]);
                i++;
        }
        return (0);
}

/*int   main(void)
{
        int     buffer_1[] = {1, 2, 3, 4};
        int     buffer_2[] = {1, 2, 0, 4};
        int     result_1 = ft_memcmp(buffer_1, buffer_2, sizeof(int) * 3);
        int     result_2 = memcmp(buffer_1, buffer_2, sizeof(int) * 3);

        printf("Result (using ft_memcmp) = %d\n", result_1);
        printf("Result (using memcmp)    = %d\n", result_2);
        return (0);
}*/
