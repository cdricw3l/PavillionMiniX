
#include "../include/pavillion.h"


t_pav *init_mlx(void)
{
    t_pav *pav;

    pav = malloc(sizeof(t_pav));
    if(!pav)
        return(NULL);
    pav->mlx = mlx_init();
    if(!pav->mlx)
        return(NULL);
    return(pav);
}

int	close_windows(t_pav *pav)
{
	if (pav->win != NULL)
		mlx_destroy_window(pav->mlx, pav->win);
	if (pav->mlx != NULL)
		mlx_destroy_display(pav->mlx);
	free(pav);
	return (0);
}

int main(void)
{
    
    t_pav *pav;
    int size_x;
    int size_y;

    pav = init_mlx();
    if(!pav)
        return(1);
    mlx_get_screen_size(pav->mlx, &size_x, &size_y);
    pav->win = mlx_new_window(pav->mlx,size_x / 2, size_y / 2, "pavillion" );
    mlx_hook(pav->win, 17, 1L << 0, close_windows, pav);
    mlx_loop(pav->mlx);
    return(0);
}