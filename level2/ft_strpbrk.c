/*
Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);
*/

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j = 0;
    char *re = (char *)s1;

    while (s1[i])
    {
        j = 0;
        while (s2[j])
        {
            if (s1[i] == s2[j])
                return re;
            j++;
        }
        i++;
        re++;
    }
    return NULL;
}
