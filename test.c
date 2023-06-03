// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   main.cpp                                           :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
// /*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
// #include "minilibx_linux/mlx.h"

// #include <X11/keysym.h>

// typedef struct s_data
// {
// 	void	*mlx_ptr;
// 	void	*win_ptr;
// }	t_data;

// int	handle_no_event(void)
// {
// 	/* This function needs to exist, but it is useless for the moment */
// 	return (0);
// }

// int	handle_input(int keysym, t_data *data)
// {
// 	if (keysym == XK_Escape)
// 		mlx_destroy_window(data->mlx_ptr, data->win_ptr);
// 	return (0);
// }

// int	main(void)
// {
// 	t_data	data;

// 	data.mlx_ptr = mlx_init();
// 	if (data.mlx_ptr == NULL)
// 		return (0);
// 	data.win_ptr = mlx_new_window(data.mlx_ptr, 600, 800,
// 			"My first window!");
// 	if (data.win_ptr == NULL)
// 	{
// 		free(data.win_ptr);
// 		return (0);
// 	}

// 	/* Setup hooks */ 
// 	mlx_loop_hook(data.mlx_ptr, &handle_no_event, &data);
// 	mlx_key_hook(data.win_ptr, &handle_input, &data);

// 	mlx_loop(data.mlx_ptr);

// 	/* we will exit the loop if there's no window left, and execute this code */
// 	mlx_destroy_display(data.mlx_ptr);
// 	free(data.mlx_ptr);
// }

