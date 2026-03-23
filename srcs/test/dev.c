/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klima-do <klima-do@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:48:04 by rpinto-r          #+#    #+#             */
/*   Updated: 2026/03/23 17:00:18 by klima-do         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int	main(int argc, char **argv)
{
	t_rt	*rt;

	rt = ft_calloc(sizeof(t_rt), 1);
	if (argc != 2)
	{
		ft_putendl_fd("Error", 2);
		ft_putendl_fd("please provide a scene file.", 2);
	}
	else if (load_scene_file(rt, argv[1]))
	{
		rt_dump(rt);
	}
	destroy_renderer_state(rt);
	return (0);
}
