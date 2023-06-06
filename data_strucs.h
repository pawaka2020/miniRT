#ifndef DATA_STRUCS_H
# define DATA_STRUCS_H

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
/*'A' in .rt file*/
typedef struct s_ambient {
    double ratio;
    t_color color;
} t_ambient;
/*'C' in .rt file*/
typedef struct s_camera {
    t_vector position;
    t_vector orientation;
    double fov;
} t_camera;
/*'L' in .rt file*/
typedef struct s_lighting {
    t_vector position;
    double brightness;
    t_color color;
} t_lighting;
typedef enum e_polygon_type {
    SPHERE,
    CYLINDER,
    PLANE
} t_polygon_type;
typedef struct s_polygon {
    t_polygon_type type;
    t_vector position;
    t_vector orientation; // Only used for cylinders
    double diameter; // Only used for spheres and cylinders
    double height; // Only used for cylinders
    t_color color;
} t_polygon;
// // Parser data structure
typedef struct s_myscene {
    t_ambient *ambients;
    int ambient_count;
    t_camera *cameras;
    int camera_count;
    t_lighting *lightings;
    int lighting_count;
    t_polygon *polygons;
    int polygon_count;
} t_myscene;

typedef struct s_data
{
	void	*mlx_ptr;
	void	*win_ptr;
}	t_data;

# endif