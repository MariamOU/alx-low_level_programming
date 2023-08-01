#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_space - function to check if a character is a delimiter or a space
 * @c: a character passed to the function
 * Description: 'Program uses the function is_space'
 * Return:
 */
int is_space(char c)
{
switch (c)
{
case ' ':
case '\t':
case '\n':
case '\v':
case '\f':
case '\r':
return (1);
default:
return (0);
}
}

/**
 * **strtow - function to split a string into words
 * @str: the input string
 * Description: 'Program uses the function **strtow'
 * Return:
 */
char **strtow(char *str)
{
int i, number_words, word_length;
char *temp, *start, *word, **words;

if (str == NULL || *str == '\0')
{
return (NULL);
}
number_words = 0;
temp = str;
while (*temp != '\0')
{
while (is_space(*temp))
{
temp++;
}
if (*temp == '\0')
{
break;
}
start = temp;
while (*temp != '\0' && !is_space(*temp))
{
temp++;
}
word_length = temp - start;
word = (char *)malloc((word_length + 1) * sizeof(char));
if (word == NULL)
{
for (i = 0; i < number_words; i++)
{
free(words[i]);
}
free(words);
return (NULL);
}
strncpy(word, start, word_length);
word[word_length] = '\0';
if (number_words == 0)
{
words = (char **)malloc(2 * sizeof(char *));
}
else
{
words = (char **)realloc(words, (number_words + 2) * sizeof(char *));
}
if (words == NULL)
{
free(word);
for (i = 0; i < number_words; i++)
{
free(words[i]);
}
free(words);
return (NULL);
}
words[number_words] = word;
number_words++;
while (is_space(*temp))
{
temp++;
}
}
words[number_words] = NULL;
return (words);
}
/**
 * free_words - function to free word
 * @words: the input word
 * Description: 'Program uses the function free_words'
 * Return:
 */
void free_words(char **words)
{
int i;

if (words == NULL)
{
return;
}
for (i = 0; words[i] != NULL; i++)
{
free(words[i]);
}
free(words);
}
