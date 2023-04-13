#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - function to count the number of words in a string
 * @str: The input string
 * Return: Always 0
 */
int count_words(char *str)
{
int count = 0;
int in_word = 0;
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ')
{
if (in_word == 0)
{
count++;
in_word = 1;
}
}
else
{
in_word = 0;
}
}
return (count);
}

/**
 * copy_word - function to copy a word from a string to a new buffer
 * @str: The input string
 * Return: Always 0
 */
char *copy_word(char *str)
{
char *word;
int  len = 0;
int i = 0;
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\0')
{
len++;
}
word = (char *) malloc((len + 1) * sizeof(char));
if (word == NULL)
{
return (NULL);
}
strncpy(word, str, len);
word[len] = '\0';
return (word);
}

/**
 * strtow - function that splits a string into words.
 * @str: A given Array
 * Return: Always 0
 */
char **strtow(char *str)
{
char **words;
int num_words, i, j;
char *word;
if (str == NULL || *str == '\0')
{
return (NULL);
}
num_words = count_words(str);
words = (char **) malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
i = 0;
while (*str != '\0')
{
if (*str == ' ' || *str == '\t' || *str == '\n')
{
str++;
}
else
{
word = copy_word(str);
if (word == NULL)
{
for (j = 0; j < i; j++)
{
free(words[j]);
}
free(words);
return (NULL);
}
words[i] = word;
i++;
str += strlen(word);
}
}
words[num_words] = NULL;
return (words);
}
