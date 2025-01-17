/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaarsse <oaarsse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:10:26 by apigeon           #+#    #+#             */
/*   Updated: 2023/04/18 18:08:27 by oaarsse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"
#include "constant.h"

void	print_map(t_map *map)
{
	int	i;

	i = 0;
	while (map->points[i])
		printf("%s\n", map->points[i++]);
}

void	print_game(t_game *game)
{
	int	i;

	printf("Game:\n");
	printf(" - resolution: %dx%d\n", WIN_WIDTH,
		WIN_HEIGHT);
	printf(" - textures:\n");
	printf("   - north wall: %s\n", game->textures->wall_north->file);
	printf("   - south wall: %s\n", game->textures->wall_south->file);
	printf("   - west wall: %s\n", game->textures->wall_west->file);
	printf("   - east wall: %s\n", game->textures->wall_east->file);
	printf("   - ceiling: %x\n", game->textures->ceiling);
	printf("   - floor: %x\n", game->textures->floor);
	printf(" - map:\n");
	printf("   - width: %d\n", game->map->width);
	printf("   - height: %d\n", game->map->height);
	printf("   - player: (%d,%d)\n", game->map->player->pos[0],
		game->map->player->pos[1]);
	i = 0;
	while (game->map->points[i])
		printf("   > %s\n", game->map->points[i++]);
}
