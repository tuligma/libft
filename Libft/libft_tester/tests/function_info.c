/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_info.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npentini <npentini@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 02:53:00 by npentini          #+#    #+#             */
/*   Updated: 2023/06/30 17:42:38 by npentini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "testutils.h"

const	t_function_info	*get_function_info(const char *func_name)
{
	static const t_function_info	ft_isalnum_info = {
		.name = "ft_isalnum",
		.prototype = "int ft_isalnum(int c);",
		.description = "Checks if the given character"
		" is alphanumeric (a-z or A-Z or 0-9).",
		.return_value = "Returns a non-zero value"
		" if the character is alphanumeric,\n\t\t\t\t\t"
		" otherwise returns 0.",
		.arguments = "2",
		.error = "arguments should be 2",
		.usage = " ./ft_isalnum <character>",
		.recom = " (a - z), (A - Z), (0 - 9),"
		"!@#$%^&*()_+\\{}\":;"
	};
	static const t_function_info	ft_isalpha_info = {
		.name = "ft_isalpha()",
		.prototype = "int ft_isalpha(int c);",
		.description = "Checks if the given character"
		" is alphabetic (a-z or A-Z).",
		.return_value = "Returns a non-zero value"
		" if the character is alphabetic,\n\t\t\t\t\t"
		" otherwise returns 0.",
		.arguments = "2",
		.error = "arguments should be 2",
		.usage = " ./ft_isalpha <character>\n\t\t\t\t\t\t"
		" ./ft_isalpha 128",
		.recom = "(a - z), (A - Z), (0 - 9),"
		"!@#$%^&*()_+\\{}\":;\n\t\t\t\t\t\t ""try decimal value of ASCII"
	};
	static const t_function_info	ft_isascii_info = {
		.name = "ft_isascii()",
		.prototype = "int ft_isascii(int c);",
		.description = "Checks if the given character"
		" is a valid ASCII character (0-127).",
		.return_value = "Returns a non-zero value"
		" if the character is a valid ASCII\n\t\t\t\t\t"
		" character, otherwise returns 0.",
		.arguments = "2",
		.error = "arguments should be 2",
		.usage = " ./ft_isascii <character>\n\t\t\t\t\t\t"
		" ./ft_isascii 128",
		.recom = " (a - z), (A - Z), (0 - 9),"
		"!@#$%^&*()_+\\{}\":;\n\t\t\t\t\t\t"
		"try decimal value of ASCII"
	};
	static const t_function_info	ft_isdigit_info = {
		.name = "ft_isdigit()",
		.prototype = "int ft_isdigit(int c);",
		.description = "Checks if the given character is a digit (0-9).",
		.return_value = "Returns a non-zero value"
		" if the character is a digit,\n\t\t\t\t\t"
		" otherwise returns 0.",
		.arguments = "2",
		.error = "arguments should be 2",
		.usage = " ./ft_isdigit <character>\n\t\t\t\t\t\t"
		" ./ft_isdigit 128",
		.recom = " (a - z), (A - Z), (0 - 9),"
		" !@#$%^&*()_+\\{}\":;\n\t\t\t\t\t\t"
		"try decimal value of ASCII"
	};
	static const t_function_info	ft_isprint_info = {
		.name = "ft_isprint()",
		.prototype = "int ft_isprint(int c);",
		.description = "Checks if the given character"
		" is a printable character (including space).",
		.return_value = "Returns a non-zero value"
		" if the character is printable,\n\t\t\t\t\t"
		" otherwise returns 0.",
		.arguments = "2",
		.error = "arguments should be 2",
		.usage = " ./ft_isprint <character>\n\t\t\t\t\t\t"
		" ./ft_isprint 128",
		.recom = " (a - z), (A - Z), (0 - 9),"
		" !@#$%^&*()_+\\{}\":;\n\t\t\t\t\t\t"
		"try decimal value of ASCII"
	};
	static const t_function_info	ft_tolower_info = {
		.name = "ft_tolower()",
		.prototype = "int ft_tolower(int c);",
		.description = "Converts the given character"
		" to lowercase if it is an uppercase letter.",
		.return_value = "The value returned is that of"
		" the converted letter,\n\t\t\t\t\t"
		" or c if the conversion was not possible.",
		.arguments = "2",
		.error = "arguments should be 2",
		.usage = " ./ft_tolower <character>\n\t\t\t\t\t\t"
		" ./ft_tolower 128",
		.recom = " (a - z), (A - Z), (0 - 9),"
		" !@#$%^&*()_+\\{}\":;\n\t\t\t\t\t\t"
		"try decimal value of ASCII"
	};
	static const t_function_info	ft_toupper_info = {
		.name = "ft_toupper()",
		.prototype = "int ft_toupper(int c);",
		.description = "Converts the given character"
		" to uppercase if it is a lowercase letter.",
		.return_value = "Returns the uppercase"
		" representation of the character if it is a\n\t\t\t\t\t"
		" lowercase letter, otherwise returns the character itself.",
		.arguments = "2",
		.error = "arguments should be 2",
		.usage = " ./ft_toupper <character>\n\t\t\t\t\t\t"
		" ./ft_toupper 128",
		.recom = " (a - z), (A - Z), (0 - 9),"
		" !@#$%^&*()_+\\{}\":;\n\t\t\t\t\t\t"
		"try decimal value of ASCII"
	};
	static const t_function_info	ft_strlen_info = {
		.name = "ft_strlen()",
		.prototype = "size_t ft_strlen(const char *s);",
		.description = "Calculates the length of the null-terminated string s.",
		.return_value = "Returns the number of characters in the string.",
		.arguments = "2",
		.usage = " ./ft_toupper <string>\n\t\t\t\t\t\t"
		" ./ft_toupper \"Hello, World!\"",
		.recom = " \"\" \'\0\', ""a - z, A - Z, ""\"Hello\", \"42abudhabi\""
		" \n\t\t\t\t\t\t \"Lorem ipsum dolor sit amet, consectetur adipiscing elit. \""
		" \n\t\t\t\t\t\t \"Lorem ipsum dolor sit\0amet, consectetur adipiscing elit. \""
	};
	static const t_function_info	ft_memset_info = {
		.name = "ft_memset()",
		.prototype = "void *memset(void *s, int c, size_t n);",
		.description = "Fills the first n bytes"
		" of the memory area pointed to by\n\t\t\t\t\t"
		" s with the constant byte c.",
		.return_value = "Returns a pointer to the memory area s."
	};
	static const t_function_info	ft_memcpy_info = {
		.name = "ft_memcpy()",
		.prototype = "void *memcpy(void *dest, const void *src, size_t n);",
		.description = "Copies n bytes from the memory"
		" area src to the memory area dest.",
		.return_value = "Returns a pointer to dest."
	};
	static const t_function_info	ft_bzero_info = {
		.name = "ft_bzero()",
		.prototype = "void ft_bzero(void *s, size_t n);",
		.description = "The bzero() function erases the"
		" data in the n bytes of the\n\t\t\t\t\t"
		" memory starting at the location pointed to by s,"
		" by\n\t\t\t\t\t writing zeros (bytes containing \'\\0\') to that area.",
		.return_value = "None"
	};
	static const t_function_info	ft_memmove_info = {
		.name = "ft_memmove()",
		.prototype = "void *ft_memmove(void *dest, const void *src, size_t n);",
		.description = "Copies n bytes from the memory area"
		" src to the memory area dest,\n\t\t\t\t\t"
		" handling overlapping memory regions correctly.",
		.return_value = "Returns a pointer to dest."
	};
	static const t_function_info	ft_strlcpy_info = {
		.name = "ft_strlcpy()",
		.prototype = "size_t ft_strlcpy(char *dest, const char"
		" *src, size_t size);",
		.description = "Copies up to size - 1 characters"
		" from the string src to dest,\n\t\t\t\t\t"
		" ensuring null-termination of the result.",
		.return_value = "Returns the total length of src."
	};
	static const t_function_info	ft_strlcat_info = {
		.name = "ft_strlcat()",
		.prototype = "size_t ft_strlcat(char *dest, const char"
		" *src, size_t size);",
		.description = "Appends the string src to the end of dest,"
		" ensuring null-termination\n\t\t\t\t\t"
		" and limiting the total length to size - 1 characters.",
		.return_value = "Returns the total length of the concatenated strings."
	};
	static const t_function_info	ft_strchr_info = {
		.name = "ft_strchr()",
		.prototype = "char *ft_strchr(const char *str, int c);",
		.description = "Searches for the first occurrence of the character"
		" c in the string str.",
		.return_value = "Returns a pointer to the first occurrence"
		" of c in str,\n\t\t\t\t\t or NULL if c is not found."
	};
	static const t_function_info	ft_strrchr_info = {
		.name = "ft_strrchr()",
		.prototype = "char *ft_strrchr(const char *str, int c);",
		.description = "Searches for the last occurrence of the character"
		" c in the string str.",
		.return_value = "Returns a pointer to the last occurrence"
		" of c in str,\n\t\t\t\t\t or NULL if c is not found."
	};
	static const t_function_info	ft_strncmp_info = {
		.name = "ft_strncmp()",
		.prototype = "int ft_strncmp(const char *str1,"
		" const char *str2, size_t n);",
		.description = "Compares at most the first n characters"
		" of str1 and str2,\n\t\t\t\t\t returning an integer"
		" based on the comparison result.",
		.return_value = "Returns an integer less than, equal to,"
		" or greater than 0,\n\t\t\t\t\t indicating whether str1 is"
		" less than, equal to, or greater than str2."
	};
	static const t_function_info	ft_memchr_info = {
		.name = "ft_memchr()",
		.prototype = "void *ft_memchr(const void *s, int c, size_t n);",
		.description = "Searches for the first occurrence of the character"
		" c in the first n\n\t\t\t\t\t bytes of the memory area pointed to by s.",
		.return_value = "Returns a pointer to the first occurrence"
		" of c in the memory area,\n\t\t\t\t\t or NULL if c is not found."
	};
	static const t_function_info	ft_memcmp_info = {
		.name = "ft_memcmp()",
		.prototype = "int ft_memcmp(const void *s1, const void *s2, size_t n);",
		.description = "Compares the first n bytes of the memory areas"
		" s1 and s2,\n\t\t\t\t\t returning an"
		" integer based on the comparison result.",
		.return_value = "Returns an integer less than, equal to, or greater"
		" than 0,\n\t\t\t\t\t indicating whether s1 is less than, equal to,"
		" or greater than s2."
	};
	static const t_function_info	ft_strnstr_info = {
		.name = "ft_strnstr()",
		.prototype = "char *ft_strnstr(const char *haystack,"
		" const char *needle, size_t len);",
		.description = "Searches for the first occurrence of the string"
		" needle in the string\n\t\t\t\t\t haystack,"
		" limited to the first len characters.",
		.return_value = "Returns a pointer to the first occurrence of"
		" needle in haystack,\n\t\t\t\t\t or NULL if needle is not found."
	};

	static const t_function_info	ft_strdup_info = {
		.name = "ft_strdup()",
		.prototype = "char *ft_strdup(const char *s);",
		.description = "Duplicates the string s, allocating memory for"
		" the duplicate.\n\t\t\t\t\t The memory should be"
		" freed by the caller when no longer needed.",
		.return_value = "Returns a pointer to the duplicated string,"
		" or NULL if the allocation fails."
	};
	static const t_function_info	ft_atoi_info = {
		.name = "ft_atoi()",
		.prototype = "int ft_atoi(const char *str);",
		.description = "Converts the string str to an integer representation.",
		.return_value = "Returns the converted integer value."
	};
	static const t_function_info	ft_calloc_info = {
		.name = "ft_calloc()",
		.prototype = "void *ft_calloc(size_t count, size_t size);",
		.description = "Allocates memory for an array of count elements of"
		" size bytes each,\n\t\t\t\t\tand initializes the memory to zero.",
		.return_value = "Returns a pointer to the allocated memory,\n\t\t\t\t\t"
		" or NULL if the allocation fails."
	};
	static const t_function_info	ft_substr_info = {
		.name = "ft_substr()",
		.prototype = "char *ft_substr(char const *s, unsigned"
		" int start, size_t len);",
		.description = "Allocates (with malloc(3)) and returns"
		" a substring\n\t\t\t\t\t from the string ’s’. The substring"
		" begins at index\n\t\t\t\t\t ’start’ and is of maximum size ’len’.",
		.return_value = "The substring. NULL if the allocation fails."
	};
	static const t_function_info	ft_strjoin_info = {
		.name = "ft_strjoin()",
		.prototype = "char *ft_strjoin(char const *s1, char const *s2);",
		.description = "Allocates (with malloc(3)) and"
		" returns a new string,\n\t\t\t\t\t"
		" which is the result of the concatenation of ’s1’ and ’s2’.",
		.return_value = "The new string. NULL if the allocation fails."
	};
	static const t_function_info	ft_strtrim_info = {
		.name = "ft_strtrim()",
		.prototype = "char *ft_strtrim(char const *s1, char const *set);",
		.description = "Allocates (with malloc(3)) and"
		" returns a copy of ’s1’\n\t\t\t\t\t"
		" with the characters specified in ’set’ removed from\n\t\t\t\t\t"
		" the beginning and the end of the string.",
		.return_value = "The trimmed string. NULL if allocation fails."
	};
	static const t_function_info	ft_split_info = {
		.name = "ft_split()",
		.prototype = "char **ft_split(char const *s, char c);",
		.description = "Allocates (with malloc(3)) and"
		" returns an array of\n\t\t\t\t\t"
		" strings obtained by splitting ’s’ using the character ’c’\n\t\t\t\t\t"
		" as a delimiter. The array must end with a NULL pointer.",
		.return_value = "The array of new strings resulting"
		" from the split.\n\t\t\t\t\t NULL if the allocation fails"
	};
	static const t_function_info	ft_itoa_info = {
		.name = "ft_itoa()",
		.prototype = "char *ft_itoa(int n);",
		.description = "Allocates (with malloc(3)) and returns a string\n\t\t\t\t\t"
		" representing the integer received as an argument.\n\t\t\t\t\t"
		" Negative numbers must be handled.",
		.return_value = "The string representing the integer."
		" NULL if the allocation fails",
	};
	static const t_function_info	ft_strmapi_info = {
		.name = "ft_strmapi()",
		.prototype = "char *ft_strmapi(char const *s, "
		"char (*f)(unsigned int, char));",
		.description = "Applies the function ’f’ to each character of the"
		" string ’s’, and\n\t\t\t\t\t passing its index as first argument to"
		" create a new string (with malloc(3))\n\t\t\t\t\t "
		"resulting from successive applications of ’f’.",
		.return_value = "The string created from the"
		" successive applications of ’f’.\n\t\t\t\t\t"
		" Returns NULL if the allocation fails."
	};
	static const t_function_info	ft_striteri_info = {
		.name = "ft_striteri()",
		.prototype = "void ft_striteri(char *s,"
		" void (*f)(unsigned int, char*));",
		.description = "Applies the function ’f’ on each character of"
		" the string passed\n\t\t\t\t\t"
		" as argument, passing its index as first argument."
		" Each character\n\t\t\t\t\t"
		" is passed by address to"
		" ’f’ to be modified if necessary.",
		.return_value = "None",
	};
	static const t_function_info	ft_putchar_fd_info = {
		.name = "ft_putchar_fd()",
		.prototype = "void ft_putchar_fd(char c, int fd);",
		.description = "Outputs the character ’c’ to"
		" the given file descriptor.",
		.return_value = "None",
	};
	static const t_function_info	ft_putstr_fd_info = {
		.name = "ft_putstr_fd()",
		.prototype = "void ft_putstr_fd(char *s, int fd);",
		.description = "Outputs the string ’s’ to the given file descriptor.",
		.return_value = "None",
	};
	static const t_function_info	ft_putendl_fd_info = {
		.name = "ft_putendl_fd()",
		.prototype = "void ft_putendl_fd(char *s, int fd);",
		.description = "Outputs the string ’s’ to the given"
		" file descriptor\n\t\t\t\t\t"
		" followed by a newline.",
		.return_value = "None",
	};
	static const t_function_info	ft_putnbr_fd_info = {
		.name = "ft_putnbr_fd()",
		.prototype = "void ft_putnbr_fd(int n, int fd);",
		.description = "Outputs the integer ’n’ to the given file descriptor.",
		.return_value = ""
	};
	static const t_function_info	ft_lstnew_info = {
		.name = "ft_lstnew()",
		.prototype = "t_list *ft_lstnew(void *content);",
		.description = "Allocates (with malloc(3)) and returns"
		" a new node. The member\n\t\t\t\t\t"
		" variable ’content’ is initialized with the value of"
		" the parameter\n\t\t\t\t\t ’content’."
		" The variable ’next’ is initialized to NULL.",
		.return_value = "The new node."
	};
	static const t_function_info	ft_lstadd_front_info = {
		.name = "ft_lstadd_front()",
		.prototype = "void ft_lstadd_front(t_list **lst, t_list *new);",
		.description = "Adds the node ’new’ at the beginning of the list.",
		.return_value = "None"
	};
	static const t_function_info	ft_lstsize_info = {
		.name = "ft_lstsize()",
		.prototype = "int ft_lstsize(t_list *lst);",
		.description = "Counts the number of nodes in a list.",
		.return_value = "The length of the list"
	};
	static const t_function_info	ft_lstlast_info = {
		.name = "ft_lstlast()",
		.prototype = "t_list *ft_lstlast(t_list *lst);",
		.description = "Returns the last node of the list.",
		.return_value = "Last node of the list"
	};
	static const t_function_info	ft_lstadd_back_info = {
		.name = "ft_lstadd_back()",
		.prototype = "void ft_lstadd_back(t_list **lst, t_list *new);",
		.description = "Adds the node ’new’ at the end of the list.",
		.return_value = "None"
	};
	static const t_function_info	ft_lstdelone_info = {
		.name = "ft_lstdelone()",
		.prototype = "void ft_lstdelone(t_list *lst, void (*del)(void*));",
		.description = "Takes as a parameter a node and frees"
		" the memory of the node’s\n\t\t\t\t\t"
		" content using the function ’del’"
		" given as a parameter and\n\t\t\t\t\t"
		" free the node. The memory of ’next’ must not be freed.",
		.return_value = "None"
	};
	static const t_function_info	ft_lstclear_info = {
		.name = "ft_lstclear()",
		.prototype = "void ft_lstclear(t_list **lst, void (*del)(void*));",
		.description = "Deletes and frees the given node"
		" and everysuccessor of that node,\n\t\t\t\t\t"
		" using the function ’del’and free(3)."
		" Finally, the pointer"
		" to the\n\t\t\t\t\t list must be set to NULL.",
		.return_value = "None"
	};
	static const t_function_info	ft_lstiter_info = {
		.name = "ft_lstiter()",
		.prototype = "void ft_lstiter(t_list *lst, void (*f)(void *));",
		.description = "Iterates the list ’lst’ and"
		" applies the function ’f’\n\t\t\t\t\t"
		" on the content of each node.",
		.return_value = "None"
	};
	static const t_function_info	ft_lstmap_info = {
		.name = "ft_lstmap()",
		.prototype = "t__list *ft_lstmap(t_list *lst,"
		" void *(*f)(void *), void (*del)(void *));",
		.description = "Iterates the list ’lst’ and"
		" applies the function ’f’ on the\n\t\t\t\t\t"
		" content of each node. Creates a new"
		" list resulting of the successive\n\t\t\t\t\t"
		" applications of the function ’f’."
		" The ’del’ function is used to\n\t\t\t\t\t"
		" delete the content of a node if needed.",
		.return_value = "The new list. NULL if the allocation fails."
	};
	
	if (strcmp(func_name + 2, "ft_isalnum") == 0)
		return (&ft_isalnum_info);
	if (strcmp(func_name + 2, "ft_isalpha") == 0)
		return (&ft_isalpha_info);
	if (strcmp(func_name + 2, "ft_isascii") == 0)
		return (&ft_isascii_info);
	if (strcmp(func_name + 2, "ft_isdigit") == 0)
		return (&ft_isdigit_info);
	if (strcmp(func_name + 2, "ft_isprint") == 0)
		return (&ft_isprint_info);
	if (strcmp(func_name + 2, "ft_tolower") == 0)
		return (&ft_tolower_info);
	if (strcmp(func_name + 2, "ft_toupper") == 0)
		return (&ft_toupper_info);
	if (strcmp(func_name + 2, "ft_strlen") == 0)
		return (&ft_strlen_info);
	if (strcmp(func_name + 2, "ft_memset") == 0)
		return (&ft_memset_info);
	if (strcmp(func_name + 2, "ft_memcpy") == 0)
		return (&ft_memcpy_info);
	if (strcmp(func_name + 2, "ft_bzero") == 0)
		return (&ft_bzero_info);
	if (strcmp(func_name + 2, "ft_memmove") == 0)
		return (&ft_memmove_info);
	if (strcmp(func_name + 2, "ft_strlcpy") == 0)
		return (&ft_strlcpy_info);
	if (strcmp(func_name + 2, "ft_strlcat") == 0)
		return (&ft_strlcat_info);
	if (strcmp(func_name + 2, "ft_strchr") == 0)
		return (&ft_strchr_info);
	if (strcmp(func_name + 2, "ft_strrchr") == 0)
		return (&ft_strrchr_info);
	if (strcmp(func_name + 2, "ft_strncmp") == 0)
		return (&ft_strncmp_info);
	if (strcmp(func_name + 2, "ft_memchr") == 0)
		return (&ft_memchr_info);
	if (strcmp(func_name + 2, "ft_memcmp") == 0)
		return (&ft_memcmp_info);
	if (strcmp(func_name + 2, "ft_strnstr") == 0)
		return (&ft_strnstr_info);
	if (strcmp(func_name + 2, "ft_strdup") == 0)
		return (&ft_strdup_info);
	if (strcmp(func_name + 2, "ft_atoi") == 0)
		return (&ft_atoi_info);
	if (strcmp(func_name + 2, "ft_calloc") == 0)
		return (&ft_calloc_info);
	if (strcmp(func_name + 2, "ft_substr") == 0)
		return (&ft_substr_info);
	if (strcmp(func_name + 2, "ft_strjoin") == 0)
		return (&ft_strjoin_info);
	if (strcmp(func_name + 2, "ft_strtrim") == 0)
		return (&ft_strtrim_info);
	if (strcmp(func_name + 2, "ft_split") == 0)
		return (&ft_split_info);
	if (strcmp(func_name + 2, "ft_itoa") == 0)
		return (&ft_itoa_info);
	if (strcmp(func_name + 2, "ft_strmapi") == 0)
		return (&ft_strmapi_info);
	if (strcmp(func_name + 2, "ft_striteri") == 0)
		return (&ft_striteri_info);
	if (strcmp(func_name + 2, "ft_putchar_fd") == 0)
		return (&ft_putchar_fd_info);
	if (strcmp(func_name + 2, "ft_putstr_fd") == 0)
		return (&ft_putstr_fd_info);
	if (strcmp(func_name + 2, "ft_putendl_fd") == 0)
		return (&ft_putendl_fd_info);
	if (strcmp(func_name + 2, "ft_putnbr_fd") == 0)
		return (&ft_putnbr_fd_info);
	if (strcmp(func_name + 2, "ft_lstnew") == 0)
		return (&ft_lstnew_info);
	if (strcmp(func_name + 2, "ft_lstadd_front") == 0)
		return (&ft_lstadd_front_info);
	if (strcmp(func_name + 2, "ft_lstsize") == 0)
		return (&ft_lstsize_info);
	if (strcmp(func_name + 2, "ft_lstlast") == 0)
		return (&ft_lstlast_info);
	if (strcmp(func_name + 2, "ft_lstadd_back") == 0)
		return (&ft_lstadd_back_info);
	if (strcmp(func_name + 2, "ft_lstdelone") == 0)
		return (&ft_lstdelone_info);
	if (strcmp(func_name + 2, "ft_lstclear") == 0)
		return (&ft_lstclear_info);
	if (strcmp(func_name + 2, "ft_lstiter") == 0)
		return (&ft_lstiter_info);
	if (strcmp(func_name + 2, "ft_lstmap") == 0)
		return (&ft_lstmap_info);
	return (NULL);
}
