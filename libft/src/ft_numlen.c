/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenglert <aenglert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 12:45:08 by aenglert          #+#    #+#             */
/*   Updated: 2021/09/28 12:45:09 by aenglert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_numlen(long long n)
{
	int	i;

	if (!n)
		return (1);
	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
