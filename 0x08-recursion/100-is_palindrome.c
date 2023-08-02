#include <string.h>
#include "main.h"
/**
 * is_palindrome_helper - helper function
 * @s: The input string to check
 * @start: The starting index for comparison
 * @end: The ending index for comparison
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return (1);

if (s[start] != s[end])
return (0);

return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The input string to check
 *
 * Return: 1 if the string is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
int len = strlen(s);

if (len <= 1)
return (1);
return (is_palindrome_helper(s, 0, len - 1));
}
