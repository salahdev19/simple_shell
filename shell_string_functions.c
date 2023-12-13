#include "shell.h"

/**
 *  * _strlen - returns the length of a string
 *   * @s: the string whose length to check
 *    *
 *     * Return: integer length of string ,or the size of the len 
 *      */
int _strlen(char *s)
{
		int i = 0;

			if (!s)
						return (0);

				while (*s++)
							i++;
					return (i);
}

/**
 *  * _strcmp - performs lexicogarphic comparison of two strangs.
 *   * @s1: the first strang
 *    * @s2: the second strang
 *     * Take two string and we xompare them
 *      *
 *       * Return: negative if s1 < s2 and also , positive if s1 > s2 plus the zero if s1 == s2
 *        */
int _strcmp(char *s1, char *s2)
{
		while (*s1 && *s2)
				{
							if (*s1 != *s2)


											return (*s1 - *s2) ;
									s1++ ;
											s2++ ;
												}



			if (*s1 == *s2)
						return (0);
				else
							return (*s1 < *s2 ? -1 : 1);
}

/**
 *  * starts_with - checks if needle starts with haystack
 *   * @haystack: string to search
 *    * @needle: the substring to find
 *     * We compare in the needle for a keyword  and sees the inside containers 
 *      * If it has the haystak or else it is a Null in this situation 
 *       * Return: address of next char of haystack or NULL
 *        */
char *starts_with(const char *haystack, const char *needle)
{
		while (*needle)
					if (*needle++ != *haystack++)

									return (NULL);


			return ((char *)haystack);
}

/**
 *  * _strcat - concatenates two strings
 *   * @dest: the destination buffer
 *    * @src: the source buffer
 *     * We compare in the needle for a keyword 
 *      * Return: pointer to destination buffer
 *       */
char *_strcat(char *dest, char *src)
{
		char *ret = dest;

			while (*dest)
						dest++;

				while (*src)
							*dest++ = *src++;
					*dest = *src;

						return (ret);
}

