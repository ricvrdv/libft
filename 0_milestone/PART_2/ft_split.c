#include <stdio.h>
#include <stdlib.h>

static int count_words(const char *s, char c);
static char *extract_word(const char *s, char c);
static void free_all(char **result, int count);

char    **ft_split(const char *s, char c)
{
    char **str_array;
    int words;
    int i;

    if (!s)
        return (NULL);
    words = count_words(s, c);
    str_array = (char **)malloc(sizeof(char *) * (words + 1));
    if (!str_array)
        return (NULL);
    i = 0;
    while (*s != '\0')
    {
        while (*s == c)
            s++;
        if (*s != '\0')
        {
            str_array[i] = extract_word(s, c);
            if (!str_array[i])
            {
                free_all(str_array, i);
                return (NULL);
            }
            i++;
            while (*s && *s != c)
                s++;
        }
    }
    str_array[i] = NULL;
    return (str_array);
}

static int count_words(const char *s, char c)
{
    int count;
    int in_word;
    int i;

    count = 0;
    in_word = 0,
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c && in_word == 0)
        {
            in_word = 1;
            count++;
        }
        else if (s[i] == c)
            in_word = 0;
        i++;
    }
    return (count);
}

static char *extract_word(const char *s, char c)
{
    const char *end;
    char *word;
    int len;
    int i;

    end = s;
    while (*end && *end != c)
        end++;
    len = end - s;
    word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word)
        return (NULL);
    i = 0;
    while (i < len)
    {
        word[i] = s[i];
        i++;
    }
    word[len] = '\0';
    return (word);
}

static void free_all(char **result, int count)
{
    int i;

    i = 0;
    while (i < count)
    {
        free(result[i]);
        i++;
    }
    free(result);
}

int main(void)
{
    char    *string = "Oops I did it again!";
    char    delimiter = ' ';
    char    **str_array;

    printf("Original string: \"%s\"\n", string);
    str_array = ft_split(string, delimiter);
    printf("Split strings:\n{\n");
    while (*str_array != 0)
    {
        printf("\"%s\"\n", *str_array);
        str_array++;
    }
    printf("}\n");
    return (0);
}