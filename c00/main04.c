/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzuntini <dzuntini@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 13:47:25 by dzuntini          #+#    #+#             */
/*   Updated: 2020/10/15 14:01:46 by dzuntini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_is_negative(int n);

int main(int ac, char **av)
{
	int i;

	ac++;
	i = 0;
	printf("%s =",av[0]);
	ft_is_negative(atoi(av[1]));
	return (0);
}
