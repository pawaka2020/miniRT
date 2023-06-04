#ifndef MAIN_H
#define MAIN_H

/*required libraries*/
#include "libft/mylibft.h"
#include <stdlib.h>
#include "minilibx_linux/mlx.h"
#include <X11/keysym.h>
/*component libraries*/
#include "common/common.h"

/*parser data structures*/
//sub-data structures
typedef struct s_vector {
    double x;
    double y;
    double z;
} t_vector;

typedef struct s_color {
    int red;
    int green;
    int blue;
} t_color;

typedef struct s_camera {
    t_vector position;
    t_vector orientation;
    double fov;
} t_camera;

typedef struct s_light {
    t_vector position;
    double brightness;
    t_color color;
} t_light;

typedef struct s_plane {
    t_vector position;
    t_vector normal;
    t_color color;
} t_plane;

typedef struct s_sphere {
    t_vector position;
    double diameter;
    t_color color;
} t_sphere;

typedef struct s_cylinder {
    t_vector position;
    t_vector orientation;
    double diameter;
    double height;
    t_color color;
} t_cylinder;
//parser data structures
typedef struct s_scene {
    double  ambient;
    t_color background;
    t_camera camera;
    t_light *lights;
    int light_count;
    t_plane *planes;
    int plane_count;
    t_sphere *spheres;
    int sphere_count;
    t_cylinder *cylinders;
    int cylinder_count;
} t_scene;

/*graphics library data structures*/
//minilibx
typedef struct s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
}	t_data;
//other graphics libraries go here

#endif