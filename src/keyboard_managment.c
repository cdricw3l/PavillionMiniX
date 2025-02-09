#include "../include/pavillion.h"

int	manage_keyboard(int keycode, t_pav *pav)
{
	
	if (keycode == XK_Escape || keycode == 79933840)
    {
        printf("mlx win %p, mlx %p\n", pav->win, pav->mlx);
		if (pav->win != NULL)
        {
		    mlx_destroy_window(pav->mlx, pav->win);
            printf("fenetre detruite\n");
        }
        if (pav->mlx != NULL)
        {
            mlx_destroy_display(pav->mlx);
            printf("Instqnce mlx detruite\n");
        }
        exit(0);
    }
	return (0);
}