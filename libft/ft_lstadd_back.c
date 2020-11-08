/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agigi <agigi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 18:27:14 by agigi             #+#    #+#             */
/*   Updated: 2020/11/08 20:11:46 by agigi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		new->next = NULL;
		*lst = new;
		return ;
	}
	if (!lst || !new)
		return ;
	ft_lstlast(*lst)->next = new;
	new->next = NULL;
}
