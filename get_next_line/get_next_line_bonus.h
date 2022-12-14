/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:58:22 by malancar          #+#    #+#             */
/*   Updated: 2023/01/05 15:43:55 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H 
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_substr(char *s, int start, int len);
char	*ft_strdup(char **s);
char	*ft_memmove(char *dest, char *src, int n);
char	*ft_checkn(char **save, int n);
void	ft_check(char **save, char *buf);
void	ft_check_read(char *buf, int r);
int		ft_strlen(char *str);
int		ft_strchr(char *str, char c);
#endif
