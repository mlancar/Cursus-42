/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:27:58 by malancar          #+#    #+#             */
/*   Updated: 2022/11/15 14:08:48 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>

int	main(void)
{
	int	test;
	int	i;

	printf("ft_isalpha : ");
	
	test = 1;
	i = -200;
	
	while (i < 250)
	{
		if ((ft_isalpha(i) > 0 && !isalpha(i))
			|| (!ft_isalpha(i) && isalpha(i) > 0))
		{
			printf("Erreur pour i = %d, ma fonction = %d, la vrai fonction = %d\n",
				i, ft_isalpha(i), isalpha(i));
		}
		i++;
	}
	if (test)
		printf("oki\n");
	
	printf("ft_isdigit : ");
	
	test = 1;
	i = -200;
	
	while (i < 250)
	{	
		if ((ft_isdigit(i) > 0 && !isdigit(i))
			|| (!ft_isdigit(i) && isdigit(i) > 0))
		{
			printf("Erreur pour i = %d, ma fonct = %d, la vrai fonction = %d\n",
				i, ft_isdigit(i), isdigit(i));
		}
		i++;
	}
	if (test != 0)
		printf("oki\n");
	
	printf("ft_isalnum : ");

	test = 1;
	i = -200;

	while (i < 250)
	{
		if ((ft_isalnum(i) > 0 && !isalnum(i))
			|| (!ft_isalnum(i) && isalnum(i) > 0))
		{
			printf("Erreur pour i = %d, ma fonction = %d, la vrai fonction = %d\n",
				i, ft_isalnum(i), isalnum(i));
		}
		i++;
	}
	if (test)
		printf("oki\n");
	
	printf("ft_isascii : ");
	
	test = 1;
	i = -250;

	while (i < 250)
	{
		if ((ft_isascii(i) > 0 && !isascii(i))
			|| (isascii(i) > 0 && !ft_isascii(i)))
		{
			printf("Erreur pour i = %d, ma foction = %d, la vrai fonction = %d\n",
				i, ft_isascii(i), isascii(i));
		}
		i++;
	}
	if (test)
		printf("oki\n");
	
	printf("ft_isprint : ");
	
	test = 1;
	i = -200;
	
	while (i < 250)
	{
		if ((ft_isprint(i) > 0 && !isprint(i))
			|| (isprint(i) > 0 && !ft_isprint(i)))
		{
			printf("Erreur pour i = %d, ma fonction = %d, la vrai fonction = %d\n",
				i, ft_isprint(i), isprint(i));
		}
		i++;
	}
	if (test)
		printf("oki\n");
	
	printf("ft_strlen  : ");
	
	test = 1;
	i = 0;
	char str[100] = "pouet";
	char str2[100] = "";
	
	while (str[i])
	{
		if (( ft_strlen(str) !=  strlen(str)))
		{
			printf("Erreur pour i = %d, ma fonction = %lu, la vrai fonction = %lu\n",
				i, ft_strlen(str), strlen(str));
		}
		if (( ft_strlen(str2) !=  strlen(str2)))
		{
			printf("Erreur pour i = %d, ma fonction = %lu, la vrai fonction = %lu\n",
				i, ft_strlen(str), strlen(str));	
		}

		i++;
	}
	if (test)
		printf("oki\n");

	
	printf("ft_strncmp : ");
	
	test = 1;
	i = 0;

	char s1[100] = "ouii";
	char s2[100] = "ouitte";
	char s3[100] = "dferfewfw";
	char s4[100] = "fdsfsd";
	char s5[100] = "";
	char s6[100] = "";
	int	n = 0;	
	
	while (i < n)
	{
		if ((ft_strncmp(s1, s2, 4) > 0 && !strncmp(s1, s2, 4))
				|| (strncmp(s1, s2, 4) > 0 && !ft_strncmp(s1, s2, 4)))
		{
				printf("Erreur pour i = %u, ma fonction = %u, la vrai fonction = %u\n",
					i, ft_strncmp(s1, s2, 4), strncmp(s1, s2, 4));
		}
		if ((ft_strncmp(s3, s4, 8) > 0 && !strncmp(s3, s4, 8))
				|| (strncmp(s3, s4, 8) > 0 && !ft_strncmp(s3, s4, 8)))
		{
				printf("Erreur pour i = %u, ma fonction = %u, la vrai fonction = %u\n",
					i, ft_strncmp(s3, s4, 8), strncmp(s3, s4, 8));
		}

		if ((ft_strncmp(s5, s6, 0) > 0 && !strncmp(s5, s6, 0))
				|| (strncmp(s5, s6, 0) > 0 && !ft_strncmp(s5, s6, 0)))
		{
				printf("Erreur pour i = %u, ma fonction = %u, la vrai fonction = %u\n",
					i, ft_strncmp(s5, s6, 0), strncmp(s5, s6, 0));
		}
		i++;
	}
	if (test)
		printf("oki\n");

	printf("ft_atoi    : ");
	
	char astr[100] = "pouette";
	char astr2[100] = "";
	
	test = 1;
	i = 0;

	while (astr[i])
	{
		if ((ft_atoi(astr) > 0 && !atoi(astr)) ||
				(atoi(astr) > 0 && !ft_atoi(astr)))
		{
			printf("Erreur pour str %d, ma fonction = %d, la vrai fonction = %d\n",
					i, ft_atoi(astr), atoi(astr));
		}	
		if ((ft_atoi(astr2) > 0 && !atoi(astr2)) ||
				(atoi(astr2) > 0 && !ft_atoi(astr2)))
		{
			printf("Erreur pour str %d, ma fonction = %d, la vrai fonction = %d\n",
					i, ft_atoi(astr2), atoi(astr2));
		}

		i++;
	}
	if (test)
		printf("oki\n");

	
	printf("ft_strlcpy : ");
	
	test = 1;
	i = 0;

	char src[100] = "salut";
	char dst[100];
	char dest[100];
	char src1[100] = "";
	char src2[100] = "potiron";
	char src3[100] = "compote";
	char src4[100] = "";
	int size = 15;

	while (i < size)
	{
		if ((ft_strlcpy(dst, src, 0) > 0 && !strlcpy(dest, src, 0))
			|| (strlcpy(dest, src, 0) > 0 && !ft_strlcpy(dst, src, 0)))
		{
			printf("Erreur pour i = %d, ma fonction = %ld, la vrai fonction = %ld\n",
				i, ft_strlcpy(dst, src, 0), strlcpy(dest, src, 0));
		}
		if ((ft_strlcpy(dst, src1, 4) > 0 && !strlcpy(dest, src1, 4))	
			|| (strlcpy(dest, src1, 4) > 0 && !ft_strlcpy(dst, src1, 4)))
		{
			printf("Erreur pour i = %d, ma fonction = %ld, la vrai fonction = %ld\n",
				i, ft_strlcpy(dst, src1, 4), strlcpy(dest, src1, 4));
		}
		if ((ft_strlcpy(dst, src2, 45) > 0 && !strlcpy(dest, src2, 45))
			|| (strlcpy(dest, src2, 45) > 0 && !ft_strlcpy(dst, src2, 45)))
		{
			printf("Erreur pour i = %d, ma fonction = %ld, la vrai fonction = %ld\n",
				i, ft_strlcpy(dst, src2, 45), strlcpy(dest, src2, 45));
		}
		if ((ft_strlcpy(dst, src3, -12) > 0 && !strlcpy(dest, src3, -12))
			|| (strlcpy(dest, src3, -12) > 0 && !ft_strlcpy(dst, src3, -12)))
		{
			printf("Erreur pour i = %d, ma fonction = %ld, la vrai fonction = %ld\n",
				i, ft_strlcpy(dst, src3, -12), strlcpy(dest, src3, -12));
		}
		if ((ft_strlcpy(dst, src4, 123456) > 0 && !strlcpy(dest, src4, 123456))
			|| (strlcpy(dest, src4, 123456) > 0 && !ft_strlcpy(dst, src4, 123456)))
		{
			printf("Erreur pour i = %d, ma fonction = %ld, la vrai fonction = %ld\n",
				i, ft_strlcpy(dst, src4, 123456), strlcpy(dest, src4, 123456));
		}
		i++;
	}
	if (test)
		printf("oki\n");

	printf("ft_strlcat : ");
	
	test = 1;
	i = 0;
	char src5[100] = "coucou";
	char dst2[100] = "tomate";
	char dst3[100] = "crouton";
	char dst4[100] = "oui";
	char dst5[100] = "";

	size = 30;
	
	while (i < size)
	{
		if ((ft_strlcat(dst2, src5, 16) > 0 && !strlcat(dst2, src5, 6))
			|| (strlcat(dst2, src5, 6) > 0 && !ft_strlcat(dst2, src5, 6)))
		{
			printf("Erreur pour i = %d, ma fonction = %ld, la vrai fonction = %ld\n",
				i, ft_strlcat(dst2, src5, 6), strlcat(dst2, src5, 6));
		}
		if ((ft_strlcat(dst3, src5, 30) > 0 && !strlcat(dst3, src5, 30))
			|| (strlcat(dst3, src5, 30) > 0 && !ft_strlcat(dst3, src5, 30)))
		{
			printf("Erreur pour i = %d, ma fonction = %ld, la vrai fonction = %ld\n",
					i, ft_strlcat(dst3, src5, 30), strlcat(dst3, src5, 30));
		}
		if ((ft_strlcat(dst4, src5, 22) > 0 && !strlcat(dst4, src5, 22))
			|| (strlcat(dst4, src5, 22) > 0 && !ft_strlcat(dst4, src5, 22)))
		{
			printf("Erreur pour i = %d, ma fonction = %ld, la vrai fonction = %ld\n",
				i, ft_strlcat(dst4, src5, 22), strlcat(dst4, src5, 22));
		}
		if ((ft_strlcat(dst5, src5, 0) > 0 && !strlcat(dst5, src5, 0))
			|| (strlcat(dst5, src5, 0) > 0 && !ft_strlcat(dst5, src5, 0)))
		{
			printf("Erreur pour i = %d, ma fonction = %ld, la vrai fonction = %ld\n",
				i, ft_strlcat(dst5, src5, 0), strlcat(dst5, src5, 0));
		}
		i++;
	}
	if (test)
		printf("oki\n");

	printf("ft_strchr  : ");
	
	test= 1;
	i = 0;

	char str3[100] = "les tardigrades ont un corps protégé par une cuticule et formé de quatre segments";
	int a = 'F';
	int b = 'a';
	int c = 'z';
	int d = ' ';
	int e = 127;

	while (str3[i])
	{
		if (((ft_strchr(str3, a) != 0 && !strchr(str3, a))
					|| (!ft_strchr(str3, a) && strchr(str3, a) != 0)))
		{
			printf("Erreur pour i = %d, ma fonction = %s, la vrai fonction = %s\n",
					i, ft_strchr(str3, a), strchr(str3, a));
		}
		 if (((ft_strchr(str3, b) != 0 && !strchr(str3, b))
                                        || (!ft_strchr(str3, b) && strchr(str3, b) != 0)))
                {
			printf("Erreur pour i = %d, ma fonction = %s, la vrai fonction = %s\n",
				i, ft_strchr(str3, b), strchr(str3, b));
                }
		 if (((ft_strchr(str3, c) != 0 && !strchr(str3, c))
                                        || (!ft_strchr(str3, c) && strchr(str3, c) != 0)))
                {
                	printf("Erreur pour i = %d, ma fonction = %s, la vrai fonction = %s\n",
					i, ft_strchr(str3, c), strchr(str3, c));
		}
		 if (((ft_strchr(str3, d) != 0 && !strchr(str3, d))
			|| (!ft_strchr(str3, d) && strchr(str3, d) != 0)))
                {
                        printf("Erreur pour i = %d, ma fonction = %s, la vrai fonction = %s\n",
                                        i, ft_strchr(str3, d), strchr(str3, d));
		}
		 if (((ft_strchr(str3, e) != 0 && !strchr(str3, e))
			|| (!ft_strchr(str3, e) && strchr(str3, e) != 0)))
		 {
                        printf("Erreur pour i = %d, ma fonction = %s, la vrai fonction = %s\n",
                                        i, ft_strchr(str3, e), strchr(str3, e));
		 }
		 i++;
	}
	if (test)
		printf("oki\n");

	printf("ft_strrchr : ");

	i = 0;
	test = 1;

	char str4[100] = "je suis une patate";
	int f = 'a';
	int g = 'w';
	int h = 'p';
	int k = 127;

	while(str4[i])
	{
		if ((ft_strrchr(str4, f) != 0 && !strrchr(str4, f))
			|| (strrchr(str4, f) != 0 && !ft_strrchr(str4, f)))
		{
			printf("Erreur pour i = %d, ma fonction = %s, la vrai fonction = %s\n",
					i, ft_strrchr(str4, f), strrchr(str4, f));
		}
		if ((ft_strrchr(str4, g) != 0 && !strrchr(str4, g))
                        || (strrchr(str4, g) != 0 && !ft_strrchr(str4, g)))
                {
                        printf("Erreur pour i = %d, ma fonction = %s, la vrai fonction = %s\n",
                                        i, ft_strrchr(str4, g), strrchr(str4, g));
                }
		if ((ft_strrchr(str4, h) != 0 && !strrchr(str4, h))
                        || (strrchr(str4, h) != 0 && !ft_strrchr(str4, h)))
                {
                        printf("Erreur pour i = %d, ma fonction = %s, la vrai fonction = %s\n",
                                        i, ft_strrchr(str4, h), strrchr(str4, h));
                }
		if ((ft_strrchr(str4, k) != 0 && !strrchr(str4, k))
                        || (strrchr(str3, k) != 0 && !ft_strrchr(str3, k)))
                {
                        printf("Erreur pour i = %d, ma fonction = %s, la vrai fonction = %s\n",
                                        i, ft_strrchr(str4, k), strrchr(str4, k));
                }

		i++;
	}

	if (test)
		printf("oki\n");

	printf("ft_tolower : ");
	
	
	c =  0;
	i = 128;
	while (c < i)
	{
		if ((ft_tolower(c) != 0 && !tolower(c))
				|| (tolower(c) != 0 && !ft_tolower(c)))
		{
			printf("Erreur pour c = %d, ma fonction = %d, la vrai fonction = %d\n",
				c, ft_tolower(c), tolower(c));
		}
		c++;
	}
	if (test)
		printf("oki\n");

	printf("ft_toupper : ");
	
	test = 1;
	c = 0;
	i = 128;
	while(c < i)
	{
		if ((ft_toupper(c) != 0 && !toupper(c)) 
				|| (toupper(c) != 0 && !ft_toupper(c)))
		{
			printf("Erreur pour c = %d, ma fonction = %d, la vrai fonction = %d\n",
				c, ft_toupper(c), toupper(c));
		}
		c++;
	}
	if (test)
		printf("oki\n");

	printf("ft_strnstr : ");
	
	test = 1;
	n = 50;

	i = 0;
	char s7[100] = "tres grande phrase pour un test, pas assez grande donc je continue d'ecrire";
	char s8[100] = "phrase";
	
	while (i < n)
	{
		if ((ft_strnstr(s7, s8, n) != 0 && !strnstr(s7, s8, n)) 
				|| (strnstr(s7, s8, n) != 0 && !ft_strnstr(s7, s8, n)))
			{
				printf("Erreur pour i = %d, ma fonction = %s, la vrai fonction = %s\n",
					i, ft_strnstr(s7, s8, n), strnstr(s7, s8, n));
			}
		i++;
	}
	if (test)
		printf("oki\n");

	printf("ft_memmove : ");

	test = 1;
	i = 0;

	char src6[500] = "niokiapoalerdelustrucru";
	char dst6[500];
	n = 15;
	
	while (i < n)
	{
		if ((ft_memmove(dst6, src6, n) != 0 && !memmove(dst6, src6, n))
				|| (memmove(dst6, src, n) != 0 && !ft_memmove(dst6, src6, n)))
		{
			printf("Erreur pour i = %d, ma fonction = %s, la vrai = %s\n",
					i, (char *)ft_memmove(dst6, src6, n),(char *) memmove(dst6, src6, n));
		}
		i++;
	}
	if(test)
		printf("oki\n");
	
	printf("ft_memchr  : ");

	test = 1;
	i = 0;

	c = 'a';
	n = 20;
	char str5[200] = "jesaispasquoiecriremaislaphrase doit etre longue ceci est un test";

	while (i < n)
	{
		if ((ft_memchr(str5, c, n) != 0 && !memchr(str5, c, n))
				|| (memchr(str5, c, n) != 0 && !ft_memchr(str5, c, n)))
		{
			printf("Erreur pour i = %d, ma fonction = %s\n, la vrai = %s\n",
				       	i, (char *)ft_memchr(str5, c, n), (char *)memchr(str5, c, n));
		}
		i++;
	}
	if (test)
		printf("oki\n");

	printf("ft_memcmp  : ");

	test = 1;
	i = 0;
	n = 0;
	char s11[200] = "oui";
	char s22[200] = "non";

	while (i < n)
	{
		if ((ft_memcmp(s11, s22, n) != 0 && !memcmp(s11, s22, n))
				|| (memcmp(s11, s22, n) != 0 && !ft_memcmp(s11, s22, n)))
		{
			printf("Erreur pour i = %d, ma fonction = %d\n, la vrai = %d\n",
					i, ft_memcmp(s11, s22, n), memcmp(s11, s22, n));
		}
		i++;
	}
	if (test)
		printf("oki\n");
	
	printf("ft_memcpy  : ");

	test = 1;
	i = 0;
	n = 2;
	char src7[100] = "salut";
	char dst7[100];
	
	while (i < n)
	{
		if ((ft_memcpy(dst7, src7, n) != 0 && !memcpy(dst7, src7, n))
				|| (memcpy(dst7, src7, n) != 0 && !ft_memcpy(dst7, src7, n)))
		{
			printf("Erreur pour i = %d, ma fonction = %ls, la vrai %ls\n", 
					i, (int *)ft_memcpy(dst7, src7, n), (int *)memcpy(dst7, src7, n));
		}
		i++;
	}
	if (test)
		printf("oki\n");

	printf("ft_memset  : ");

	test = 1;
	i = 0;
	c = 'z';
	n = 13;
	char ss[100] = "dfhdjfhopsdjfkdshgfkjldhojfdkfjgkjdfgggzzzfhksjdhfkj";

	while (i < n)
	{
		if ((ft_memset(ss, c, n) != 0 && !memset(ss, c, n))
				|| (memset(ss, c, n) != 0 && !ft_memset(ss, c, n)))
		{
			printf("Erreur pour i %d, ma fonction = %s, la vrai = %s\n",
					i, (char *)ft_memset(ss, c, n), (char *)memset(ss, c, n));
		}
		i++;
	}
	if (test)
		printf("oki\n");

	printf("ft_strdup  : ");

	test = 1;
	i = 0;
	char sss[100] = "salut";

	while (sss[i])
	{
		if ((ft_strdup(sss) != 0 && !strdup(sss))
				|| (strdup(sss) != 0 && !ft_strdup(sss)))
		{
			printf("Erreur pour i = %d, ma fonction = %s, la vrai = %s\n",
					i, ft_strdup(sss), strdup(sss));
		}
		i++;
	}
	if (test)
		printf("oki\n");

	printf("ft_calloc  : ");

	int slt = sizeof(int);

	test = 1;
	i = 0;
	size = 20;
	while (i < 20)
	{
		if ((ft_calloc(slt, size) != 0 && ! calloc(slt, size))
				|| (calloc(slt, size) != 0 && !ft_calloc(slt, size)))
		{
			printf("Erreur pour i = %d, ma fonction = %ls, la vrai = %ls\n",
					i, (int *)ft_calloc(slt, size), (int *)calloc(slt, size));
		}
		i++;
	}
	if (test)
		printf("oki\n");
	
	int fd = 1;
	c = 'z';
		
	 ft_putchar_fd(c, fd);
	 printf("\n");
	
	fd = 1;
	n = 100;

	ft_putnbr_fd(n, fd);
	printf("\n");

	
	fd = 1;
	char stringz[100] = "topinambour";

	ft_putstr_fd(stringz, fd);
	printf("\n");


	fd = 1;
	char chaine[100] = "#only god can save you";

	ft_putendl_fd(chaine, fd);
	
	printf("ft_substr : ");

	int j;
	
	test = 1;
	i = 0;
	j = 2;
	;
	char nul[100] = "salutcavaouiettoi";
	while (i < j)
	{
		if(ft_substr(nul, i, j) != 0 && !ft_substr(nul, i, j))
			printf("Erreur pour i = %d, et j = %d", i, j);
	i++;
	}
	if (test)
		printf("oki\n");
	
	printf("valeur renvoye : %s\n", ft_substr(nul, i, j));

	test = 1;
	char ss1[100] = "salut ";
	char ss2[100] = "ca va ?";

	if (ft_strjoin(ss1, ss2) != 0 && !ft_strjoin(ss1, ss2))
		printf("Erreur pour s1 = %s, et s2 = %s\n", ss1, ss2);

	printf("ft_strjoin : %s\n", ft_strjoin(ss1, ss2));
	//if (test)
	//	printf("oki\n");

		
	

}
