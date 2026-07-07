#include "analyzer.h"

/*
** LOCAL HELPER FUNCTION: print_uppercase_str
** PURPOSE: Takes a string and prints it character-by-character in uppercase.
** LIBFT USAGE: Uses ft_toupper and ft_putchar_fd.
*/
static void	print_uppercase_str(char *str)
{
	int	i;

	if (!str)
		return ;
	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar_fd(ft_toupper(str[i]), 1);
		i++;
	}
}

/*
** FUNCTION: print_dashboard
** PURPOSE: Formats and displays the compiled system metrics and data blocks.
** LIBFT USAGE: Exhausts ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd, and ft_lstsize.
*/
void	print_dashboard(char *orig, char *trimmed, t_metrics *m, t_list *words)
{
	t_list	*current;
	int		node_index;

	ft_putendl_fd("=== 🛠️ LIBFT PURIST ANALYZER ENGINE 🛠️ ===", 1);
	ft_putchar_fd('\n', 1);

	// 1. Inputs Section
	ft_putstr_fd("[1. RAW INPUT PROCESSING]\n", 1);
	ft_putstr_fd("Original String: \"", 1);
	ft_putstr_fd(orig, 1);
	ft_putendl_fd("\"", 1);
	ft_putstr_fd("Trimmed String:  \"", 1);
	ft_putstr_fd(trimmed, 1);
	ft_putendl_fd("\"\n", 1);

	// 2. Metrics Counter Section
	ft_putstr_fd("[2. CHARACTER MATRIX ANALYSIS]\n", 1);
	ft_putstr_fd("Total Characters analyzed: ", 1);
	ft_putnbr_fd(m->total_chars, 1);
	ft_putendl_fd("", 1);
	ft_putstr_fd("* Alphabetic ('ft_isalpha'):  ", 1);
	ft_putnbr_fd(m->alphabetic, 1);
	ft_putendl_fd("", 1);
	ft_putstr_fd("* Digits     ('ft_isdigit'):  ", 1);
	ft_putnbr_fd(m->digits, 1);
	ft_putendl_fd("", 1);
	ft_putstr_fd("* Alphanumeric ('ft_isalnum'): ", 1);
	ft_putnbr_fd(m->alphanumeric, 1);
	ft_putendl_fd("", 1);
	ft_putstr_fd("* Printable  ('ft_isprint'):  ", 1);
	ft_putnbr_fd(m->printable, 1);
	ft_putendl_fd("", 1);
	ft_putstr_fd("* ASCII      ('ft_isascii'):  ", 1);
	ft_putnbr_fd(m->ascii, 1);
	ft_putendl_fd("\n", 1);

	// 3. Linked List Map Section
	ft_putstr_fd("[3. LINKED LIST MEMORY MAP]\n", 1);
	ft_putstr_fd("Created nodes for each word block (TRANSFORMED TO UPPERCASE):\n", 1);
	current = words;
	node_index = 1;
	while (current != NULL)
	{
		ft_putstr_fd(" -> Node [", 1);
		ft_putnbr_fd(node_index++, 1);
		ft_putstr_fd("]: \"", 1);
		print_uppercase_str((char *)current->content);
		ft_putendl_fd("\"", 1);
		current = current->next;
	}
	ft_putchar_fd('\n', 1);
	ft_putstr_fd("Total allocated nodes in Heap: ", 1);
	ft_putnbr_fd(ft_lstsize(words), 1);
	ft_putendl_fd("\n", 1);

	// 4. System Exit Notice
	ft_putstr_fd("[4. CLEAN EXIT & DEALLOCATION]\n", 1);
	ft_putstr_fd("Clearing all heap nodes via 'ft_lstclear'... Working.\n", 1);
	ft_putendl_fd("==========================================", 1);
}