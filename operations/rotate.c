/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vloth <vloth@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:31:34 by engo              #+#    #+#             */
/*   Updated: 2022/10/10 22:55:47 by vloth            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_dlist *stack_a, t_dlist *stack_b)
{
	int	tmp;
	int	i;

	tmp = stack_a->begin->value;
	i = stack_a->begin->index;
	pop_front_dlist(stack_a);
	push_back_dlist(stack_a, tmp);
	stack_a->end->index = i;
	find_target(stack_a, stack_b);
	find_cost_a(stack_a);
	find_cost_b(stack_b);
	find_total_cost(stack_a, stack_b);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_dlist *stack_a, t_dlist *stack_b)
{
	int	tmp;
	int	i;

	tmp = stack_b->begin->value;
	i = stack_b->begin->index;
	pop_front_dlist(stack_b);
	push_back_dlist(stack_b, tmp);
	stack_b->end->index = i;
	find_target(stack_a, stack_b);
	find_cost_b(stack_b);
	find_total_cost(stack_a, stack_b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_dlist *stack_a, t_dlist *stack_b)
{
	int	tmp;
	int	i;

	tmp = stack_a->begin->value;
	i = stack_a->begin->index;
	pop_front_dlist(stack_a);
	push_back_dlist(stack_a, tmp);
	stack_a->end->index = i;
	tmp = stack_b->begin->value;
	i = stack_b->begin->index;
	pop_front_dlist(stack_b);
	push_back_dlist(stack_b, tmp);
	stack_b->end->index = i;
	find_target(stack_a, stack_b);
	find_cost_a(stack_a);
	find_cost_b(stack_b);
	find_total_cost(stack_a, stack_b);
	ft_putstr_fd("rr\n", 1);
}
