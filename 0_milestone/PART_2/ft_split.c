char    **ft_split(char const *s, char c)
{
    int words;

    words = count_words(s, c);
    array = malloc(sizeof(s) * (words + 1));
    if (!array)
        return (NULL);
    

}

int count_words(char const *s, char c)
{
    int count;
    int i;

    count = 1;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            count++;
        i++;
    }
    return (count);
}