/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_params.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_PARAMS_H
# define PARSE_PARAMS_H

# include "../main.h"

//primary function
void	parse_params(t_scene *scene, const char *filename, int debug);
//sub-functions
void	parse_ambience(t_scene *scene, const char *filename, int debug);
void	parse_camera(t_scene *scene, const char *filename, int debug);

#endif