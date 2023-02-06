/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:18:59 by lesanche          #+#    #+#             */
/*   Updated: 2023/02/06 19:23:27 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*bucledelee(int fd, char *canasta, int *readflag)
{
	char	cosa[BUFFER_SIZE + 1];
	int		readcomp;

	readcomp = 1;
	while (readcomp != 0 && readcomp != -1 && !(ft_strrchr(canasta, '\n')))
	{
		readcomp = read(fd, cosa, BUFFER_SIZE);
		if (readcomp == 0)
			*readflag = 0;
		if (readcomp == -1)
			return (NULL);
		cosa[readcomp] = '\0';
		canasta = ft_strjoin(canasta, cosa);
	}
	if (ft_strlen(canasta) == 0)
	{
		free(canasta);
		return (NULL);
	}
	return (canasta);
}

char	*sacalinea(char *canasta)
{
	char	*linea;
	int		p;
	int		q;

	p = 0;
	while (canasta[p] != '\n' && canasta[p] != '\0')
		p++;
	if (canasta[p] == '\n')
		p++;
	linea = (char *)malloc(sizeof(char) * (p + 1));
	q = 0;
	while (q < p)
	{		
		linea[q] = canasta[q];
		q++;
	}
	linea[q] = '\0';
	return (linea);
}

char	*sacacosa(char *canasta)
{
	char	*bolsillo;
	int		p;
	int		q;
	int		largo;

	p = 0;
	while (canasta[p] != '\n' && canasta[p] != '\0')
		p++;
	if (canasta[p] == '\0')
		return (NULL);
	largo = ft_strlen(canasta);
	bolsillo = (char *)malloc(sizeof(char) * (largo - p + 1));
	q = 0;
	p = p + 1;
	while (canasta[p] != '\0')
	{
		bolsillo[q] = canasta[p];
		p++;
		q++;
	}
	free (canasta);
	bolsillo[q] = '\0';
	return (bolsillo);
}

char	*get_next_line(int fd)
{
	static char	*canasta = NULL;
	char		*linea;
	int			readflag = 1;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, NULL, 0) < 0)
	{
		free (canasta);
		canasta = NULL;
		return (NULL);
	}
	if (canasta == NULL)
	{
		canasta = (char *)malloc(sizeof(char));
		canasta[0] = '\0';
	}
	canasta = bucledelee(fd, canasta, &readflag);
	if (canasta == NULL)
		return (NULL);
	if (readflag == 0)
	{
		linea = canasta;
		canasta = NULL;
	}
	else
	{
		linea = sacalinea(canasta);
		canasta = sacacosa(canasta);
	}
	return (linea);
}

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
// // int	main(void)
// {
// 	// char	*a;
// 	// char	*b;
// 	// char	*c;
// 	char	*d;
// 	// char	*j;
// 	int		x;
// 	int		fd;
 
// 	// fd = open("prueba.txt", O_RDONLY);
// 	// a = bucledelee(fd, "ldiufgsidg");
// 	// b = sacalinea(a);
// 	// c = sacacosa(a);
// 	// fd = open("prueba.txt", O_RDONLY);
// 	// d = sacamalinea(fd);
// 	// j = ft_strjoin("avanico", "camaron");
// 	x = 0;
// 	// printf("\n\n%s\n\n", a);
// 	// printf("\n\n%s\n\n", b);
// 	// printf("\n\n%s\n\n", c);
// 	// printf("\n\n%s\n\n", d);
// 	// printf("\n\n%s\n\n", j);
// 	fd = open("prueba.txt", O_RDONLY);
// 	while (x < 10)
// 	{
// 		d = get_next_line(fd);
// 		printf("\n>%s<\n", d);
// 		x++;
// 	}
// 	close(fd);
// }
