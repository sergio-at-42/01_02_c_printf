/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Serge <serge.beldjaoui@learner.42.tech>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:39:35 by sbeldjao          #+#    #+#             */
/*   Updated: 2025/11/30 14:45:13 by Serge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdint.h>
#include <string.h>

void	ft_suspend_display()
{
	int	i;

	while (scanf("%d", &i) == 1);
}

int	main()
{
	size_t	nb_char;
	char	c = 'W';
	char	str[32] = "Le guide du routard galactique\0";
	char	*p = &c;
	int		d = -4242;
	int		i = 642;
	unsigned int	u = 96;
	unsigned int	x = 196;
	unsigned int	X = 296;

	// char	str_qwerty[7] = "qwerty\0";
	// char	str_box[7] = "vide\0";
	// char	str_bigbox[19] = "Big box vide qwerty";
	// char	str_num[6] = "75842\0";
	// char	**str_tab;
	
	nb_char = 0;
	
	nb_char = ft_printf("Affiche un caractere \\0 ==> >%c<\n", '\0');
	nb_char = ft_printf("Affiche un caractere \\255 ==> >%c<\n", '\255');
	nb_char = ft_printf("Affiche un caractere %%c ==> >%c<\n", 'H');
	nb_char = ft_printf("Affiche une variable char ==> >%c<\n", c);
	write(1, "1...+...1^0...+...2^0...+...3^0...+...4^0...+...5^0...+...6^0...+...7^0......80^\n", 81);

	printf("nb_car ==> %u\n\n", nb_char);

	nb_char = ft_printf("Affiche une string NULL ==> >%s<\n", NULL);
	nb_char = ft_printf("Affiche une string vide ==> >%s<\n", "");
	nb_char = ft_printf("Affiche une string %%s ==> >%s<\n", "Salut, et encore merci pour le poisson :-)");
	nb_char = ft_printf("Affiche une variable string ==> >%s<\n", str);
	write(1, "1...+...1^0...+...2^0...+...3^0...+...4^0...+...5^0...+...6^0...+...7^0......80^\n", 81);

	printf("nb_car ==> %u\n\n", nb_char);

	nb_char = ft_printf("Affiche un pointer NULL ==> >%p<\n", NULL);
	nb_char = ft_printf("Affiche un pointer %%p ==> >%p<\n", &nb_char);
	nb_char = ft_printf("Affiche une variable pointer ==> >%p<\n", p);
	printf("printf de Pointer : >%p<", p);
	write(1, "1...+...1^0...+...2^0...+...3^0...+...4^0...+...5^0...+...6^0...+...7^0......80^\n", 81);

	printf("nb_car ==> %u\n\n", nb_char);

	printf("NULL ==> >%d<\n", NULL);
	printf("INT32_MIN ==> >%d<\n", INT32_MIN);
	printf("INT32_MAX ==> >%d<\n", INT32_MAX);
	printf("314 ==> >%d<\n", 314);
	nb_char = ft_printf("Affiche un decimal %%d %% ==> >%d< >%d<\n", 2048, 50);
	nb_char = ft_printf("Affiche une variable decimal ==> >%d<\n", d);
	write(1, "1...+...1^0...+...2^0...+...3^0...+...4^0...+...5^0...+...6^0...+...7^0......80^\n", 81);

	printf("nb_car ==> %u\n\n", nb_char);

	printf("NULL ==> >%i<\n", NULL);
	printf("INT32_MIN ==> >%i<\n", INT32_MIN);
	printf("INT32_MAX ==> >%i<\n", INT32_MAX);
	nb_char = ft_printf("Affiche un entier signe %%i ==> >%i<\n", -4242);
	nb_char = ft_printf("Affiche une variable entiere ==> >%i<\n", i);
	write(1, "1...+...1^0...+...2^0...+...3^0...+...4^0...+...5^0...+...6^0...+...7^0......80^\n", 81);

	printf("nb_car ==> %u\n\n", nb_char);

	printf("NULL ==> >%u<\n", NULL);
	printf("UINT32_MAX ==> >%u<\n", UINT32_MAX);
	nb_char = ft_printf("Affiche un entier NON signe %%u ==> >%u<\n", 848484);
	nb_char = ft_printf("Affiche une variable entiere non signee ==> >%u<\n", u);
	write(1, "1...+...1^0...+...2^0...+...3^0...+...4^0...+...5^0...+...6^0...+...7^0......80^\n", 81);

	printf("nb_car ==> %u\n\n", nb_char);

	printf("NULL ==> >%x<\n", NULL);
	printf("UINT32_MAX ==> >%x<\n", UINT32_MAX);
	nb_char = ft_printf("Affiche un hexa minuscule %%x ==> >%x<\n", 6969);
	nb_char = ft_printf("Affiche une variable hexa minuscule ==> >%x<\n", x);
	write(1, "1...+...1^0...+...2^0...+...3^0...+...4^0...+...5^0...+...6^0...+...7^0......80^\n", 81);

	printf("nb_car ==> %u\n\n", nb_char);

	printf("NULL ==> >%X<\n", NULL);
	printf("UINT32_MAX ==> >%X<\n", UINT32_MAX);
	nb_char = ft_printf("Affiche un hexa majuscule %%X ==> >%X<\n", 1212);
	nb_char = ft_printf("Affiche une variable hexa majuscule ==> >%X<\n", X);
	write(1, "1...+...1^0...+...2^0...+...3^0...+...4^0...+...5^0...+...6^0...+...7^0......80^\n", 81);

	printf("nb_car ==> %u\n\n", nb_char);

	nb_char = ft_printf("Affiche un %% ==> >%%<\n");
	write(1, "1...+...1^0...+...2^0...+...3^0...+...4^0...+...5^0...+...6^0...+...7^0......80^\n", 81);

	printf("nb_car ==> %u\n\n", nb_char);

	nb_char = ft_printf("Le guide du routard galactique, %%c : >%c<, %%d : >%d< , %%s : >%s<, %%X : >%X<\n", 'H', 42, "Hello !!!", 69);
	write(1, "1...+...1^0...+...2^0...+...3^0...+...4^0...+...5^0...+...6^0...+...7^0......80^\n", 81);
	printf("nb_car ==> %u\n\n", nb_char);


// ft_suspend_display();

	return (0);
}
