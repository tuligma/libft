#include <stdio.h>
#include "libft.h"

int main(void)
{
    char const *s = "Hello,World,Libft";
    char c;
    char **result;

    result = ft_split(s, c);
    if (result)
    {
        int i = 0;
        while (result[i])
        {
            printf("Substring %d: %s\n", i, result[i]);
            free(result[i]);
            i++;
        }
        free(result);
    }
    else
        printf("Splitting failed (NULL result).\n");
    return (0);
}
