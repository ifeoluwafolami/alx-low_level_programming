/**
 * cap_string - capitalizes all words of a string.
 * @n: string.
 * Return: string.
 */
char *cap_string(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if ((n[i - 1] == ' ' || n[i - 1] == '\n'
		|| n[i - 1] == '\t' || n[i - 1] == ','
		|| n[i - 1] == ';' || n[i - 1] == '!'
		|| n[i - 1] == '?' || n[i - 1] == '"'
		|| n[i - 1] == '(' || n[i - 1] == ')'
		|| n[i - 1] == '{' || n[i - 1] == '}'
		|| n[i - 1] == '.')
		&& (n[i] >= 'a' && n[i] <= 'z'))
		{
			n[i] = n[i] - 32;
		}
		else if ((n[0] >= 97 && n[0] <= 122))
		{
			n[0] = n[0] - 32;
		}
		else
		{
			n[i] = n[i];
		}
		i++;
	}
	return (n);
}
