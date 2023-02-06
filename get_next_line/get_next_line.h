/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lesanche <lesanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:39:16 by lesanche          #+#    #+#             */
/*   Updated: 2022/10/26 18:09:37 by lesanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
char	*ft_strrchr(const char *s, int c);
char	*ft_strjoin(const char *s1, const char *s2);
char	*bucledelee(int fd, char *canasta, int *readflag);
char	*sacalinea(char *canasta);
char	*sacacosa(char *canasta);
char	*get_next_line(int fd);
void	*ft_calloc(size_t cont, size_t size);
void	*ft_memset(void *dest, int s, size_t v);
void	ft_bzero(void *dst, size_t n);

#endif