#ifndef PAVILLION_H
# define PAVILLION_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
# include "../libft/libft.h"
# include "../mlx_linux/mlx.h"

#define DEBBUG printf("DEBBUG\n");

typedef struct s_pav
{
    void *mlx;
    void * win;

} t_pav;


#endif