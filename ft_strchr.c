/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoracho <amoracho@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 17:48:23 by amoracho          #+#    #+#             */
/*   Updated: 2020/01/29 16:01:08 by amoracho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *s, int c)
{
	int i;

	i = 0;
	while ((*(s + i) != '\0') && (*(s + i) != c))
		i++;
	if (*(s + i) != c)
		return (0);
	else
		return (s + i);
}
/*
**int main(int argc, char **argv)
**{
**	(void)argc;
**	printf("%s\n%s",
**		ft_strchr(argv[1],argv[2][0]), strchr(argv[1], argv[2][0]));
**}
*/
