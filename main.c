
#include "main.h"
//this function needs to exist, but it is useless for the moment
int	handle_no_event(void)
{
	return (0);
}

//handles closing if 'Esc' key pressed
int	handle_input(int keysym, t_data *data)
{
	if (keysym == XK_Escape)
		mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	return (0);
}

//handles closing if 'x' at top right of window clicked
int	handle_close(t_data *data)
{
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	exit(0);
}

//uses minilibx to start visual screen
void start_screen(t_data *data)
{
	data->mlx_ptr = mlx_init();
	if (data->mlx_ptr == NULL)
		exit(1);
	data->win_ptr = mlx_new_window(data->mlx_ptr, 1360, 830, "miniRT");
	if (data->win_ptr == NULL)
		exit(1);
	mlx_loop_hook(data->mlx_ptr, &handle_no_event, data);
	mlx_key_hook(data->win_ptr, &handle_input, data);
	mlx_hook(data->win_ptr, 17, 0L, &handle_close, data);
	mlx_loop(data->mlx_ptr);
}

//stops the screen as the program closes afterwards.
//memory cleaning also occurs here as well
void stop_screen(t_data *data)
{
	mlx_destroy_display(data->mlx_ptr);
	free(data->mlx_ptr);
	exit(0);
}

//makes sure the parameters are valid, if not error mesage and exit(0) are called.
//void validate(int argc, char **argv);

//parses the .rt file represented by argv[1] and includes options by other argv variables
t_scene parse(int argc, char **argv);

//generates the image using raytracer algorithms
void generate_image(t_data *data, t_scene *scene);

//generates controls input by keyboard such as rotating, zoom in/outs, 
//resizing individual objects
void generate_controls(t_data *data, t_scene *scene);

int	main(int argc, char **argv)
{
	//t_scene scene;
	//t_data	data;

	validate_params(argc, argv);
	//parse_params()
	//scene = parse(argc, argv);
	//start_screen(&data);
	//generate_image(&data, &scene);
	//generate_controls(&data, &scene);
	//stop_screen(&data);
	//placeholder logic to silence '-Werror=unused=parameter' compile errors
	if (argc == 1 && argv[0] != 0) exit(0);
}
//for unit tests only
// int	main(int argc, char **argv)
// {
// 	validate_params(argc, argv);
// 	//valid_ext(argv[1], 1);
// 	if (argc > -1) return 0;
// }