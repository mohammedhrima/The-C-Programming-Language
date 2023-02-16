/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   003.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhrima <mhrima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 02:29:00 by mhrima            #+#    #+#             */
/*   Updated: 2023/02/16 02:29:01 by mhrima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*buffer;
	size_t	bufsize;
	size_t	characters;

	bufsize = 40;
	buffer = (char *)malloc(bufsize * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}
	while ((characters = getline(&buffer, &bufsize, stdin)))
		printf("%s\n", buffer);
	return (0);
}
