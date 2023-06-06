/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validate_params.h"

void validate_params(int argc, char **argv)
{
    valid_argc(argc);
    valid_ext(argv[1], 0);
    valid_location(argv[1], 0);
    valid_options(argc, argv, 0);
    //placeholder logic to silence '-Werror=unused=parameter' compile errors
	//if (argc == 1 && argv[0] != 0) exit(0);
}