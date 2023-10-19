#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    const char *original;
    char *duplicate;

    duplicate = ft_strdup(original);

    if (duplicate)
    {
        printf("Original string: %s\n", original);
        printf("Duplicated string: %s\n", duplicate);
        free(duplicate); // Don't forget to free the memory when done
    }
    else
    {
        printf("Duplication failed (NULL result).\n");
    }

    return 0;
}
