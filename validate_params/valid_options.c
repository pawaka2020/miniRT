/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_options.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validate_params.h"

/*If invalid options given by args after argv[1], error message and 
exit(0) are called.
This will be coded next time once I find out what the optional args are.*/
void valid_options(int argc, char **argv, int debug)
{
	if (argc == 1 && argv[0] != 0 && debug > -1) return ;
}