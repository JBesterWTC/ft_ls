/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbester <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/14 13:34:30 by jbester           #+#    #+#             */
/*   Updated: 2016/06/17 17:25:18 by jbester          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	ft_output(t_entry *head)
{
	t_entry	*temp;

	temp = head;
	while (temp != NULL)
	{
		if (temp->name != NULL)
			ft_putstr(temp->name);
		temp = temp->next;
		ft_putchar('\n');
	}
	return (0);
}

int	ft_sort(char *dir)
{
	DIR				*d;
	struct dirent	*dp;
	t_entry			*head;
	t_entry			*newNode;
	t_entry			*new;

	new = NULL;
	newNode = NULL;
	head = (t_entry *)malloc(sizeof(t_entry));
	d = opendir(dir);
	newNode = head;
	while ((dp = readdir(d)) != NULL)
	{
		newNode->name = ft_strdup(dp->d_name);
		newNode->next = (t_entry *)malloc(sizeof(t_entry));
		newNode = newNode->next;
	}
	ft_putstr("Sort working\n");
	ft_output(head);
	ft_putstr("Head done\n");
	while (head != NULL)
	{		
		ft_compare(head, new);
		head = head->next;
	}
	ft_output(new);
	return (0);
}

int	ft_compare(t_entry *current, t_entry *new)
{
	t_entry	*temp;

	temp = 0;
	if (new == NULL)
	{
		new = (t_entry *)malloc(sizeof(t_entry));
		if (current->name != NULL)
		{
			new->name = ft_strdup(current->name);
			new->next = NULL;
		}
	}
	else if (current->name != NULL && ft_strcmp(current->name, new->name) >= 0)
	{
		if (ft_strcmp(current->name, new->name) == 0)
		{
			new = new->next;
			new->name = ft_strdup(current->name);
		}
		else
		{
			ft_putstr("Compare working\n");
			temp = new;
			new = (t_entry *)malloc(sizeof(t_entry));
			new->name = ft_strdup(current->name);
			new->next = temp;
		}
	}
	else if (current->next != NULL)
	 if (current->next != NULL)
	 {
		current = current->next;
		ft_compare(current,new->next);
	}
	return (0);
}
