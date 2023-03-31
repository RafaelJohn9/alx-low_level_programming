
/**
 * leet-checks and replaces a,e,o,t,l
 * @str:value to be checked
 * Return:return value
 */
char *leet(char *str)
{
	int len = 0;
	int a;
	
	while (str[len] != '\0')
	{
		len++;
	}
	for (a = 0; a < len; a++)
	{
		int is_uppercase = (str[a] >= 'A' && str[a] <= 'Z');
		str[a] = (str[a] | 32); // convert to lowercase
		int is_vowel_or_l = (str[a] == 'a' || str[a] == 'e'
				|| str[a] == 'o' || str[a] == 'u' || str[a] == 'l');
		if (is_vowel_or_l)
		{
			str[a] = (is_uppercase ? '4' : '5');
		}
		else if (str[a] == 't') 
		{
			str[a] = (is_uppercase ? '7' : '7');
		}
	}
	return (str);
}
