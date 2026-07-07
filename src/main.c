#include "analyzer.h"

/*
** FUNCTION: main
** PURPOSE: Acts as the central system controller and orchestration hub.
** LIBFT USAGE: Integrates ft_bzero, ft_strtrim, and ft_lstclear.
*/
int	main(int argc, char **argv)
{
	char		*trimmed_input;
	t_metrics	metrics;
	t_list		*word_list;

	// 1. Argument Guard: Validate execution parameters
	if (argc != 2)
	{
		ft_putstr_fd("Error: Invalid argument count.\n", 2);
		ft_putstr_fd("Usage: ./libft_project \"<input_string>\"\n", 2);
		return (1);
	}

	// 2. Clear Metrics Memory Block via Low-Level Byte Zeroing
	ft_bzero(&metrics, sizeof(t_metrics));

	// 3. Clean Edge Boundaries of Input Stream
	trimmed_input = ft_strtrim(argv[1], " ");
	if (!trimmed_input)
		return (1);

	// 4. Stage 1: Run Character Structural Analysis
	analyze_characters(argv[1], &metrics);

	// 5. Stage 2: Tokenize and Populate the Heap Linked List Matrix
	word_list = build_word_list(trimmed_input);

	// 6. Stage 3: Display Console Dashboard Results
	print_dashboard(argv[1], trimmed_input, &metrics, word_list);

	// 7. Stage 4: Comprehensive System Memory Scrub (Zero-Leak Target)
	free(trimmed_input);
	ft_lstclear(&word_list, free);

	return (0);
}