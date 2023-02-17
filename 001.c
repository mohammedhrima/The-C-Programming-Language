/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   001.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhrima <mhrima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 00:32:56 by mhrima            #+#    #+#             */
/*   Updated: 2023/02/16 00:35:32 by mhrima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	const int	maxinput;
	int			i;
	double		number;
	double		average;
	double		sum;

	maxinput = 100;
	sum = 0.0;
	i = 0;
	while (i <= maxinput)
	{
		printf("%d. Enter a number: ", i);
		scanf("%lf", &number);
		if (number < 0.0)
		{
			goto jump;
		}
		sum += number;
		i++;
	}

jump:
	average = sum / (i - 1);
	printf("Sum = %.2f\n", sum);
	printf("Average = %.2f", average);
	return (0);
}
