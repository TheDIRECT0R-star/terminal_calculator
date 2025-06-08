int ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

int ft_atoi(char *str)
{
	int sign = 1;
	int result = 0;

	int i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\n')
	{
		i++;
	}

	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	} else if (str[i] == '+'){
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return result * sign;

}
