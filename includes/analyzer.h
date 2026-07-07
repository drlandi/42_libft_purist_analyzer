#ifndef ANALYZER_H
# define ANALYZER_H

/*
** Include your original libft header.
** This gives us access to t_list and all 43 original function prototypes.
*/
# include "libft.h"

/*
** Standard library free() wrapper definition.
** Banned in main application logic, but required by ft_lstclear 
** as a function pointer argument to wipe the heap blocks.
*/
# include <stdlib.h>

/*
** STRUCTURE: t_metrics
** PURPOSE: Holds individual counters for character categories.
** LIBFT USAGE: Filled dynamically by our ft_is* character squad.
*/
typedef struct s_metrics
{
	int	total_chars;
	int	alphabetic;
	int	digits;
	int	printable;
	int	alphanumeric;
	int	ascii;
}				t_metrics;

/*
** ==========================================================================
** APPLICATION MODULE PROTOTYPES
** ==========================================================================
*/

/*
** Stage 1: Character Analysis (src/analyzer.c)
** Scans the raw string to populate our metrics data layout.
*/
void	analyze_characters(char *str, t_metrics *metrics);

/*
** Stage 2: Tokenization & String Parsing (src/parser.c)
** Cleans boundaries, splits words, and compiles the linked list database.
*/
t_list	*build_word_list(char *str);

/*
** Stage 3: Console Dashboard Display (src/output.c)
** Prints systemic reports using strictly ft_put* functions.
*/
void	print_dashboard(char *orig, char *trimmed, t_metrics *m, t_list *words);

#endif