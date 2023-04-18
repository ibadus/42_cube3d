/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   engine.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oaarsse <oaarsse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 21:58:41 by oaarsse           #+#    #+#             */
/*   Updated: 2023/04/18 18:34:57 by oaarsse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENGINE_H
# define ENGINE_H

# include <stdio.h>
# include <math.h>
# include <limits.h>
# include <float.h>
# include "libft.h"
# include "parser.h"
# include "graphics.h"
# include "constant.h"

void	render(t_game	*game);
int		dda(t_game *game, int x);
bool	init_player(t_game	*game);

#endif
