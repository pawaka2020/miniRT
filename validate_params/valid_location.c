/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_location.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validate_params.h"

/*makes sure 'filename' exists in 'scenes' folder, if not error message and 
exit(0) are called*/ 
void	valid_location(const char *filename, int debug)
{
	char *location;
	int	file;

	location = ft_strjoin("scenes/", filename);
	if (!location)
		print_error("Memory allocation failed.");
	file = open(location, O_RDONLY);
	free(location);
	if (file == -1)
		print_error("File does not exist.");
	close (file);
	if (debug == 1)
		ft_printf("File %s exists.\n", filename);	
}