/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_img.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apigeon <apigeon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:10:26 by apigeon           #+#    #+#             */
/*   Updated: 2022/12/11 20:43:11 by apigeon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "graphics.h"

void	free_img(void *mlx, t_img *img)
{
	if (img)
	{
		mlx_destroy_image(mlx, img->img);
		free(img);
	}
}