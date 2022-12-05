/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedelin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 16:32:00 by tedelin           #+#    #+#             */
/*   Updated: 2022/11/20 16:32:03 by tedelin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4096
# endif

# include <stddef.h>

char	*ft_checkstash(char **stash);
int		ft_read(int fd, char **buff);
char	*ft_line(char **buff, char **stash);
char	*ft_lastline(char **stash);
size_t	ft_strlen(const char *s);
int		ft_alloc(char *buff);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s, char *f);
char	*get_next_line(int fd);

#endif
