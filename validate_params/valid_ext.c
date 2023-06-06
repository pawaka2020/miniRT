/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_ext.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "validate_params.h"

/*if file does not have .rt extension, error message and exit(0) are called*/
#include <stdio.h>
void    valid_ext(const char *filename, int debug)
{
    size_t  filename_len;
    size_t      ext_len;
    const char  *filename_ext;

    filename_len = ft_strlen(filename);
    ext_len = ft_strlen(".rt");;
    filename_ext = filename + (filename_len - ext_len);
    if (filename_len < ext_len)
        print_error("Invalid filename");
    if (ft_strncmp(filename_ext, ".rt", ext_len) != 0)
        print_error("Invalid filename");
    if (debug == 1)
        ft_printf("%s has valid filename\n", filename);
}