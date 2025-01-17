/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_graphics.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 23:10:22 by apigeon           #+#    #+#             */
/*   Updated: 2023/01/03 23:10:24 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"

int	init_graphics(t_game *game)
{
	t_img	*img;

	game->mlx = mlx_init();
	if (!game->mlx)
		return (DEBUG("can't instanciate mlx"), -1);
	game->win = mlx_new_window(game->mlx, WIN_WIDTH, WIN_HEIGHT, WIN_TITLE);
	if (!game->win)
		return (DEBUG("can't instanciate mlx window"), -1);
	img = new_image(game->mlx);
	if (!img)
		return (DEBUG("can't create a new image"), -1);
	render_img(game, new_image(game->mlx));
	return (1);
}
