/**
 * _strlen - Function that returns the length of string.
 * @s: pointer to the null-terminated byte string to be examined.
 *
 * Return: The length of the null-terminated byte string s.
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
