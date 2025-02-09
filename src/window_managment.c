#include "../include/pavillion.h"

int	close_windows(t_pav *pav)
{
	if (pav->win != NULL)
		mlx_destroy_window(pav->mlx, pav->win);
	if (pav->mlx != NULL)
		mlx_destroy_display(pav->mlx);
	free(pav);
	return (0);
}