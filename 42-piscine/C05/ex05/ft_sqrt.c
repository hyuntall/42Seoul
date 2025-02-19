/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyuncpar <hyuncpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 00:00:32 by hyuncpar          #+#    #+#             */
/*   Updated: 2022/06/02 20:50:48 by hyuncpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		i;

	if (nb == 1)
		return (1);
	i = 1;
	while (i < nb && i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
