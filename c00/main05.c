/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzuntini <dzuntini@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/15 13:47:25 by dzuntini          #+#    #+#             */
/*   Updated: 2020/10/15 14:14:26 by dzuntini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_comb();

int main(int ac, char **av)
{
	int i;

	ac++;
	i = 0;
	printf("%s =",av[0]);
	ft_print_comb();
	return (0);
}
