/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eperaita <eperaita@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 16:12:04 by eperaita          #+#    #+#             */
/*   Updated: 2021/08/03 16:48:06 by eperaita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int a)
{
	int	r;

	r = 0;
	if (a >= 32 && a <= 126)
		r = 1;
	return (r);
}
