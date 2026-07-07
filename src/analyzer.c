
#include "analyzer.h"

/*
** FUNCTION: analyze_characters
** PURPOSE: Loops through the raw input string character by character.
** Uses 5 distinct Libft validation functions to gather metrics.
** THOUGHT PROCESS: We don't use standard pointer arithmetic notation here
** to keep the scanning loops readable and perfectly safe.
*/
void	analyze_characters(char *str, t_metrics *metrics)
{
	int	i;

	if (!str || !metrics)
		return ;
	i = 0;
	while (str[i] != '\0')
	{
		metrics->total_chars++;
		if (ft_isalpha(str[i]))
			metrics->alphabetic++;
		if (ft_isdigit(str[i]))
			metrics->digits++;
		if (ft_isalnum(str[i]))
			metrics->alphanumeric++;
		if (ft_isascii(str[i]))
			metrics->ascii++;
		if (ft_isprint(str[i]))
			metrics->printable++;
		i++;
	}
}