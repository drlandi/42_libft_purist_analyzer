#include "analyzer.h"

/*
** FUNCTION: build_word_list
** PURPOSE: Takes a cleaned string, tokenizes it by spaces, and encapsulates 
** each word token inside a dynamic t_list node.
** LIBFT USAGE: Employs ft_split, ft_lstnew, and ft_lstadd_back.
*/
t_list	*build_word_list(char *str)
{
	char	**tokens;
	t_list	*root_list;
	t_list	*new_node;
	int		i;

	if (!str)
		return (NULL);
	root_list = NULL;
	// 1. Break the string into an allocated array of words
	tokens = ft_split(str, ' ');
	if (!tokens)
		return (NULL);
	i = 0;
	// 2. Loop through our tokens and migrate them into list nodes
	while (tokens[i] != NULL)
	{
		new_node = ft_lstnew(tokens[i]);
		if (!new_node)
		{
			// Absolute protection: If malloc fails mid-way, wipe everything
			while (tokens[i])
				free(tokens[i++]);
			free(tokens);
			ft_lstclear(&root_list, free);
			return (NULL);
		}
		ft_lstadd_back(&root_list, new_node);
		i++;
	}
	// 3. Free the top-level array pointer (the box holding the strings)
	// We DO NOT free tokens[i] here because our list nodes now point to them!
	free(tokens);
	return (root_list);
}