/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgalstya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 15:46:32 by lgalstya          #+#    #+#             */
/*   Updated: 2022/03/26 15:28:31 by lgalstya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c < 0 || c > 127)
		return ((char *) s);
	while (s[i] || c == 0)
	{
		if (s[i] == c)
			return ((char *) s + i);
		i++;
	}
	return (0);
}
