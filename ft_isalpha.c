/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkiflema <mkiflema@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 12:15:04 by mkiflema          #+#    #+#             */
/*   Updated: 2022/12/27 18:10:06 by mkiflema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int unsigned c)
{
	if ((c < 'A' || c > 'z') || (c < 'a' && c > 'Z'))
		return (0);
	return (c);
}
// int main(){
// 	printf("%c", ft_isalpha('a' - 1));
// 	printf("\n%c", ft_isalpha('a'));
// 	printf("\n%c", ft_isalpha('z' + 1));
// 	printf("\n%c", ft_isalpha('A' - 1));
// 	printf("\n%c", ft_isalpha('A'));
// 	printf("\n%c", ft_isalpha('Z' + 1));
// 	printf("\n%c", ft_isalpha('Z' ));
// }