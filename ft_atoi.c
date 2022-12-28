/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiflema <mkiflema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 11:41:09 by mkiflema          #+#    #+#             */
/*   Updated: 2022/12/24 11:41:09 by mkiflema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] != '\0' && (nptr[i] == ' '
			|| (nptr[i] >= 9 && nptr[i] <= 13)))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else
	{
		if (nptr[i] == '+')
			i++;
	}	
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
		result = (result * 10) + (nptr[i++] - '0');
	return (sign * result);
}

// int main()
// {
// 	char *str ="-+42";
// 	printf("%d", atoi(str));
// 	printf("\n%d", ft_atoi(str));
// }