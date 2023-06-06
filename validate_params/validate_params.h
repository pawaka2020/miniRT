/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validator.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATE_PARAMS_H
#define VALIDATE_PARAMS_H

# include "../main.h"

/*Makes sure all params are valid, if not error mesage and exit(0) are 
called.*/
void	validate_params(int argc, char **argv);
/*If no args given, error message and exit(0) are called.*/
void	valid_argc(int argc);
/*if file does not have .rt extension, error message and exit(0) are called*/
void	valid_ext(const char *filename, int debug);
/*makes sure 'filename' exists in 'scenes' folder, if not error message and 
exit(0) are called*/ 
void	valid_location(const char *filename, int debug);
/*If invalid options given by args after argv[1], error message and 
exit(0) are called.
This will be coded next time once I find out what the optional args are.*/
void	valid_options(int argc, char **argv, int debug);

#endif